
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$2,-4(%14)
		MOV 	$1,-8(%14)
		JMP 	@provjera0
@when0:
		MOV 	$5,-4(%14)
		JMP 	@check_exit0
@when1:
		MOV 	$19,-4(%14)
		JMP 	@check_exit0
@when2:
		MOV 	$1,-4(%14)
		JMP 	@check_exit0
@otherwise3:
		ADDS	$17,-4(%14),%0
		MOV 	%0,-4(%14)
		JMP 	@check_exit0
@provjera0:
		CMPS 	-4(%14),$1
		JEQ 	@when0
		CMPS 	-4(%14),$2
		JEQ 	@when1
		CMPS 	-4(%14),$3
		JEQ 	@when2
		JMP 	@otherwise3
@check_exit0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET