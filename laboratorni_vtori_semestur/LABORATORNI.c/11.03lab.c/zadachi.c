
//zad1
#include <stdio.h>

float squareArea(float x)
{
    return x * x;
}
float rectangleArea(float x, float y)
{
    return x * y;
}
float triangleArea(float a, float b)
{
    return (a * b) / 2;
}
float circleArea(float r)
{
    return 3.14 * r * r;
}

int main(){
    int option;
    float a, b, r, area;
    printf("Choose option:\n");
    printf("1-square\n2-rectangle\n3-triangle\n4-circle\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("It is Square\n");
        printf("Enter a:");
        scanf("%f", &a);
        area = squareArea(a);
        printf("Area of square is %.2f\n", area);
        break;
    case 2:
        printf("It is Rectangle\n");
        printf("Enter a and b:");
        scanf("%f%f", &a, &b);
        area = rectangleArea(a, b);
        printf("Rectangle Area is %.2f\n", area);
        break;
    case 3:
        printf("It is Triangle\n");
        printf("Enter strana a and b:");
        scanf("%f%f", &a, &b);
        area = triangleArea(a, b);
        printf("Triangle Area is %.2f\n", area);
        break;
    case 4:
        printf("It is Circle\n");
        printf("Enter radius r:");
        scanf("%f", &r);
        area = circleArea(r);
        printf("Circle Area is %.2f\n", area);
        break;
    
    default:
        printf("Greshen kod!\n");
        break;
    }
}


// zad 2 
#include <stdio.h>
void switchNum(int a, int b){
    printf("Before function:");
    printf("a=%d\n, b=%d\n",a,b);
    
    int c;
    c = a;
    a = b;
    printf("After functipn:" );
    printf("a=%d\n, b=%d\n",a,b);
}   

int main (){
    int a; 
    printf("Enter a: ");
    scanf("%i",&a);
    int b;
    printf("Enter b: ");
    scanf("%i",&b);
    switchNum(a,b);
}


//zad 3 
#include <stdio.h>

void checkEven(int x)
{
    if(x % 2 == 0)
        printf("Chisloto e chetno\n");
    else
        printf("Chisloto e nechetno\n");
}

int main()
{
    int num;

    printf("Vavedi chislo: ");
    scanf("%d", &num);
    checkEven(num);

    return 0;
}


// zad 5 
#include <stdio.h>
int main(){
    

}




