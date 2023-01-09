int main () {
 	
 	int x;
 	int n;
 	int k = 0;
 	
 	printf ("Digite um numero: ");
 	scanf ("%d", &n);
 	
 	for (x = 1; x <= n; x++) {
 		
 		k = k + x;
	 };
 	
 	printf ("A soma eh: %d", k);
 	
 	return 0;	
 }
