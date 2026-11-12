// файл - логическа свързаност на данни съхранени под някакво име
// данните може да са всякакъв вид - число, текст, изображение, видео и т.н.
// файловете са организирани в папки (директории) - логическа организация на данните
// декларирането на файл - указване на неговото име и типа данни, които ще се съхраняват в него

// FILE *p
// може да са текстови, бинарни (двоични) - в зависимост от начина на съхранение на данните
// двоичния завършва със слаш и буквата b - "rb", "wb", "ab"
// текстовия завършва със слаш и буквата t - "rt", "wt", "at"
// двоичните се използват за съхранение на данни в техния оригинален формат, докато текстовите се използват за съхранение на данни като текст
// отваряне на файл - fopen - връща указател към файла, който може да се използва за четене или запис
// затваряне на файл - fclose - освобождава ресурсите, свързани с файла
// четене от файл - fread - чете данни от файла и ги съхранява в променлива
// запис в файл - fwrite - записва данни от променлива във файла    



// # include <stdio.h>
// int main() {
//     FILE *p;
//     p = fopen("file.txt", "r"); // w - write, r - read, a - append //.txt - текстов файл, .bin - двоичен файл   може без да го пишем, защото като има режим то е логично, че е текстов  файл
//     if (p == NULL) {
//         printf("Error opening file!\n");
//         exit (1);
//     }
//     fclose(p);
//     return 0;
// }


// fgets - чете ред от текстов файл и го съхранява в масив от символи/ чете всеки бит
// fputs - записва ред в текстов файл от масив от символи
// fputc = - записва един символ в текстов файл
//EOF - end of file - специална константа, която се връща от функциите за четене, когато достигнат края на файла
// putchar - прочетения символ го вкарва в конзолата


// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     char str [80] = "This is a file system test.";
//     FILE *fp;
//     char *p;
//     int i;
//     if ((fp = fopen("file.txt", "w")) == NULL) {
//         printf("Error opening file!\n");
//         exit (1);
//     }
//     p= str;
//     while (*p) { // докато не достигнем края на низа (където е нулевия символ '\0') обхожда всеки символ от низа и го записва във файла    
//        if (fputc(*p, fp) == EOF) {
//             printf("Error writing to file!\n");
//             fclose(fp);
//             exit (1);
//         }
//         p++;
//     }
//     for(;;) {
//         i = fgetc(fp); // прочита един символ от файла и го връща като цяло число (ASCII код на символа)
//         if (i == EOF)  // ако достигнем края на файла, функцията връща EOF
//             break;
//             putchar(i); // извежда символа в конзолата
        
//     }
//     fclose(fp);
//     return 0;

// }


//int fprintf(FILE *stream, const char *format, ...) - записва форматиран текст във файл
//int fscanf(FILE *stream, const char *format, ...) - чете форматиран текст от файл
//feof(FILE *stream) - проверява дали е достигнат края на файла 



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    FILE *fp;
    double ld;
    int d;
    char str[80];

    if (argc!=2) { // ще имаме 3 аргумента - името на програмата, името на файла и още един аргумент, който ще е празен, защото няма да го използваме   
        printf("Specify file name!\n");
        exit(1);


    if ((fp = fopen(argv[1], "w")) == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(fp, "%f %d %s", 12345.342, 1908, "Hello"); // записва форматиран текст във файла    
    fclose(fp);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fscanf(fp, "%lf %d %s", &ld, &d, str); // чете форматиран текст от файла и го съхранява в променливите ld, d и str
    printf("Read from file: %f %d %s\n", ld, d, str); // записва в конзолата прочетените данни от файла
    fclose(fp);
    return 0;
}


// fread - чете данни от двоичен файл и ги съхранява в променлива
// fwrite - записва данни от променлива във двоичен файл 


//fseek - позиционира указателя на файла на определена позиция
// fseek int fseek(FILE *stream, long int offset, int whence) - позиционира указателя на файла на определена позиция
//fseek set - началото на файла
//fseek cur - текущата позиция на указателя

//rewind - връща указателя на файла в началото на файла

// fflush - изчиства буфера на файла, принуждавайки всички данни да бъдат записани във файла веднага, без да се чака буферът да се запълни  


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void writening (){
    int i,number,j;
    double price;
    char article[50];
    FILE *fp;
    printf("enter the string less than 50 characters: ");
    gets(article);
    j = ((sizeof(article)));

  
    printf("enter the number: ");
    scanf("%d", &number);
    printf("enter the price: ");
    scanf("%lf", &price);

    if ((fp = fopen("withln", "ab")) == NULL) {
        printf("The file cant open!");
    }
    if (fwrite(&number, sizeof(int), 1, fp) != 1) {
        printf("Error writing to file!\n");
       
    }
}






void readning() {
    int i,number,number1;
    double price;
    char article[50];
    FILE *fp;
    printf("enter the number ");
    scanf("%d", &number);
    if ((fp = fopen("withln", "rb")) == NULL) 
        printf("The file cant open!");
    

    for (;;) {
        if (fread(&number, sizeof(int), 1, fp) != 1) 
        {

            printf("Error reading from file!");
            break;

        }

          if (fread(&i, sizeof(int), 1, fp) != 1) 
        {
            printf("Error reading from file!");
            break;
        }

          if (fread(&number, sizeof(int), 1, fp) != 1) 
        {
            printf("Error reading from file!");
            break;
        }



}
}

int main (){
    char choise ;
    do {
        printf("enter 1 for writeing and 2 for reading: \n");
        choise = getchar();
        fflush(stdin);
    }
    while (choise != '1' && choise != '2');
    switch (choise)
    {
    case '1':
        writening();
        break;
    case '2':
        readning();
    

    }
    system("pause");
    return 0;

}








