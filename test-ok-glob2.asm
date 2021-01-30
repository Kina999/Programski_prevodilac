
x:
		WORD 	1
k:
		PUSH	%14
		MOV 	%15,%14
@k_body:
		MOV 	16(%14),x
@k_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@main_body:
		MOV 	$4,-4(%14)
			PUSH	$4
			PUSH	$2
			PUSH	-4(%14)
			CALL	k
			ADDS	%15,$12,%15
		MOV 	x,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET