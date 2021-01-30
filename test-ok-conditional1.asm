
k:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@k_body:
		CMPS 	12(%14),16(%14)
		JLES	@expression1
@expression0:
		ADDS	8(%14),12(%14),%0
		JMP 	@expression_exit0
@expression1:
		ADDS	8(%14),16(%14),%0
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
		SUBS	%15,$16,%15
@main_body:
		MOV 	$3,-16(%14)
		MOV 	$4,-4(%14)
		CMPS 	-16(%14),-4(%14)
		JLES	@expression3
@expression2:
		ADDS	-4(%14),-4(%14),%0
		JMP 	@expression_exit1
@expression3:
		ADDS	-4(%14),-16(%14),%0
@expression_exit1:
		MOV 	%0,-12(%14)
			PUSH	-12(%14)
			PUSH	-16(%14)
			PUSH	-4(%14)
			CALL	k
			ADDS	%15,$12,%15
		MOV 	%13,%0
		MOV 	%0,-8(%14)
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET