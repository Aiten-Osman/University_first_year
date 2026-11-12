// //zad1

// #include <stdio.h>

// int main() {
//     int n;
//     int i;
//     int count = 0;
    
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     printf("Enter %d integer numbers:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     for(i = 1; i < n; i += 2) {
//         if(arr[i] % 2 == 0) {
//             count++;  
//         }
//     }
    
//     printf("Even numbers on odd positions: %d\n", count);
    
//     return 0;
// }



// // zad 2 
// #include <stdio.h>

// int main() {
//     int n;
//     int i;
    
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];      
//     int sumArr[n];   
    
//     printf("Enter four-digit numbers (1000-9999):\n");
    
//     for(i = 0; i < n; i++) {
//         int num;
        
//         printf("Enter element: ");
//         scanf("%d", &num);
        
//         while(num < 1000 || num > 9999) {
//             printf(" Try again.\n");
//             printf("Enter element: ");
//             scanf("%d", &num);
//         }
        
//         arr[i] = num;
        
//         int d1 = num % 10;
//         int d2 = (num / 10) % 10;
//         int d3 = (num / 100) % 10;
//         int d4 = (num / 1000) % 10;
        
//         int sum = d1 + d2 + d3 + d4;
//         sumArr[i] = sum;
//     }
    
    
//     printf("\nSum of digits:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d\n", sumArr[i]);
//     }
    
//     return 0;
// }


// //zad3
// #include <stdio.h>

// int main() {
//     int n;
//     int i;
//     int j= 0;
    
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     printf("Enter numbers:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     for(i = 0; i < n; i++) {
//         if(arr[i] != 0) {
//             arr[j] = arr[i];
//             j++;
//         }
//     }
    
//     printf("\nArray without 0:\n");
//     for(i = 0; i < j; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }

//zad4
#include <stdio.h>

int main() {
    int rows;
    int cols;
    int i;
    int j;
    int count = 0;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    printf("Enter %d elements:\n", rows * cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] < 0) {
                count++;
            }
        }
    }
    
   
    return 0;
}

