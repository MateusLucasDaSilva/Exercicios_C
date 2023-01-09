void main(){
	int x,a,b,c;
	
	printf("digite um numero!");
	scanf("%d", &x);
	a = x%10==0;
	b = x%5==0;
	c = x%2==0;
	
    if(a){
    	printf("e divisivel por 10\n");
	}
	if(b){
    	printf("e divisivel por 5\n");
	}
	if(c){
    	printf("e divisivel por 2\n");
	}
	else{
		printf("nso e divisivel nem por10!\n");
			printf("nso e divisivel nem por5!\n");
				printf("nso e divisivel nem por2!\n");
	}

}
