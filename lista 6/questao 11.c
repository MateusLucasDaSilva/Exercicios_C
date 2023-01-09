int main () {
 	
 	int numero = 0;
	int quantidade = 0;
 	int i = 0;

 	printf("Entre com o primeiro numero inteiro: ");
 	scanf("%i", &numero);

 	quantidade = numero;

	for(i = 1; i < 10; i++) {
 		printf("\nEntre com  o numero inteiro: " );
 		scanf("%d", &numero);

 	if(numero > quantidade) {
	 
		quantidade = numero;
 };

};
 printf("\nO maior numero eh: %d", quantidade);
 	
	
 	return 0;
 }
