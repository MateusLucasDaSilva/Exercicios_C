void main(){
	
	int q,c;
	float x;
	
	printf("qual o codigo do codigo que voce escolheu?");
	scanf("%d", &c);
	
	printf("quantos lanches voce vai querer?");
	scanf("%d", &q);
	
	if(c==1001){
		x=5.32*q;
		printf("a sua conta e %f reais" ,x);
	}
	if(c==1324){
		x=6.45*q;
		printf("a sua conta e %f reais", x);
	}
	if(c==6548){
		x=2.37*q;
		printf("a sua conta e %f dreais", x);
	}
	if(c==987){
		x=5.32*q; 
		printf("a sua conta e %f reais", x);
	}
	if(c==7623){
		x=6.45*q;
		printf("a sua conta e %f reais", x);
	}
	
}
