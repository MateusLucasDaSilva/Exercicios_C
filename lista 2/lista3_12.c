void main(){
	
	
int x,s,m,h;

printf(" Quanto tempo o evento durou o evento?(em segundos)");
scanf("%d", &x);
h = x/3600;
m = (x%3600)/60;
s =  (x%3600)%60;
printf("O evento durou %d horas, %d minutos e %d segundos!\n", h, m, s);
system("pause");
}
