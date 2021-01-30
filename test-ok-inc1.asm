
y:
		WORD 	1
f:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@f_body:
		ADDS	8(%14),$13,%0
		MOV 	%0,%1
		SUBS	8(%14),$1,8(%14)
		MOV 	%1,-4(%14)
		ADDS	-4(%14),$7,%1
		MOV 	%1,%2
		SUBS	-4(%14),$1,-4(%14)
		MOV 	%2,8(%14)
		ADDS	8(%14),-4(%14),%2
		MOV 	%2,%13
		JMP 	@f_exit
@f_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
			PUSH	$0
			CALL	f
			ADDS	%15,$4,%15
		MOV 	%13,%2
		MOV 	%2,-4(%14)
			PUSH	-4(%14)
			CALL	f
			ADDS	%15,$4,%15
		MOV 	%13,%2
		MOV 	%2,%3
		ADDS	-4(%14),$1,-4(%14)
		MOV 	%3,y
		ADDS	-4(%14),y,%3
		ADDS	%3,$42,%4
		MOV 	%4,%4
		ADDS	-4(%14),$1,-4(%14)
		ADDS	y,$1,y
		MOV 	%4,-8(%14)
		ADDS	-4(%14),y,%5
		ADDS	%5,-8(%14),%6
		MOV 	%6,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET