
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$3,-4(%14)
		MOV 	$3,-8(%14)
@loop0:
		ADDS	-4(%14),$3,%0
		MOV 	%0,-4(%14)
		ADDS	-4(%14),$1,-4(%14)
		CMPS 	-4(%14),$10
		JLTS	@false0
@true0:
		JMP 	@loop0
@false0:
@loop1:
		ADDS	-8(%14),$3,%1
		MOV 	%1,-8(%14)
		ADDS	-8(%14),$1,-8(%14)
		CMPS 	-8(%14),$10
		JLTS	@false1
@true1:
		JMP 	@loop1
@false1:
		ADDS	-4(%14),-8(%14),%2
		MOV 	%2,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET