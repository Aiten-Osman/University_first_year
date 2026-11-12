#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // Файлове - поток от данни 
    // Видове файлове - текстов, бинарен 
    // Текстовият файл е бинарен файл. 
    // int sizeof100 - случайно число, зависи от char-овете на string-a - слага се преди да се четe string в един файл 
    // \0 - терминираща нула няма в бинарните файлове.

    // FILE *fp = fopen("path", "r"); //r - read
    // FILE *fp = fopen("path", "w"); //w - write
    // FILE *fp = fopen("path", "a"); //a - append

    // if(fp == NULL){
    //     printf();
    //     exit();
        // exit(1);
        // exit(0); 
    //}

    // fclose(fp);

    //write - презаписва файла
    //append - добавя във файла

    //Функции във файлове
    // fprintf(fp,"%d", a);
    // fscanf(fp,"%d", &a);
    // fgets(&, брой char-ове, fp)

    //Главни функции за бинарни файлове 
    // fread(&,type