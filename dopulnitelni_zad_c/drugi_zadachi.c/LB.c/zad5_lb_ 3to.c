

// // zad 5
// #include <stdio.h>

// float calculate(float a, float b, char op)
// {
//     switch(op)
//     {
//         case '+':
//             return a + b;

//         case '-':
//             return a - b;

//         case '*':
//             return a * b;

//         case '/':
//             return a / b;

//         default:
//             printf("Greshna operaciq\n");
//             return 0;
//     }
// }

// int main()
// {
//     float x, y, result;
//     char op;

//     printf("Vavedi dve chisla: \n");
//     scanf("%f %f", &x, &y);

//     printf("Vavedi operaciq (+ - * /): ");
//     scanf("%c", &op);

//     result = calculate(x, y, op);

//     printf("Rezultat = %.2f\n", result);

//     return 0;
// }


// // purva zad 
// #include <stdio.h>

// float squareArea(float a)
// {
//     return a * a;
// }
// float rectangleArea(float a, float b)
// {
//     return a * b;
// }
// float triangleArea(float a, float b)
// {
//     return (a * b) / 2;
// }
// float circleArea(float r)
// {
//     return 3.14 * r * r;
// }

// int main(){
//     int code;
//     float a, b, h, r, area;
//     printf("Enter figure code:\n");
//     printf("1-square\n2-rectangle\n3-triangle\n4-circle\n");
//     scanf("%d", &code);

//     switch (code)
//     {
//     case 1:
//         printf("Enter strana a:");
//         scanf("%f", &a);
//         area = squareArea(a);
//         printf("Square Area is %.2f\n", area);
//         break;
//     case 2:
//         printf("Enter strana a and b:");
//         scanf("%f%f", &a, &b);
//         area = rectangleArea(a, b);
//         printf("Rectangle Area is %.2f\n", area);
//         break;
//     case 3:
//         printf("Enter strana a and b:");
//         scanf("%f%f", &a, &b);
//         area = triangleArea(a, b);
//         printf("Triangle Area is %.2f\n", area);
//         break;
//     case 4:
//         printf("Enter radius r:");
//         scanf("%f", &r);
//         area = circleArea(r);
//         printf("Circle Area is %.2f\n", area);
//         break;
    
//     default:
//         printf("Greshen kod!\n");
//         break;
//     }
// }




// zad 2
#include <stdio.h>

void razmqna(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Sled razmqna vav funkciyata: a = %d, b = %d\n", a, b);
}

int main()
{
    int x, y;
    printf("Vavedi dve chisla:\n");
    scanf("%d %d", &x, &y);

    printf("Predi razmqna: x = %d, y = %d\n", x, y);

    razmqna(x, y);

    printf("Sled funkciqta: x = %d, y = %d\n", y, x);

    return 0;
}



// zad 3
// #include <stdio.h>

// void checkEven(int x)
// {
//     if(x % 2 == 0)
//         printf("Chisloto e chetno\n");
//     else
//         printf("Chisloto e nechetno\n");
// }

// int main()
// {
//     int num;

//     printf("Vavedi chislo: ");
//     scanf("%d", &num);
//     checkEven(num);

//     return 0;
// }


// // zad 4
// #include <stdio.h>

// void decToTwo(int x)
// {
//     if(x > 0)
//     {
//         decToTwo(x / 2);
//         printf("%d", x % 2);
//     }
// }

// int main()
// {
//     int num;

//     printf("Vavedi desetichno chislo: ");
//     scanf("%d", &num);

//     printf("Dvoichno chislo: ");
//     decToTwo(num);

//     return 0;
// }


// zad 5 factoriel
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    
    if (n == 0) {
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    
    return result;
}

int main() {
    int number;
    
    printf("Въведете цяло число: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Факториел не е дефиниран за отрицателни числа!\n");
    } else {
        int result = factorial(number);
        printf("%d! = %d\n", number, result);
    }
    
    return 0;
}


//zad 6 
#include <stdio.h>
#include <math.h>

void solveQuadratic(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imagPart;
    
    if (a == 0) {
        printf("Това не е квадратно уравнение (a = 0)!\n");
        return;
    }
    
    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Два реални корена:\n");
        printf("x1 = %.2f\n", root1);
        printf("x2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Двоен корен:\n");
        printf("x = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Комплексни корени:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}

int main() {
    double a, b, c;
    
    printf("Решаване на квадратно уравнение ax^2 + bx + c = 0\n");
    printf("Въведете a: ");
    scanf("%lf", &a);
    printf("Въведете b: ");
    scanf("%lf", &b);
    printf("Въведете c: ");
    scanf("%lf", &c);
    
    solveQuadratic(a, b, c);
    
    return 0;
}

//zad 7
#include <stdio.h>

int sum(int a, int b, int c) {
    return a + b + c;
}

int findMax(int a, int b, int c) {
    int max = a;
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    return max;
}

int findMin(int a, int b, int c) {
    int min = a;
    
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    
    return min;
}

void checkEqual(int a, int b, int c) {
    if (a == b && b == c) {
        printf("И трите числа са равни: %d\n", a);
    } else if (a == b) {
        printf("Първите две числа са равни: %d\n", a);
    } else if (a == c) {
        printf("Първото и третото число са равни: %d\n", a);
    } else if (b == c) {
        printf("Второто и третото число са равни: %d\n", b);
    } else {
        printf("Няма равни числа\n");
    }
}

int main() {
    int num1, num2, num3;
    
    printf("Въведете три цели числа:\n");
    printf("Число 1: ");
    scanf("%d", &num1);
    printf("Число 2: ");
    scanf("%d", &num2);
    printf("Число 3: ");
    scanf("%d", &num3);
    
    int total = sum(num1, num2, num3);
    int max = findMax(num1, num2, num3);
    int min = findMin(num1, num2, num3);
    
    printf("\n--- РЕЗУЛТАТИ ---\n");
    printf("Сума на числата: %d\n", total);
    printf("Най-голямо число: %d\n", max);
    printf("Най-малко число: %d\n", min);
    
    printf("\n--- ПРОВЕРКА ЗА ЕДНАКВИ СТОЙНОСТИ ---\n");
    checkEqual(num1, num2, num3);
    
    return 0;
}