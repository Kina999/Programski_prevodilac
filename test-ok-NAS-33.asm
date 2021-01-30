
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$28,%15
@main_body:
		MOV 	$2,-4(%14)
		MOV 	$2,-8(%14)
		MOV 	$1,-12(%14)
		MOV 	$1,-16(%14)
		MOV 	$1,-20(%14)
		MOV 	$2,-24(%14)
		MOV 	$3,-28(%14)
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET