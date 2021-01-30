
k:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@k_body:
		CMPS 	16(%14),8(%14)
		JGES	@expression1
@expression0:
		ADDS	8(%14),$3,%0
		JMP 	@expression_exit0
@expression1:
		ADDS	8(%14),8(%14),%0
@expression_exit0:
		MOV 	%0,-4(%14)
		MOV 	-4(%14),%13
		JMP 	@k_exit
@k_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$1,-4(%14)
		MOV 	$6,-8(%14)
			PUSH	$1
			PUSH	$3
			PUSH	-4(%14)
			CALL	k
			ADDS	%15,$12,%15
		MOV 	%13,%0
		MOV 	%0,-12(%14)
		CMPS 	-4(%14),-8(%14)
		JNE 	@expression3
@expression2:
		ADDS	-12(%14),$1,%0
		JMP 	@expression_exit1
@expression3:
		ADDS	-12(%14),$2,%0
@expression_exit1:
		MOV 	%0,-12(%14)
		ADDS	-12(%14),-8(%14),%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET