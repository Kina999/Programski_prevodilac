
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$16,%15
@main_body:
		MOV 	$8,-4(%14)
		MOV 	$5,-8(%14)
		MOV 	$3,-12(%14)
		MOV 	$2,-16(%14)
		JMP 	@provjera0
@when0:
		MOV 	$3,-8(%14)
		JMP 	@check_exit0
@when1:
		ADDS	-12(%14),$1,%0
		MOV 	%0,-8(%14)
@when2:
		ADDS	-12(%14),$1,%0
		MOV 	%0,-8(%14)
		JMP 	@check_exit0
@provjera0:
		CMPS 	-4(%14),$1
		JEQ 	@when0
		CMPS 	-4(%14),$8
		JEQ 	@when1
		CMPS 	-4(%14),$3
		JEQ 	@when2
@check_exit0:
		JMP 	@provjera1
@when3:
		MOV 	$3,-8(%14)
		JMP 	@check_exit1
@when4:
		MOV 	$6,-12(%14)
@when5:
		ADDS	-8(%14),-12(%14),%0
		MOV 	%0,-8(%14)
		JMP 	@check_exit1
@provjera1:
		CMPS 	-4(%14),$1
		JEQ 	@when3
		CMPS 	-4(%14),$8
		JEQ 	@when4
		CMPS 	-4(%14),$3
		JEQ 	@when5
@check_exit1:
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET