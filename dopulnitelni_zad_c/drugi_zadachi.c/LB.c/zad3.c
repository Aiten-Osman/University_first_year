// lb zad1 
#include <stdio.h>

int main() {
    int number;
    
    // Прочитане на число от клавиатурата
    printf("Въведете цяло число: ");
    scanf("%d", &number);
    
    // Извеждане на числата 1, 2, 3
    printf("1\n");
    printf("2\n");
    printf("3\n");
    
    return 0;
}



// lb zad2
#include <stdio.h>

int main() {
    int num1, num2, start, end, sum = 0;
    int i;
    
    // Прочитане на двете числа
    printf("Въведете първо число: ");
    scanf("%d", &num1);
    printf("Въведете второ число: ");
    scanf("%d", &num2);
    
    // Определяне кое число е по-малко и кое по-голямо
    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }
    
    // Сумиране на числата между тях (без включване на start и end)
    for (i = start + 1; i < end; i++) {
        sum = sum + i;
    }
    
    // Извеждане на резултата
    printf("Сумата на числата между %d и %d е: %d\n", num1, num2, sum);
    
    return 0;
}




// lb zad3

#include <stdio.h>

int main() {
    int num1, num2, start, end, i;
    int sumEven = 0;        // сума на четните числа
    int productOdd = 1;     // произведение на нечетните числа (започва от 1)
    
    // Прочитане на двете числа
    printf("Въведете първо число: ");
    scanf("%d", &num1);
    printf("Въведете второ число: ");
    scanf("%d", &num2);
    
    // Определяне на интервала
    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }
    
    // Обхождане на всички числа в интервала (включително start и end)
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {    // ако числото е четно
            sumEven = sumEven + i;
        } else {              // ако числото е нечетно
            productOdd = productOdd * i;
        }
    }
    
    // Извеждане на резултатите
    printf("Сума на четните числа между %d и %d: %d\n", num1, num2, sumEven);
    printf("Произведение на нечетните числа между %d и %d: %d\n", num1, num2, productOdd);
    
    return 0;
}




// lb zad 3.1
#include <stdio.h>

int main() {
    int num1, num2, start, end, i;
    int sumEven = 0;        // сума на четните числа
    int productOdd = 1;     // произведение на нечетните числа
    
    // Прочитане на двете числа
    printf("Въведете първо число: ");
    scanf("%d", &num1);
    printf("Въведете второ число: ");
    scanf("%d", &num2);
    
    // Определяне на интервала
    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }
    
    // Обхождане на всички числа в интервала (включително start и end)
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {    // ако числото е четно
            sumEven = sumEven + i;
        } else {              // ако числото е нечетно
            productOdd = productOdd * i;
        }
    }
    
    // Извеждане на резултатите
    printf("Сума на четните числа между %d и %d: %d\n", num1, num2, sumEven);
    printf("Произведение на нечетните числа между %d и %d: %d\n", num1, num2, productOdd);
    
    return 0;
}


// lb zad 4 
#include <stdio.h>

int main() {
    int N, K, i, number;
    int count = 0;  // брояч на числата, които отговарят на условието
    
    // Прочитане на N и K
    printf("Въведете N (брой числа): ");
    scanf("%d", &N);
    printf("Въведете K: ");
    scanf("%d", &K);
    
    // Прочитане на N числа едно по едно
    for (i = 1; i <= N; i++) {
        printf("Въведете число %d: ", i);
        scanf("%d", &number);
        
        // Проверка дали числото е по-голямо от K и се дели на 3
        if (number > K && number % 3 == 0) {
            count = count + 1;  // увеличаваме брояча
        }
    }
    
    // Извеждане на резултата
    printf("Броят на числата, по-големи от %d и делящи се на 3, е: %d\n", K, count);
    
    return 0;
}


// lb zad 5
#include <stdio.h>

int main() {
    int number;
    int sum = 0;  // сума на всички въведени числа
    
    printf("Въвеждайте числа (0 за край):\n");
    
    // Цикъл, който се изпълнява докато не се въведе 0
    while (1) {  // безкраен цикъл
        scanf("%d", &number);
        
        if (number == 0) {
            break;  // излизаме от цикъла при въвеждане на 0
        }
        
        sum = sum + number;  // добавяме числото към сумата
    }
    
    // Извеждане на резултата
    printf("Сумата на въведените числа е: %d\n", sum);
    
    return 0;
}


// lb zad 5.1 
#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    
    printf("Въвеждайте числа (0 за край):\n");
    
    do {
        scanf("%d", &number);
        if (number != 0) {
            sum = sum + number;
        }
    } while (number != 0);  // повтаряме докато числото не е 0
    
    printf("Сумата на въведените числа е: %d\n", sum);
    
    return 0;
}



// lb zad 6
#include <stdio.h>

int main() {
    float start, end, step;
    float x, result;
    
    // Прочитане на интервала и стъпката
    printf("Въведете начална стойност: ");
    scanf("%f", &start);
    printf("Въведете крайна стойност: ");
    scanf("%f", &end);
    printf("Въведете стъпка: ");
    scanf("%f", &step);
    
    // Проверка дали стъпката е положителна
    if (step <= 0) {
        printf("Стъпката трябва да е положително число!\n");
        return 1;  // изход с грешка
    }
    
    // Проверка дали start <= end (коригираме ако е обърнат редът)
    if (start > end) {
        // Разменяме start и end, за да можем да вървим нагоре
        float temp = start;
        start = end;
        end = temp;
    }
    
    printf("\nСтойности на функцията f(x) = x^2 - x + 4\n");
    printf("----------------------------------------\n");
    
    // Обхождане на всички стойности от start до end със стъпка step
    for (x = start; x <= end; x = x + step) {
        result = x * x - x + 4;  // пресмятане на f(x) = x^2 - x + 4
        printf("f(%.2f) = %.2f\n", x, result);
    }
    
    return 0;
}