// //zad 1
// #include <stdio.h>

// int findMax(int a, int b) {
//     int max = a;
    
//     if (b > max) {
//         max = b;
//     }
//     return max;
// }

// int findMin(int a, int b) {
//     int min = a;
    
//     if (b < min) {
//         min = b;
//     }
//     return min;
// } 

// int main() {
//     int num1, num2;
    
//     printf("Enter numbers:\n");
//     printf("Num1: ");
//     scanf("%d", &num1);
//     printf("Num2: ");
//     scanf("%d", &num2);
    
//     int max = findMax(num1, num2);
//     int min = findMin(num1, num2);
    
//     printf("По- голямото число: %d\n", max);
//     printf("По- малкото число: %d\n", min);
    
//     return 0;
// }


// //zad 2 
// #include <stdio.h>

// int main() {
//     int hours, minutes;
    
//     printf("Enter hour: ");
//     scanf("%d", &hours);
//     printf("Enter minutes: ");
//     scanf("%d", &minutes);
//     printf("The time after 15 minutes is : ");
    
//     minutes = minutes + 15;
    
//     if (minutes >= 60) {
//         minutes = minutes - 60;
//         hours = hours + 1;
//     }
    
//     if (hours >= 24) {
//         hours = hours - 24;
//     }
    
//     printf("%d:", hours);
    
//     if (minutes < 10) {
//         printf("0%d\n", minutes);
//     } else {
//         printf("%d\n", minutes);
//     }
    
//     return 0;
// }

// //zad3
// #include <stdio.h>

// int main() {
//     int num1, num2, num3;
//     printf("Enter three numbers to check if they are same:");
//     scanf("%d %d %d", &num1, &num2, &num3);
    
//     if (num1 == num2 && num2 == num3) {
//         printf("yes - the numbers are same\n");
//     } else {
//         printf("no - the numbers are not same\n");
//     }

    
//     return 0;
// }


// //zad4
// #include <stdio.h>

// int main() {
//     int points;
//     double bonus = 0;
//     printf("Enter points: ");
//     scanf("%d", &points);
    
//     if (points <= 100) {
//         bonus = 5;
//     } else if (points > 100 && points <= 1000) {
//         bonus = points * 0.2;
//     } else if (points > 1000) {
//         bonus = points * 0.1;
//     }
    

//     if (points % 2 == 0) {
//         bonus = bonus + 1;
//     }
    
//     if (points % 10 == 5) {
//         bonus = bonus + 2;
//     }
    
//     double totalPoints = points + bonus;
    
//     printf("Main bonus is: %.f\n", bonus);
//     printf("Total points are: %.f\n", totalPoints);
    
//     return 0;
// }

// // zad5
// #include <stdio.h>

// int main()
// {
//     int s1, s2, s3;
//     int totalSeconds;
//     int minutes, seconds;

//     printf("Enter time of three runners (seconds between 1 and 50):\n");

//     printf("person 1: ");
//     scanf("%d", &s1);

//     printf("Person 2: ");
//     scanf("%d", &s2);

//     printf("Person 3: ");
//     scanf("%d", &s3);

//     totalSeconds = s1 + s2 + s3;

//     minutes = totalSeconds / 60;
//     seconds = totalSeconds % 60;

//     printf("\nThe whole time is: %d:%02d\n", minutes, seconds);

//     return 0;
// }

// //zad6
// #include <stdio.h>

// int main()
// {
//     double x1, y1, x2, y2, x, y;

//     printf("Enter rectangle coordinates (x1 y1 x2 y2): ");
//     scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

//     printf("Enter point coordinates (x y): ");
//     scanf("%lf %lf", &x, &y);

//     if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
//     {
//         printf("Result: The point is Inside the rectangle.\n");
//     }
//     else
//     {
//         printf("Result: The point is Outside the rectangle.\n");
//     }

//     return 0;
// }



//zad7
#include <stdio.h>

int main()
{
    int km;
    char period;
    double taxiPrice, busPrice, trainPrice;

    printf("Enter distance in kilometers: ");
    scanf("%d", &km);

    printf("Enter period (D for day / N for night): ");
    scanf(" %c", &period);

    if (period == 'D')
        taxiPrice = 0.70 + km * 0.79;
    else
        taxiPrice = 0.70 + km * 0.90;

    busPrice = km * 0.09;
    trainPrice = km * 0.06;

    double minPrice = taxiPrice;

    if (km >= 20 && busPrice < minPrice)
        minPrice = busPrice;

    if (km >= 100 && trainPrice < minPrice)
        minPrice = trainPrice;

    printf("Cheapest transport price: %.2lf lv\n", minPrice);

    return 0;
}

//zad8
#include <stdio.h>

int main()
{
    int V, P1, P2, H;
    int water;

    printf("Enter pool volume (liters): ");
    scanf("%d", &V);

    printf("Enter pipe 1 flow per hour: ");
    scanf("%d", &P1);

    printf("Enter pipe 2 flow per hour: ");
    scanf("%d", &P2);

    printf("Enter hours worker is away: ");
    scanf("%d", &H);

    water = (P1 + P2) * H;

    if (water <= V)
    {
        double percent = water * 100.0 / V;
        double p1percent = (P1 * H * 100.0) / water;
        double p2percent = (P2 * H * 100.0) / water;

        printf("The pool is %.2lf%% full.\n", percent);
        printf("Pipe 1 contribution: %.2lf%%\n", p1percent);
        printf("Pipe 2 contribution: %.2lf%%\n", p2percent);
    }
    else
    {
        printf("Overflow! The pool overflows with %d liters.\n", water - V);
    }

    return 0;
}

//zad9 
#include <stdio.h>
#include <math.h>

int main()
{
    int X, Y, Z;
    double grapes, wine, leftWine, winePerWorker;

    printf("Enter vineyard area (square meters): ");
    scanf("%d", &X);

    printf("Enter required liters of wine: ");
    scanf("%d", &Y);

    printf("Enter number of workers: ");
    scanf("%d", &Z);

    grapes = X * 0.40 * 2.5;
    wine = grapes / 2.5;

    if (wine < Y)
    {
        printf("Not enough wine.\n");
        printf("More %.0lf liters are needed.\n", ceil(Y - wine));
    }
    else
    {
        leftWine = wine - Y;
        winePerWorker = leftWine / Z;

        printf("Good harvest!\n");
        printf("Total wine produced: %.0lf liters\n", floor(wine));
        printf("Wine left: %.0lf liters\n", floor(leftWine));
        printf("Wine per worker: %.0lf liters\n", ceil(winePerWorker));
    }

    return 0;
}

//zad 10
#include <stdio.h>

int main()
{
    int n, num;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    printf("Enter how many numbers you will input: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter number %d (1 - 1000): ", i + 1);
        scanf("%d", &num);

        if(num < 200)
            p1++;
        else if(num <= 399)
            p2++;
        else if(num <= 599)
            p3++;
        else if(num <= 799)
            p4++;
        else
            p5++;
    }

    printf("\nResults:\n");
    printf("Numbers < 200: %.2f%%\n", (p1 * 100.0) / n);
    printf("Numbers 200 - 399: %.2f%%\n", (p2 * 100.0) / n);
    printf("Numbers 400 - 599: %.2f%%\n", (p3 * 100.0) / n);
    printf("Numbers 600 - 799: %.2f%%\n", (p4 * 100.0) / n);
    printf("Numbers >= 800: %.2f%%\n", (p5 * 100.0) / n);

    return 0;
}

//zad11
