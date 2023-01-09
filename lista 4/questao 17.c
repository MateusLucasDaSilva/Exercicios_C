void main(){
	
	int  x;
	int  y;
	char  z[20];
	
	
    printf("qual o seu nome?");
	scanf ("%s", &z);
	printf ("quantos anos voçe tem?");
	scanf ("%d", &x);
	
	if(x>0 && x<=10){
		printf("%s seu plano de saude custa 30,00 reais!", z);
	}
		if(x>10 && x<=29){
		printf("%s seu plano de saude custa 60,00 reais!", z);
	}
		if(x>29 && x<=45){
		printf("%s seu plano de saude custa 120,00 reais!", z);
	}
		if(x>45 && x<=59){
		printf("%s seu plano de saude custa 150,00 reais!", z);
	}
		if(x>59 && x<=60){
		printf("%s seu plano de saude custa 250,00 reais!", z);
	}
		if(x>65){
		printf("%s seu plano de saude custa 400,00 reais!", z);
	}

}
