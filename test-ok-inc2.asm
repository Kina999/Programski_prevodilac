
k:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@k_body:
		MOV 	$4,-4(%14)
		MOV 	-4(%14),%13
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
		MOV 	$3,-4(%14)
		MOV 	$9,-4(%14)
		ADDS	-4(%14),$3,%0
		MOV 	%0,%1
		ADDS	-4(%14),$1,-4(%14)
		MOV 	%1,-8(%14)
		ADDS	-4(%14),$1,-4(%14)
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET