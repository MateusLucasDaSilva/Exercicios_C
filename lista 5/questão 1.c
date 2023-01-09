void main(){
   
   int d,m,a,x;
   
  
  printf("quantos anos de vida?");
  scanf("%d", &a);
   
   
  printf("voce tem %d anos\n e quantos meses de vida?",a);
  scanf("%d", &m);
   
   
  printf("voce tem %d anos,%d meses \n e quantos dias de vida?", a, m);
  scanf("%d", &d);
   
  x=(a*365+m*30+d);
   
  printf("voce tem aprocimadamente %d dias de vida!",x);
}
