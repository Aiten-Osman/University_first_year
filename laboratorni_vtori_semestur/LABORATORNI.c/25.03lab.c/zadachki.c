// //zad 3 
// #include <stdio.h>

// int main() {
//     int var = 25;          
//     int *ptr;             

//     ptr = &var;            
//     printf("Address of var: %p\n", &var);
//     printf("Address stored in ptr: %p\n", ptr);
//     printf("Value of *ptr: %d\n", *ptr);

//     return 0;
// }


// //zad 4
// #include <stdio.h>

// int main() {
//     int num1, num2;
//     int sum, diff, prod;
//     float div;
    
//     printf("Въведете първото число: ");
//     scanf("%d", &num1);
    
//     printf("Въведете второто число: ");
//     scanf("%d", &num2);
    
//     sum = *(&num1) + *(&num2);      
//     diff = *(&num1) - *(&num2);     
//     prod = *(&num1) * *(&num2);     
    
//     printf("\nРезултати:\n");
//     printf("%d + %d = %d\n", *(&num1), *(&num2), *(&sum));
//     printf("%d - %d = %d\n", *(&num1), *(&num2), *(&diff));
//     printf("%d * %d = %d\n", *(&num1), *(&num2), *(&prod));
    
//     if (*(&num2) != 0) {
//         div = (float)*(&num1) / *(&num2);
//         printf("%d / %d = %.2f\n", *(&num1), *(&num2), *(&div));
//     } else {
//         printf("%d / %d = На 0 не се дели.\n", *(&num1), *(&num2));
//     }
    
//     return 0;
// }


// zad 1

#include <stdio.h>

int main() {
    int N;

    printf("Enter size (N): ");
    scanf("%d", &N);

    int matrix[N][N];
    printf("\nEnter %d elements:\n", N * N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Matrix (%dx%d) ---\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("\n Main diagonal elements:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("\n Secondary diagonal elements:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][N-i-1]); // dali shte e purvo -1-i nqma znachenie 
    }
    printf("\n");

    return 0;
}






