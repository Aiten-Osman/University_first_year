//zad1

#include <stdio.h>
int main (){
    int N;
    int M;
    printf("Enter number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);


    int arr[N][M];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i <N ; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }




    for (int i = 0; i < N; i++){
        for (int j = 0; j < M - 1; j++){
            if (arr[i][j] >= arr[i][j + 1]){
                printf("Матрицата няма нарастващи елементи по редове.\n");
                return 0;
            }
        }
    }


    for (int j = 0; j < M; j++){
        for (int i = 0; i < N - 1; i++){
            if (arr[i][j] <= arr[i + 1][j]){
                printf("Матрицата няма намаляващи елементи по стълбове.\n");
                return 0;
            }
        }
    }

    printf("Матрицата отговаря на условията\n");
    return 0;
}


//zad9

#include <stdio.h>
int main (){
    int arr [4][5];
    printf("Enter the elements of the 4x5 matrix:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int sum_row[4];
    for (int i = 0; i < 4; i++){
        sum_row[i] = 0;
        for (int j = 0; j < 5; j++){
            sum_row[i] = sum_row[i] + arr[i][j];
        }
    }

    int min_sum = sum_row[0];
    for (int i = 1; i < 4; i++){    
        if (sum_row[i] < min_sum){
            min_sum = sum_row[i];
        }
    }


    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf(" %d ", arr[i][j]);
        }
        printf(" %d \n", sum_row[i]);
    }
    
    printf(" \n Minimum sum of rows: %d\n", min_sum);
}



//zad10
#include <stdio.h>
int main (){
    int N;
    int M;
    printf("Enter number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);


    int arr[N][M];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i <N ; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int sum;
    for(int j = 0; j < M; j++) {
        sum = 0;
        for(int i = 0; i < N; i++) {
            sum = sum + arr[i][j];
        }
        printf("Стълб %d: %d\n", j + 1, sum);
    }
    
    return 0;

}



//zad6
#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) 
    return 0;
    if (num == 2) 
    return 1;
    if (num % 2 == 0) 
    return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) 
        return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    int* primes = (int*)malloc(primeCount * sizeof(int));
    if (primeCount > 0 && primes == NULL) {
        printf("Паметта не е заделена успешно!\n");
        free(arr);
        return 1;
    }
    int primeIndex = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primes[primeIndex++] = arr[i];
        }
    }


    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (!isPrime(arr[i])) {
            arr[newSize++] = arr[i];
        }
    }

    printf("\nArray without primes (%d elements): ", newSize);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array of primes (%d elements): ", primeCount);
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    free(arr);
    free(primes);

    return 0;
}
