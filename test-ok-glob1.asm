
g:
		WORD 	1
k:
		PUSH	%14
		MOV 	%15,%14
@k_body:
		MOV 	8(%14),g
@k_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$3,-4(%14)
		MOV 	$4,-8(%14)
			PUSH	-8(%14)
			CALL	k
			ADDS	%15,$4,%15
		ADDS	-4(%14),g,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET