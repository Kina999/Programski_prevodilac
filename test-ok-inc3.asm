
k:
		PUSH	%14
		MOV 	%15,%14
@k_body:
		MOV 	8(%14),%13
		JMP 	@k_exit
@k_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$5,-4(%14)
			PUSH	-4(%14)
			CALL	k
			ADDS	%15,$4,%15
		MOV 	%13,%0
		MOV 	%0,%1
		ADDS	-4(%14),$1,-4(%14)
		MOV 	%1,-8(%14)
		ADDS	-8(%14),-4(%14),%1
		MOV 	%1,-8(%14)
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET