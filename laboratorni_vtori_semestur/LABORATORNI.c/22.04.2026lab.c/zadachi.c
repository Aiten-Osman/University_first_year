#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int N;
    int i;
    int num;

    printf("Enter number of elements N: ");
    scanf("%d", &N);

    fp = fopen("numbers.bin", "wb");
    if (fp == NULL) {
        printf(" не може дап де създаде файл\n");
        exit(1);
    }

    fwrite(&N, sizeof(int), 1, fp); 

    for (i = 0; i < N; i++) {
        printf("Въведи число: ");
        scanf("%d", &num);
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);
    FILE *p;
    int E, i, num, even_count = 0, odd_count = 0;

    p = fopen("numbers.bin", "rb");
    if (fp == NULL) {
        printf("файлът не може да се отвори\n");
        exit(1);
    }

    fread(&N, sizeof(int), 1, fp);

    for (i = 0; i < E; i++) {
        fread(&num, sizeof(int), 1, fp);
        if (num % 2 == 0)
            even_count++;
        else
            odd_count++;
    
    }

    printf("четните числа са : %d\n", even_count);
    printf("нечетните числа са : %d\n", odd_count);
    fclose(p);
    return 0;

}









