
al:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@al_body:
		MOV 	$3,-4(%14)
		MOV 	$2,-8(%14)
		MOV 	-8(%14),-4(%14)
		MOV 	-4(%14),%13
		JMP 	@al_exit
@al_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$16,%15
@main_body:
		MOV 	$6,-4(%14)
		MOV 	$5,-8(%14)
		MOV 	$9,-12(%14)
		MOV 	$10,-4(%14)
		MOV 	$9,-8(%14)
		ADDS	-4(%14),-8(%14),%0
		SUBS	%0,$-10,%1
		MOV 	%1,-12(%14)
			CALL	al
		MOV 	%13,%0
		MOV 	%0,-16(%14)
		ADDS	-12(%14),-16(%14),%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET