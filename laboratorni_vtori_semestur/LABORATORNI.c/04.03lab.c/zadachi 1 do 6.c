// zad 1
#include <stdio.h>
int main()
{
    int i, n;
    printf("Въведете стойност на n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {

        printf("%d ", i);

       }
        printf("\n");
    }
}


// zad 2
#include <stdio.h>
int main() {
    int n1;
    int n2;
    printf("Въведете първото число: ");
    scanf("%d", &n1);
    printf("Въведете второто число: ");
    scanf("%d", &n2);
    int sum = 0;
    if (n1<n2){
    for (int i = n1+1; i < n2; i++) {
        sum = sum + i;
        printf("%d ", i);
        
        }}
    else {
        for (int i = n2+1; i < n1; i++) {
            sum = sum + i;
            printf("%d ", i);
        }
    
    }
    printf("\nСумата на числата между %d и %d е: %d\n", n1, n2, sum);
    return 0;
}


// zad 3
#include <stdio.h>

int main() {
    int num1, num2, start, end, i;
    int sumEven = 0;       
    int productOdd = 1;    
    
   
    printf("Въведете първо число: ");
    scanf("%d", &num1);
    printf("Въведете второ число: ");
    scanf("%d", &num2);
    
    if (num1 < num2) 
    {
        start = num1;
        end = num2;
    } 
    else
    {
        start = num2;
        end = num1;
    }
    
    for (i = start+1; i <= end-1; i++) 
    {
        if (i % 2 == 0) 
        {    
            sumEven = sumEven + i;
        } 
        else 
        {              
            productOdd *= i;
        }
    }
    
    printf("Сума на четните числа между %d и %d: %d\n", num1, num2, sumEven);
    printf("Произведение на нечетните числа между %d и %d: %d\n", num1, num2, productOdd);
    
    return 0;
}


// zad 4
#include <stdio.h>

int main() {
    int N, K, i, number;
    int count = 0; 
    
    printf("Enter N (number of numbers): ");
    scanf("%d", &N);
    printf("Enter K: ");
    scanf("%d", &K);
    
    for (i = 1; i <= N; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        
        if (number > K && number % 3 == 0) {
            count = count + 1;  
        }
    }
    
    printf("Броят на числата, по-големи от %d и делящи се на 3, е: %d\n", K, count);
    
    

}

// zad 5
#include <stdio.h>
int main(){
    int number;
    while (1) 
    {
        printf("Въведете число (0 за край): ");
        scanf("%d", &number);
        if (number == 0) {
            break; // излизаме от цикъла, ако числото е 0
        }
        // тук може да добавим код за обработка на въведеното число, ако е необходимо


    }
}  




