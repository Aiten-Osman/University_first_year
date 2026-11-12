#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int N, i, num;

    printf("Enter number of elements N: ");
    scanf("%d", &N);

    fp = fopen("numbers.bin", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fwrite(&N, sizeof(int), 1, fp);

    for (i = 0; i < N; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);
    printf("File created successfully.\n");
    return 0;
}




//b
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int N, i, num, even_count = 0, odd_count = 0, digit;

    fp = fopen("numbers.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&N, sizeof(int), 1, fp);

    for (i = 0; i < N; i++) {
        fread(&num, sizeof(int), 1, fp);
        int temp = abs(num);
        do {
            digit = temp % 10;
            if (digit % 2 == 0)
                even_count++;
            else
                odd_count++;
            temp /= 10;
        } while (temp > 0);
    }

    fclose(fp);
    printf("Even digits: %d\n", even_count);
    printf("Odd digits: %d\n", odd_count);
    return 0;
}



//c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    FILE *fp_bin, *fp_txt;
    int N, i, *arr;

    fp_bin = fopen("numbers.bin", "rb");
    if (fp_bin == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }

    fread(&N, sizeof(int), 1, fp_bin);
    arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error!\n");
        fclose(fp_bin);
        return 1;
    }

    for (i = 0; i < N; i++)
        fread(&arr[i], sizeof(int), 1, fp_bin);

    fclose(fp_bin);

    qsort(arr, N, sizeof(int), compare);

    fp_txt = fopen("sorted.txt", "w");
    if (fp_txt == NULL) {
        printf("Error creating text file!\n");
        free(arr);
        return 1;
    }

    for (i = 0; i < N; i++)
        fprintf(fp_txt, "%d ", arr[i]);

    fclose(fp_txt);
    free(arr);
    printf("Sorted array written to sorted.txt\n");
    return 0;
}



//2
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int num;

    fp = fopen("numbers2.bin", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter integers (0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);
    printf("File created successfully.\n");
    return 0;
}




//b
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int num, even_digits = 0, odd_digits = 0, digit;

    fp = fopen("numbers2.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fread(&num, sizeof(int), 1, fp) == 1) {
        int temp = abs(num);
        do {
            digit = temp % 10;
            if (digit % 2 == 0)
                even_digits++;
            else
                odd_digits++;
            temp /= 10;
        } while (temp > 0);
    }

    fclose(fp);
    printf("Even digits: %d\n", even_digits);
    printf("Odd digits: %d\n", odd_digits);
    return 0;
}



//c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp_bin, *fp_txt;
    int *arr, count = 0, num, i, j, temp;

    // Отваряне на двоичния файл за четене
    fp_bin = fopen("numbers2.bin", "rb");
    if (fp_bin == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }

    // Прочитане на всички числа от двоичния файл
    arr = (int*)malloc(sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error!\n");
        fclose(fp_bin);
        return 1;
    }

    while (fread(&num, sizeof(int), 1, fp_bin) == 1) {
        arr = (int*)realloc(arr, (count + 1) * sizeof(int));
        if (arr == NULL) {
            printf("Memory reallocation error!\n");
            fclose(fp_bin);
            return 1;
        }
        arr[count++] = num;
    }
    fclose(fp_bin);

    // Сортиране на масива по възходящ ред (Bubble sort)
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Размяна на елементите
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Записване на сортирания масив в текстов файл
    fp_txt = fopen("sorted2.txt", "w");
    if (fp_txt == NULL) {
        printf("Error creating text file!\n");
        free(arr);
        return 1;
    }

    for (i = 0; i < count; i++) {
        fprintf(fp_txt, "%d ", arr[i]);
    }

    fclose(fp_txt);
    free(arr);
    
    printf("Sorted array written to sorted2.txt successfully!\n");
    return 0;
}




//3 
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char brand[50];
    char model[6];
    double engine_volume;
    double price;
    char registration;
} Car;

// Функция за копиране на низ (замества strcpy)
void my_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Функция за дължина на низ (замества strlen)
int my_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void write_to_binary(Car *car) {
    FILE *fp = fopen("cars.bin", "ab");
    if (fp == NULL) {
        printf("Error opening binary file!\n");
        return;
    }
    fwrite(car, sizeof(Car), 1, fp);
    fclose(fp);
}

void write_to_text(Car *car) {
    FILE *fp = fopen("cars.txt", "a");
    if (fp == NULL) {
        printf("Error opening text file!\n");
        return;
    }
    fprintf(fp, "%s %s %.2f %.2f %c\n", car->brand, car->model, car->engine_volume, car->price, car->registration);
    fclose(fp);
}

void add_car() {
    Car new_car;
    char temp[100];
    
    printf("Enter brand: ");
    scanf("%s", temp);
    my_strcpy(new_car.brand, temp);
    
    printf("Enter model (5 chars): ");
    scanf("%s", temp);
    my_strcpy(new_car.model, temp);
    
    printf("Enter engine volume: ");
    scanf("%lf", &new_car.engine_volume);
    
    printf("Enter price: ");
    scanf("%lf", &new_car.price);
    
    getchar();
    printf("Registration (Y/N): ");
    scanf("%c", &new_car.registration);

    write_to_binary(&new_car);
    write_to_text(&new_car);
    printf("Car added successfully.\n");
}

void read_and_compare() {
    FILE *fp_bin = fopen("cars.bin", "rb");
    FILE *fp_txt = fopen("cars.txt", "r");
    Car c;
    char ch;
    int line_num = 1;

    if (fp_bin == NULL) {
        printf("Error opening binary file!\n");
        return;
    }
    if (fp_txt == NULL) {
        printf("Error opening text file!\n");
        fclose(fp_bin);
        return;
    }

    printf("\n--- Binary file content ---\n");
    while (fread(&c, sizeof(Car), 1, fp_bin) == 1) {
        printf("Brand: %s, Model: %s, Engine: %.2f, Price: %.2f, Reg: %c\n",
               c.brand, c.model, c.engine_volume, c.price, c.registration);
    }

    printf("\n--- Text file content ---\n");
    while ((ch = fgetc(fp_txt)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp_bin);
    fclose(fp_txt);
}

int main() {
    int choice;

    do {
        printf("\n1. Add a car\n");
        printf("2. Read and compare files\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_car(); break;
            case 2: read_and_compare(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}




//dom
#include <stdio.h>
#include <stdlib.h>

struct uchenik {
    char ime[50];
    float ocenka;
};

int main() {
    int klasove;
    float sumObshto = 0;
    int ucheniciObshto = 0;
    
    printf("Kolko klasa? ");
    scanf("%d", &klasove);
    
    for(int i = 0; i < klasove; i++) {
        int broi;
        printf("\nKlas %d - kolko uchenici? ", i+1);
        scanf("%d", &broi);
        
        struct uchenik *masiv = malloc(broi * sizeof(struct uchenik));
        float sumKlas = 0;
        
        for(int j = 0; j < broi; j++) {
            printf("Ime: ");
            scanf("%s", masiv[j].ime);
            printf("Ocenka: ");
            scanf("%f", &masiv[j].ocenka);
            sumKlas = sumKlas + masiv[j].ocenka;
        }
        
        float sredno = sumKlas / broi;
        printf("Sreden uspeh na klasa: %.2f\n", sredno);
        
        sumObshto = sumObshto + sumKlas;
        ucheniciObshto = ucheniciObshto + broi;
        free(masiv);
    }
    
    printf("\nSreden uspeh na vipusk: %.2f\n", sumObshto / ucheniciObshto);
    return 0;
}




