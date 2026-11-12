#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    // Теория

    // int num[10]; неизменяем масив по елементи и дължина
    // malloc - Функция, чиято връща тип void. Заделя памет (стойностите са произволни)
    // int *p = (int*)malloc(5*sizeof(int));

    //Указателите задължително трябва да съвпадат по тип.
    // int x = 5;
    // char *p = &x;
    // printf("%d",sizeof(num) / sizeof(int));
    // printf("%d", sizeof(p));
    // calloc - Функция. Заделя памет и я нулира
    // realloc - Функция. променя размера на вече заделена памет
    // realloc(p, size);
    // free(p) - Функция. Освобождава паметта. 

    // int *p = (int*)calloc(5, sizeof(int));
    // p = (int*)realloc(p, 10 * sizeof(int));
    // free(p);
    
    // Практика
    int num[10];
    int* p = num;
    for (int i = 0; i < 10; i++){
        // num[i] = i;
        * (p+i) = i;
    }

}