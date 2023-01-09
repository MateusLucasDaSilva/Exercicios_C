void main(){
	int x,y;
	
	printf("digite um numero!");
	scanf("%d", &x);
		printf("digite mais um numero!");
		scanf("%d", &y);
     if(  x % y == 0){
    	printf(" %d e divisivel por %d!", x,y);
	}
 	 else{
		printf(" %d nao divisivel por %d!");
	}
}
