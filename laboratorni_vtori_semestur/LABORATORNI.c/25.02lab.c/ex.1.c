#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

int x ; // декларирам 
double y ; // декларирам
printf ("x = "); 
scanf("%d", &x); // въвеждам стойност за x от клавиатурата
printf ("Променлива х = %d\n", x); // отпечатвам стойността на x

printf("y= ");
scanf("%lf", &y); // въвеждам стойност за y от клавиатурата
printf("Променлива y = %.3lf\n", y); // отпечатвам стойността на y


}

