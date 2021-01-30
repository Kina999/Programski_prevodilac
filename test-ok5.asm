
kinav:
		PUSH	%14
		MOV 	%15,%14
@kinav_body:
		MOV 	$2,8(%14)
		MOV 	$1,12(%14)
@kinav_exit:
		MOV 	%14,%15
		POP 	%14
		RET
kinai:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@kinai_body:
		MOV 	$3,-4(%14)
		MOV 	-4(%14),%13
		JMP 	@kinai_exit
@kinai_exit:
		MOV 	%14,%15
		POP 	%14
		RET
kinau:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@kinau_body:
		MOV 	$3,-4(%14)
		MOV 	-4(%14),%13
		JMP 	@kinau_exit
@kinau_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$3,-4(%14)
		MOV 	$3,-8(%14)
		MOV 	$3,-12(%14)
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET