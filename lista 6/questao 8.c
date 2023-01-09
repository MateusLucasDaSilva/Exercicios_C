int main () {
	
	int x;
	int y;
	
	
	printf ("Digite um numero: ");
	scanf ("%d", &x);
	printf ("Digite um numero: ");
	scanf ("%d", &y);
	
	while (x < y) {
		
		if (x % 2 != 0){
			
			printf ("\n%d", x);
			
		};
		x = x + 1;
	};
	
	while (y < x) {
		
		if (y % 2 != 0){
			
			printf ("\n%d", y);
			
		};
		y = y + 1;
	};
	
	return 0;	
};
	
	
	

