// //1
// #include <stdio.h>

// int main() {
//     int var = 25;          // обикновена променлива
//     int *ptr;              // декларация на указател към int

//     ptr = &var;            // присвояване на адреса на var на указателя ptr

//     // извеждане на адреса на var (чрез &)
//     printf("Address of var: %p\n", &var);
//     // извеждане на стойността, съхранена в указателя (същият адрес)
//     printf("Address stored in ptr: %p\n", ptr);
//     // извеждане на стойността на променливата, към която сочи ptr
//     printf("Value of *ptr: %d\n", *ptr);

//     return 0;
// }




// //2
// #include <stdio.h>

// // функция за събиране
// void sum(int *a, int *b, int *result) {
//     *result = *a + *b;
// }

// // функция за изваждане
// void subtract(int *a, int *b, int *result) {
//     *result = *a - *b;
// }

// // функция за умножение
// void multiply(int *a, int *b, int *result) {
//     *result = (*a) * (*b);
// }

// // функция за деление
// void divide(int *a, int *b, float *result) {
//     if (*b != 0) {
//         *result = (float)(*a) / (*b);
//     } else {
//         printf("Error: Division by zero!\n");
//         *result = 0;
//     }
// }

// int main() {
//     int x, y;
//     int sum_res, sub_res, mul_res;
//     float div_res;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);

//     // подаване на адресите на променливите (reference)
//     sum(&x, &y, &sum_res);
//     subtract(&x, &y, &sub_res);
//     multiply(&x, &y, &mul_res);
//     divide(&x, &y, &div_res);

//     printf("\nResults:\n");
//     printf("Sum: %d\n", sum_res);
//     printf("Difference: %d\n", sub_res);
//     printf("Product: %d\n", mul_res);
//     printf("Division: %.2f\n", div_res);

//     return 0;
// }


//3
#include <stdio.h>

int main() {
    int N;

    printf("Enter size of square matrix (N): ");
    scanf("%d", &N);

    int matrix[N][N];

    // попълване на матрицата
    printf("\nEnter %d elements:\n", N * N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // извеждане на цялата матрица за преглед
    printf("\n--- Matrix (%dx%d) ---\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }


    // a. Главен диагонал (i == j)
    printf("\na) Main diagonal elements:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    // b. Второстепенен диагонал (i + j == N - 1)
    printf("\nb) Secondary diagonal elements:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][N - 1 - i]);
    }
    printf("\n");

    // c. Елементи над главния диагонал (j > i)
    printf("\nc) Elements above main diagonal:\n");
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    // d. Елементи под главния диагонал (j < i)
    printf("\nd) Elements below main diagonal:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}