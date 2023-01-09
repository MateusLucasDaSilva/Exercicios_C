void main(){
	int x;
	
	char nome;
	
	printf("qual o seu nome?");
	scanf("%s", &nome);
	
	printf("quantos anos voce tem?");
	scanf("%d", &x);
	
	if(x<=10){
		printf("%s voce devera pagar 30 reais",nome);
	}
	if(x>10, x<=29){
		printf("%s voce devera pagar 60 reais",nome);
	}
		if(x>29, x<=45){
		printf("%s voce devera pagar 120 reais",nome);
	}
	if(x>45, x<=59){
		printf("%s voce devera pagar 150 reais",nome);
	}
	if(x>59, x<=65){
		printf("%s voce devera pagar 250 reais",nome);
	}
	if(x>65){
		printf("%s voce devera pagar 400 reais",nome);
	}

}
