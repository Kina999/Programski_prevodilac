
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$1,-4(%14)
		MOV 	$3,-8(%14)
@loop0:
		ADDS	-4(%14),$3,%0
		MOV 	%0,-4(%14)
		ADDS	-4(%14),$1,-4(%14)
		CMPS 	-4(%14),$10
		JGES	@false0
@true0:
		JMP 	@loop0
@false0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET