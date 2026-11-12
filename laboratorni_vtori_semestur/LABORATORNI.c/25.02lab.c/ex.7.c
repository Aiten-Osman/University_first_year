# include <stdio.h> 
int main() {
int a ;
double b ;
float c ;
char d ;

printf ("a = ");
scanf("%d", &a);

printf ("b = ");
scanf("%lf", &b);

printf ("c = ");
scanf("%f", &c);

printf ("d = ");
scanf(" %c", &d);

printf (" Числото a = %d\n", a);
printf (" Числото b = %.3lf\n", b);   
printf (" Числото c = %.3f\n", c);
printf (" Числото d = %c\n", d);

}