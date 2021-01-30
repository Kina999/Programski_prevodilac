
kina:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@kina_body:
		MOV 	$3,-4(%14)
		MOV 	$2,-8(%14)
		MOV 	$3,8(%14)
		MOV 	8(%14),%13
		JMP 	@kina_exit
@kina_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$0,-4(%14)
		MOV 	$1,-8(%14)
			PUSH	-8(%14)
			CALL	kina
			ADDS	%15,$4,%15
		MOV 	%13,%0
		MOV 	%0,-12(%14)
		ADDU	-12(%14),$1,-12(%14)
		MOV 	-12(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET