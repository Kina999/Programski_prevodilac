%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"
  
  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int par_num = 1;
  int type;
  int i = 0;
  int br_arg = 0;
  int tip = 0;
  int simidx = 0;
  int varijabla_inc = 0;
  int tip_check_exp = 0;
  int lab_num = -1;
  int loop_num = -1;
  int when_num = -1;
  int glob_num = 0;
  int inc_idx = 0;
  int duzina = 0; 
  int ch_ex = -1;
  int is_it_ce = -1;
  int E_exit = -1;
  int iz2 = 0;
  int ce_num = -1;
  int niz[10];
  int dec[10];
  int poziv[10];
  int ret = 0;
  int provjera_num = 0;
  int whenzaskok = 0;
  int alone = 0;
  int otherwise = 0;
  int x = 0;
  int is_inc = 0;
  int is_dec = 0;
  int red_check_literala = 1;
  FILE *output;
%}

%union {
  int i;
  char *s;
}

%token FUNC
%token LOOPL
%token LOOPR
%token LOOP
%token PUKA
%token MANAWA
%token HOPAU
%token CHECK
%token WHEN
%token BREAK
%token OTHERWISE
%token <s> INUM
%token <s> UINUM
%token RETURN
%token <i> TYPE
%token IF
%token ELSE
%token <s> ID
%token EQ_OP
%token <i> REL_OP
%token <i> ADD_SUB
%token LBRA
%token RBRA
%token LCURLYBRA
%token RCURLYBRA
%token SEMI
%token COMMA
%token INC
%token DEC
%token EC
%token QM
%token DT

%type <i> literal ex assignment_statement exp return rel_exp function_call argument lit void_call if_part //return_body 
%type <i> increment  condition_exp iz loop decrement

%nonassoc ONLY_IF 
%nonassoc ELSE

%%
	program
		: globals
		{
			for(int i = 0; i < 10; i++){niz[i] = 0;dec[i] = 0;poziv[i] = 0;}
		} function_list
		{
			
        		if(lookup_symbol("main", FUN) == -1)
          			err("undefined reference to 'main'");
     		}
		;
		
	globals 
		:
		| globals TYPE ID 
		{ 
			type = $2;
			if(lookup_symbol($3, GLOB) == NO_INDEX){
	           		insert_symbol($3, GLOB, $2, glob_num, NO_ATR,NO_VAL);
	           		glob_num++;
	           		if(get_type(lookup_symbol($3,GLOB)) == 3){
					warn("Variables can not be void!");
				}
	       	}else {
	           		err("redefinition of '%s'", $3);  
	           	}
	        simidx = lookup_symbol($3, GLOB);
	        code("\n%s:", get_name(simidx));
	        code("\n\t\tWORD \t1");
		}
		m SEMI
		;
	
	m
		:
		| EQ_OP literal
		{
			if(type != get_type($2))
          		  err("incompatible types in assignment");
		}
		;
	
	function_list
		: function
		| function_list function
		;
		
	function
		: FUNC TYPE ID 
		{
      		  fun_idx = lookup_symbol($3, FUN);
     		   if(fun_idx == NO_INDEX)
     		     fun_idx = insert_symbol($3, FUN, $2, NO_ATR, NO_ATR, NO_VAL);
     		   else 
    		      err("redefinition of function '%s'", $3);
    		   code("\n%s:", $3);
        	   code("\n\t\tPUSH\t%%14");
	           code("\n\t\tMOV \t%%15,%%14");
      		}
      		LBRA parametri RBRA body
      		{
       		clear_symbols(fun_idx + 1);
       		var_num = 0;
       		par_num = 1;
       		br_arg = 0;
       		i = 0;
       		ret = 0;
       		code("\n@%s_exit:", $3);
        		code("\n\t\tMOV \t%%14,%%15");
		        code("\n\t\tPOP \t%%14");
        		code("\n\t\tRET");
      		}
		;

	parametri
		:
			{ set_atr1(fun_idx, 0); } 
		| xx
		;
	xx
		: TYPE ID
		{
				
		
        		insert_symbol($2, PAR, $1, par_num, NO_ATR,NO_VAL);
        		set_atr1(fun_idx, par_num++);
        		set_atr2(fun_idx, $1, i++);
        		
        		if(get_type(lookup_symbol($2,PAR)) == 3)
				warn("Parameters can not be void!");
      		}
		| xx COMMA TYPE ID
		{
		
			insert_symbol($4, PAR, $3, par_num, NO_ATR,NO_VAL);
        		set_atr1(fun_idx, par_num++);
        		set_atr2(fun_idx, $3, i++);
			
			if(lookup_symbol($4,PAR) == 3)
				warn("Parameters can not be void!");
		}
		;
	
	body 
		: LCURLYBRA variable_list 
		{
			if(var_num)
				code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
			code("\n@%s_body:", get_name(fun_idx));
			for(int i = 0; i <= get_last_element(); i++){
				if((get_kind(i) == VAR || get_kind(i) == GLOB) && get_atr2(i , 0) != 0){
					gen_mov(get_atr2(i,0), i);
					set_atr2(i, 0, 0);
				}	
			}
		}
		statement_list 
		{
			for(int i = 0; i <= get_last_element(); i++){
				if((get_kind(i) == VAR) && get_vr(i) == NO_VAL){//dodala sam vr u tabelu simbola 
					err("variable %s without value!", get_name(i));
				}
			}
			if((get_type(fun_idx) != 3) && (ret == 0)){
				err("Non void function does not have return value!");
			}
		}
		RCURLYBRA
		;
	
	variable_list
		: 
		| variable_list variable_decl
		;
	
	variable_decl
		: TYPE 
		{
			type = $1;
		}
		more SEMI
		;
		
	more
		: ID 
		{
		if(lookup_symbol($1, VAR|PAR) == NO_INDEX){
	           insert_symbol($1, VAR, type, ++var_num, NO_ATR,NO_VAL);
	           if(get_type(lookup_symbol($1,VAR)) == 3){
				warn("Variables can not be void!");
		}
	        }else {
	           err("redefinition of '%s'", $1);}
		simidx = lookup_symbol($1, VAR|PAR);
		}
		x
		| more COMMA ID 
		{ 
	        if(lookup_symbol($3, VAR|PAR) == NO_INDEX){
	           insert_symbol($3, VAR, type, ++var_num, NO_ATR,NO_VAL);
	           if(get_type(lookup_symbol($3,VAR)) == 3){
				warn("Variables can not be void!");
		}
	        }else {
	           err("redefinition of '%s'", $3);  }
	        simidx = lookup_symbol($3, VAR|PAR);
		}
		x
		;
	
	x
		:
		| EQ_OP literal		//Omogucena dodjela vrijednosti unutar definicije
		{
		if(type != get_type($2))
          		  err("incompatible types in assignment");
          	set_vr(simidx, VAL);
          	set_atr2(simidx, $2, 0);
		}
		;
		
	statement_list
		:
		| statement_list statement
		;
	
	statement 
		: compound_statement
		| assignment_statement
		| if_else
		| increment
		| decrement
		| void_call SEMI
		| loop
		| check
		| return
		;
		
	check	
		: CHECK LBRA ID 
		{
			tip_check_exp = lookup_symbol($3,VAR);
			if(lookup_symbol($3, VAR) == NO_INDEX)
        		  err("'%s' undeclared", $3);
        		if(get_vr(lookup_symbol($3, VAR)) == NO_VAL){//dodala sam vr u tabelu simbola 
				err("variable %s without value!", get_name(lookup_symbol($3, VAR) ));
			}
			code("\n\t\tJMP \t@provjera%d", provjera_num);
        		 
		}
		RBRA LCURLYBRA check_body otherwise_part RCURLYBRA
		{
			
			if(otherwise == 0){
				code("\n\t\tJMP \t@check_exit%d", ch_ex + 1);
			}
			code("\n@provjera%d:", provjera_num++);
			int p = 1;
			for(int l = 0; l <= get_last_element(); l++){//da bi mi ispravnim redom generisalo provjeru za literale
				for(int i = 0; i <= get_last_element(); i++){		
					if((get_atr1(i) == p) && (get_kind(i) == LIT)){
						gen_cmp(tip_check_exp, i);
							code("\n\t\tJEQ \t@when%d", whenzaskok++);
					}
				}
				p++;
			}
			p = 1;
			for(int i = 0; i <= get_last_element(); i++){		
				if((get_atr1(i) == 1) && (get_kind(i) == LIT)){
					set_atr1(i,0);
				}
				red_check_literala = 1;
			}
			if(otherwise == 1){
				code("\n\t\tJMP \t@otherwise%d", whenzaskok++);
			}
			otherwise = 0;
			code("\n@check_exit%d:", ++ch_ex);
			
		}
		;
		
	check_body
		: WHEN literal EC
		{
		
			if(get_type($2) != get_type(tip_check_exp))
				err("Different types in check and when!");			
			for(int i = 0; i <= get_last_element(); i++){
				if((get_atr1(i) == 1) && (get_name(i) == get_name($2))){
					err("Can not make double value in with");
				}
			}
			set_check($2,red_check_literala++);
			code("\n@when%d:", ++when_num);
		}
		statement break_part
		| check_body WHEN literal EC 
		{
			if(get_type($3) != get_type(tip_check_exp))
				err("Different types in check and when!");
			for(int i = 0; i <= get_last_element(); i++){		
				if((get_atr1(i) == 1) && (get_name(i) == get_name($3))){
					err("Can not make double value in with");
				}
			}
			set_check($3,red_check_literala++);
			code("\n@when%d:", ++when_num);
		}
		statement break_part
		;
	
	break_part
		: 
		| BREAK 
		{
			code("\n\t\tJMP \t@check_exit%d", ch_ex + 1);
		}
		SEMI
		;
	
	otherwise_part
		: 
		| OTHERWISE EC{
			code("\n@otherwise%d:", ++when_num);
			otherwise = 1;
		}
		assignment_statement
		{
			code("\n\t\tJMP \t@check_exit%d", ch_ex + 1);
		}
		;
		
	void_call
		: ID 
		{
        		fcall_idx = lookup_symbol($1, FUN);
        		if(fcall_idx == NO_INDEX)
      			  err("'%s' is not a function", $1);
      			if(get_type(fcall_idx) != 3)
				warn("Non void function!");
      			
      		}
		LBRA argument RBRA
		{
       		 if(get_atr1(fcall_idx) != $4)
      			    err("wrong number of args to function '%s'", get_name(fcall_idx));      			          			 	
      			 code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
	        if($4 > 0)
        	  code("\n\t\t\tADDS\t%%15,$%d,%%15", $4 * 4);
      			set_type(FUN_REG, get_type(fcall_idx));
        		$$ = FUN_REG;//voidcall napravi 
      		}
      		;
		
	loop
		:  LOOPL LOOP LOOPR
		{
			$<i>$ = ++loop_num;
        		code("\n@loop%d:", loop_num);
		}
		LCURLYBRA statement_list RCURLYBRA LOOPL PUKA MANAWA LBRA rel_exp
		{
			code("\n\t\t%s\t@false%d", jumps[$12], $<i>4);//jumps jer skace na petlju kad uslov nije ispunjen
			code("\n@true%d:", $<i>4);
		}
		RBRA HOPAU LOOP LOOPR SEMI
		{
		 	code("\n\t\tJMP \t@loop%d", $<i>4);
        		code("\n@false%d:", $<i>4);
       		$$ = $<i>4;
		}
		;
		
	decrement
		: ID DEC SEMI
		{
			
			int t1 = get_type(lookup_symbol($1,VAR|PAR|GLOB));
			code("\n\t\t%s\t", ar_instructions[1 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(lookup_symbol($1,VAR|PAR|GLOB));
		        code(",");
		        code("$1");
		        code(",");
		        free_if_reg(lookup_symbol($1,VAR|PAR|GLOB));
		        $$ = take_reg();
		        gen_sym_name(lookup_symbol($1,VAR|PAR|GLOB));
		        set_type($$, t1);
		}
		;
		
	increment
		: ID INC SEMI
		{
			int t1 = get_type(lookup_symbol($1,VAR|PAR|GLOB));
			code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(lookup_symbol($1,VAR|PAR|GLOB));
		        code(",");
		        code("$1");
		        code(",");
		        free_if_reg(lookup_symbol($1,VAR|PAR|GLOB));
		        $$ = take_reg();
		        gen_sym_name(lookup_symbol($1,VAR|PAR|GLOB));
		        set_type($$, t1);
		}
		;
		
	compound_statement
		: LCURLYBRA statement_list RCURLYBRA
		;
		
	assignment_statement
		: ID EQ_OP exp SEMI
		 {
        		int idx = lookup_symbol($1, VAR|PAR|GLOB);
        		if(idx == NO_INDEX)
        		  err("invalid lvalue '%s' in assignment", $1);
        		else
          		if(get_type(idx) != get_type($3))
          		  err("incompatible types in assignment");
          		set_vr(idx, VAL);
          		int reg;
          		if(is_inc == 1 || is_dec == 1){
          		reg = take_reg();
          			gen_mov($3,reg);
          		}else{
          			gen_mov($3, idx);
          		}
          		for(int j = 0; j < 10; j++){//inkrement obavi tek kada rez smjestis u id
		        	if(niz[j] == 0 && dec[j] == 0){
		        		break;
		        	}
		        	int v = niz[j];
		        	int t1 = get_type(v); 
		        	if(dec[j] == 0){ 
        		code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
        		}else{
        			code("\n\t\t%s\t", ar_instructions[1 + (t1 - 1) * AROP_NUMBER]);
        		}
		        gen_sym_name(v);
		        code(",");
		        code("$1");
		        code(",");
		        gen_sym_name(v);
		        free_if_reg(v);
		        v = take_reg();
		        
		        set_type(v, t1);
		        }
		        for(int j = 0; j < 10; j++){
		        	niz[j] = 0;
		        	dec[j] = 0;
		        }
		        duzina = 0;
		        if(is_inc == 1 || is_dec == 1){
		        	gen_mov(reg, idx);
		        	is_inc = 0;
		        	is_dec = 0;
		        }
      		}
		;
	
	exp
		: ex 
		| exp ADD_SUB ex
		{
		        
		        if(get_type($1) != get_type($3))
		          err("invalid operands: arithmetic operation");
		          $$ = take_reg();//da ako imam check exp stavi oboje u isti registar zbog kasnijeg smjestanja rezultata
		         
		         
		         if(is_it_ce == 1){
			         code("\n@expression%d:", ++ce_num);
			         int t1 = get_type($1);    
        			code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);
			        gen_sym_name($1);
			        code(",");
			        gen_sym_name(iz2);
			        code(",");
			        free_if_reg(iz2);
			        free_if_reg($1);
			        //$$ = take_reg();
			        gen_sym_name($$);
		    	    	set_type($$, t1);
			        
			        code("\n\t\tJMP \t@expression_exit%d", ++E_exit);
			        code("\n@expression%d:", ++ce_num);
			        
		         }
		        int t1 = get_type($1);    
        		code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name($1);
		        code(",");
		        gen_sym_name($3);
		        code(",");
		        free_if_reg($3);
		        free_if_reg($1);
		        
		        gen_sym_name($$);
		        set_type($$, t1);
		        
		        if(is_it_ce == 1){
		        	code("\n@expression_exit%d:", E_exit);
		        	is_it_ce = -1;
		        }
		}
		;
		
	condition_exp
		: LBRA rel_exp
		{
			code("\n\t\t%s\t@expression%d", opp_jumps[$2], ce_num + 2);//ce_num + 2 jer ce uvijek krajnja labela biti + 2 u odnosu na pocetnu
      		  	
		}
		RBRA QM iz DT iz
		{
			is_it_ce = 1;
			
			iz2 = $6;
			
			$$ = $8;
		}
		;
	
	iz
		: ID
		{$$ = lookup_symbol($1, VAR|PAR|GLOB);}
		| literal
		;	
	
	ex
		: literal
		| condition_exp
		| ID 
		{
			varijabla_inc = lookup_symbol($1,VAR|PAR|GLOB);
			inc_idx = lookup_symbol($1, VAR|PAR|GLOB);
		}
		ix
		{
        		$$ = lookup_symbol($1, VAR|PAR|GLOB);
        		if($$ == NO_INDEX)
        		  err("'%s' undeclared", $1); 

      		}
		| function_call
		 {
        		$$ = take_reg();
		        gen_mov(FUN_REG, $$);
      		}
		| LBRA exp RBRA
		{ $$ = $2; }
		;
		
	ix
		:
		| ids
		| decs
		;
		
	decs	
		: DEC
		{
		if(get_kind(varijabla_inc) != PAR){
			if(get_vr(varijabla_inc) == NO_VAL)
				err("can not increment variable vithout value");
			}	
			niz[duzina] = inc_idx;
			dec[duzina] = inc_idx;
			duzina++;
			is_dec = 1;
		}
		;
		
	ids
		: INC
		{
			if(get_kind(varijabla_inc) != PAR){
			if(get_vr(varijabla_inc) == NO_VAL)
				err("can not increment variable vithout value");
			}	
			niz[duzina] = inc_idx;
			duzina++;
			is_inc = 1;
		}
		;
	
	literal
		: INUM
		{ $$ = insert_literal($1, INT); }
		| UINUM
		{ $$ = insert_literal($1, UINT); }
		;
		
	function_call
		: ID 
		{
        		fcall_idx = lookup_symbol($1, FUN);
        		if(fcall_idx == NO_INDEX)
      			  err("'%s' is not a function", $1);
      		}
		LBRA argument RBRA
		{
       		 if(get_atr1(fcall_idx) != $4)
      			    err("wrong number of args to function '%s'", get_name(fcall_idx));   
      			 code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
	        
		        if($4 > 0)
        		  code("\n\t\t\tADDS\t%%15,$%d,%%15", $4 * 4);
      			set_type(FUN_REG, get_type(fcall_idx));
        		$$ = FUN_REG;
      		}
		;
	
	argument
		: 					//vise ili nijedan argument u pozivu funkcije
		{ $$ = 0; }
		| lit
		{
			x--;	//jer je x povecano i poslije zadnjeg argumenta, znaci za 1 je veci od broja argumenata!
			for(int j = x; j >= 0; j--){
	      			code("\n\t\t\tPUSH\t");
	      			gen_sym_name(poziv[j]);
	      			printf("%d", poziv[j]);
      				poziv[j] = 0;
      		}
      		
      			x = 0;
			$$ = br_arg;
			br_arg = 0;
		}
		;
		
	lit
		: exp
		{ 
      		if(get_atr2(fcall_idx, br_arg) != get_type($1))
        		err("incompatible type for argument in '%s'",get_name(fcall_idx));
        	free_if_reg($1);
      		$$ = br_arg++;
      		poziv[x] = $1;
      		x++;
    		}
		| lit COMMA exp
		
		{
		if(get_atr2(fcall_idx, br_arg) != get_type($3))
        		err("incompatible type for argument in '%s'",get_name(fcall_idx));
        	
         	free_if_reg($3);
      		poziv[x] = $3;
      		x++;
      		$$ = br_arg++;					
		}
		;
	
	if_else
		: if_part %prec ONLY_IF
		 { 
		
		 code("\n@exit%d:", $1); }
		| if_part ELSE 
		{
		 for(int j = 0; j < 10; j++){//u slucaju if/else ako ima inkrement u rel/op onda da poveca tek kad udje u if else
		        	if(niz[j] == 0){
		        		break;
		        	}
		        	int v = niz[j];
		        	int t1 = get_type(v);  
        		code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(v);
		        code(",");
		        code("$1");
		        code(",");
		        gen_sym_name(v);
		        free_if_reg(v);
		        v = take_reg();
		        
		        set_type(v, t1);
		        }
		        for(int j = 0; j < 10; j++){
		        	niz[j] = 0;
		        }
		        duzina = 0;
		}
		statement
		 { code("\n@exit%d:", $1); }
		;
		
	if_part
		: IF LBRA 
		{
     		  $<i>$ = ++lab_num;
      		  code("\n@if%d:", lab_num);
      		}
      		rel_exp
      		{
      		  code("\n\t\t%s\t@false%d", opp_jumps[$4], $<i>3);
      		  code("\n@true%d:", $<i>3);
      		}
      		RBRA 
      		{
      		 for(int j = 0; j < 10; j++){
		        	if(niz[j] == 0){
		        		break;
		        	}
		        	int v = niz[j];
		        	int t1 = get_type(v);  
        		code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(v);
		        code(",");
		        code("$1");
		        code(",");
		        gen_sym_name(v);
		        free_if_reg(v);
		        v = take_reg();
		        
		        set_type(v, t1);
		        }
		        for(int j = 0; j < 10; j++){
		        	niz[j] = 0;
		        }
		        duzina = 0;
      		}
      		statement
      		 {
       		 code("\n\t\tJMP \t@exit%d", $<i>3);
       		 code("\n@false%d:", $<i>3);
       		 $$ = $<i>3;
      		}
		;
	
	rel_exp
		: exp REL_OP exp
		{
        		if(get_type($1) != get_type($3))
        		  err("invalid operands: relational operator");
        		$$ = $2 + ((get_type($1) - 1) * RELOP_NUMBER);
		        gen_cmp($1, $3);
      		}
		;
	
	return 
		: RETURN SEMI
		{
			if(get_type(fun_idx) != 3)
				err("Non void function does not have return value!");		
			ret++;
		}
		| RETURN exp SEMI
		{
			if(get_type(fun_idx) == 3)
				err("Void function should not have return value!");
      			if(get_type(fun_idx) != get_type($2))
        		  err("incompatible types in return");
        		 else
        		 	ret++;
        		//print_symtab();
        		gen_mov($2, FUN_REG);
        		code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
		}
		;
		
%%
int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
    
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count)
    printf("\n%d error(s).\n", error_count);

  if(synerr)
    return -1;  //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127; //warnings
  else
    return 0; //OK
}
