
k:
		PUSH	%14
		MOV 	%15,%14
@k_body:
		MOV 	12(%14),%13
		JMP 	@k_exit
@k_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$20,%15
@main_body:
		MOV 	$5,-4(%14)
		MOV 	$5,-8(%14)
		MOV 	$2,-12(%14)
		MOV 	$3,-16(%14)
		MOV 	$4,-20(%14)
		MOV 	-8(%14),-4(%14)
		MOV 	-8(%14),-12(%14)
		ADDS	-12(%14),$1,-12(%14)
			PUSH	-12(%14)
			PUSH	-12(%14)
			PUSH	-4(%14)
			CALL	k
			ADDS	%15,$12,%15
		MOV 	%13,%1
		MOV 	%1,-8(%14)
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET