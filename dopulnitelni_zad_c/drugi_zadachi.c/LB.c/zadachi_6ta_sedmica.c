// //zad1
// #include <stdio.h>

// int main() {
//     int numbers[7];
//     int sum = 0;
    
//     printf("Enter 7 integers from the interval [-5000..5000]:\n");
//     for (int i = 0; i < 7; i++) {
//         scanf("%d", &numbers[i]);
//         sum = sum + numbers[i];
//     }
    
//     printf("Sum: %d\n", sum);
//     return 0;
// }



// //zad2 
// #include <stdio.h>

// int main() {
//     int numbers[7];
//     int max;
    
//     printf("Enter 7 integers from the interval [-5000..5000]:\n");
//     for (int i = 0; i < 7; i++) {
//         scanf("%d", &numbers[i]);
//         if (i == 0 || numbers[i] > max) {
//             max = numbers[i];
//         }
//     }
    
//     printf("Largest number: %d\n", max);
//     return 0;
// }

// //zad3
// #include <stdio.h>

// int main() {
//     int numbers[7];
//     int sum = 0;
//     double average;
    
//     printf("Enter 7 integers from the interval [-5000..5000]:\n");
//     for (int i = 0; i < 7; i++) {
//         scanf("%d", &numbers[i]);
//         sum += numbers[i];
//     }
    
//     average = (double)sum / 7;
//     printf("Average value: %.3f\n", average);
//     return 0;
// }


// //zad4
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int numbers[7];
//     int sum = 0;
//     double average;
//     int closest;
//     int position = 0;
    
//     printf("Enter 7 integers from the interval [-5000..5000]:\n");
//     for (int i = 0; i < 7; i++) {
//         scanf("%d", &numbers[i]);
//         sum += numbers[i];
//     }
    
//     average = (double)sum / 7;
//     closest = numbers[0];
    
//     for (int i = 1; i < 7; i++) {
//         if (abs(numbers[i] - average) < abs(closest - average)) {
//             closest = numbers[i];
//             position = i;
//         }
//     }
    
//     printf("Average value: %.2f, closest value %d at position %d\n", 
//            average, closest, position + 1);
//     return 0;
// }



// //zad5
// #include <stdio.h>

// int main() {
//     int numbers[7];
//     int temp;
    
//     printf("Enter 7 integers from the interval [-5000..5000]:\n");
//     for (int i = 0; i < 7; i++) {
//         scanf("%d", &numbers[i]);
//     }
    
//     printf("Original array: ");
//     for (int i = 0; i < 7; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");
    
//     // Сортиране - сравняваме всеки елемент с всеки
//     for (int i = 0; i < 7; i++) {
//         for (int j = i + 1; j < 7; j++) {
//             if (numbers[i] > numbers[j]) {
//                 temp = numbers[i];
//                 numbers[i] = numbers[j];
//                 numbers[j] = temp;
//             }
//         }
//     }
    
//     printf("Sorted array: ");
//     for (int i = 0; i < 7; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");
    
//     return 0;
// }


// //zad6
// #include <stdio.h>

// int main() {
//     char text[100];
//     int length = 0;
    
//     printf("Enter a string: ");
//     fgets(text, sizeof(text), stdin);
    
//     // Броим символите с for цикъл
//     for (length = 0; text[length]; length++) {
//         // Празно тяло - само увеличаваме length
//     }
    
//     // Ако последният символ е нов ред, намаляме дължината
//     if (length > 0 && text[length - 1] == '\n') {
//         length--;
//     }
    
//     printf("String length: %d\n", length);
    
//     return 0;
// }


// //zad7
// #include <stdio.h>

// int main() {
//     char text[200];
//     int count = 0;
//     int inWord = 0;
    
//     printf("Enter text: ");
//     fgets(text, sizeof(text), stdin);
    
//     // Проверяваме всеки символ
//     for (int i = 0; text[i] != '\0'; i++) {
//         // Проверяваме дали символът е интервал, табулация или нов ред
//         if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
//             inWord = 0;  // Излизаме от дума
//         }
//         else if (inWord == 0) {
//             inWord = 1;  // Влизаме в нова дума
//             count++;     // Увеличаваме брояча
//         }
//     }
    
//     // Ако последният символ е нов ред, намаляме броя с 1 (ако имаме празен низ)
//     if (count > 0 && text[0] == '\n') {
//         count = 0;
//     }
    
//     printf("Number of words: %d\n", count);
    
//     return 0;
// }




// //zad8
// #include <stdio.h>

// int main() {
//     char text[200];
//     int countA = 0, countB = 0, countC = 0;  // и така нататък за всяка буква
//     // Но горният вариант с масив е по-добър
    
//     // По-добре с масив:
//     int letters[26] = {0};
    
//     printf("Enter text: ");
//     fgets(text, sizeof(text), stdin);
    
//     for (int i = 0; text[i] != '\0'; i++) {
//         // Малки букви
//         if (text[i] >= 97 && text[i] <= 122) {  // ASCII: a=97, z=122
//             letters[text[i] - 97]++;
//         }
//         // Главни букви
//         if (text[i] >= 65 && text[i] <= 90) {   // ASCII: A=65, Z=90
//             letters[text[i] - 65]++;
//         }
//     }
    
//     printf("Letter frequency:\n");
//     for (int i = 0; i < 26; i++) {
//         if (letters[i] > 0) {
//             printf("%c (%c) : %d times\n", 'a' + i, 'A' + i, letters[i]);
//         }
//     }
    
//     return 0;
// }



// //zad9
// #include <stdio.h>

// int main() {
//     char text[200];
//     int i;
    
//     printf("Enter text: ");
//     fgets(text, sizeof(text), stdin);
    
//     printf("Original: %s", text);
    
//     // За всяка буква в текста
//     for (i = 0; text[i] != '\0'; i++) {
//         // Ако е между 'a' и 'z' (малка буква)
//         if (text[i] >= 97 && text[i] <= 122) {
//             text[i] = text[i] - 32;  // Превръщаме в главна
//         }
//     }
    
//     printf("Uppercase: %s", text);
    
//     return 0;
// }