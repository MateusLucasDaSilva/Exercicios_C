void main(){
	
	int c,q,x;
	
	printf("qual o codigo do lanche que voce escolheu?");
	scanf("%d", &c);
	
	printf("quantos lanches voce vai querer?");
	scanf("%d", &q);
	
	if(c==100){
		x=1.20*q;
		printf("a sua conta e %d reais" ,x);
	}
	if(c==101){
		x=1.30*q;
		printf("a sua conta e %d reais", x);
	}
	if(c==102){
		x=1.50*q;
		printf("a sua conta e % dreais", x);
	}
	if(c==103){
		x=1.20*q; 
		printf("a sua conta e %d reais", x);
	}
	if(c==104){
		x=1.30*q;
		printf("a sua conta e %d reais", x);
	}
	if(c==105){
		x=1.00*q;
		printf("a sua conta e %d reais", x);
	}
}
