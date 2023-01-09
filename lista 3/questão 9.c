void main(){
	
	int x,z;
	
	float y;
	
	
	printf("se voce e mulher digite 1 e se for homem digite um numero diferente de 1:");
	scanf("%d", &x);
	
	printf("qual a sua altura?");
	scanf("%f", &y);
	
	
	if(x==1){
		z=(62.1*y)-44.7;
        printf("seu peso ideal  e %d kilos",z);
	}
	else{
		z=(72.7*y)-58;
		printf("seu peso ideal  e %d kilos",z);
	}
}

