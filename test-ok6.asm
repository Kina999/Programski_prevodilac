
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$3,-4(%14)
		MOV 	$5,-8(%14)
@if0:
		CMPS 	-4(%14),-8(%14)
		JNE 	@false0
@true0:
		MOV 	-8(%14),%13
		JMP 	@main_exit
		JMP 	@exit0
@false0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@exit0:
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET