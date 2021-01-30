
b:
		WORD 	1
abs:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@abs_body:
@if0:
		CMPS 	8(%14),$0
		JGES	@false0
@true0:
		SUBS	$0,8(%14),%0
		MOV 	%0,-4(%14)
		JMP 	@exit0
@false0:
		MOV 	8(%14),-4(%14)
@exit0:
		MOV 	-4(%14),%13
		JMP 	@abs_exit
@abs_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$24,%15
@main_body:
		MOV 	$1,-8(%14)
		MOV 	$2,-12(%14)
		MOV 	$1,-20(%14)
		MOV 	$2,-24(%14)
		SUBS	-24(%14),$2,%0
		MOV 	%0,-16(%14)
		SUBS	-16(%14),$1,-16(%14)
			PUSH	-16(%14)
			CALL	abs
			ADDS	%15,$4,%15
		MOV 	%13,%1
		MOV 	%1,-4(%14)
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET