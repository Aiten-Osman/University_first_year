// //zad2
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter sequence: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int valid = 1;
//     for (int i = 0; i < N - 1; i++) {
//         if (i % 2 == 0) {
//             if (arr[i] >= arr[i + 1]) {
//                 valid = 0;
//                 break;
//             }
//         } else {
//             if (arr[i] <= arr[i + 1]) {
//                 valid = 0;
//                 break;
//             }
//         }
//     }
    
//     if (valid) {
//         printf("Relations are satisfied\n");
//     } else {
//         printf("Relations are NOT satisfied\n");
//     }
    
//     return 0;
// }

// //zad3 
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter array: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int reversed[100];
//     for (int i = 0; i < N; i++) {
//         reversed[i] = arr[N - 1 - i];
//     }
    
//     printf("Reversed array: ");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", reversed[i]);
//     }
//     printf("\n");
    
//     return 0;
// }



// //zad4
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter sequence: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int K;
//     printf("Enter K: ");
//     scanf("%d", &K);
    
//     K = K % N;
//     int rotated[100];
    
//     for (int i = 0; i < N; i++) {
//         rotated[(i + K) % N] = arr[i];
//     }
    
//     printf("Rotated sequence: ");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", rotated[i]);
//     }
//     printf("\n");
    
//     return 0;
// }


// 

// //zad6
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter sequence: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     for (int i = 0; i < N - 1; i++) {
//         for (int j = 0; j < N - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
    
//     printf("Longest increasing subsequence (after bubble sort): ");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     for (int i = 0; i < N - 1; i++) {
//         for (int j = 0; j < N - i - 1; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
    
//     printf("Longest decreasing subsequence (after bubble sort): ");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }

// //zad7
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter array: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int target;
//     printf("Enter target sum: ");
//     scanf("%d", &target);
    
//     int found = 0;
//     int start = 0, end = 0;
    
//     for (int i = 0; i < N; i++) {
//         int sum = 0;
//         for (int j = i; j < N; j++) {
//             sum += arr[j];
//             if (sum == target) {
//                 start = i;
//                 end = j;
//                 found = 1;
//                 break;
//             }
//         }
//         if (found) break;
//     }
    
//     if (found) {
//         printf("Subsequence with sum %d: ", target);
//         for (int i = start; i <= end; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     } else {
//         printf("No subsequence with sum %d found\n", target);
//     }
    
//     return 0;
// }


// //zad8 
// #include <stdio.h>

// int main() {
//     int arr[20];
//     int count = 10;
    
//     printf("Enter 10 numbers: ");
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int num, pos;
    
//     while (count < 20) {
//         printf("Enter number and position (0 to stop): ");
//         scanf("%d", &num);
//         if (num == 0) break;
//         scanf("%d", &pos);
        
//         if (pos < 0 || pos > count) {
//             printf("Invalid position!\n");
//             continue;
//         }
        
//         // Shift elements to the right
//         for (int i = count; i > pos; i--) {
//             arr[i] = arr[i - 1];
//         }
//         arr[pos] = num;
//         count++;
//     }
    
//     printf("Result: ");
//     for (int i = 0; i < count; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }


// //zad9
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter array: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int maxStart = 0;
//     int maxLen = 1;
//     int currStart = 0;
//     int currLen = 1;
    
//     for (int i = 1; i < N; i++) {
//         if (arr[i] == arr[i - 1]) {
//             currLen++;
//         } else {
//             if (currLen > maxLen) {
//                 maxLen = currLen;
//                 maxStart = currStart;
//             }
//             currStart = i;
//             currLen = 1;
//         }
//     }
    
//     if (currLen > maxLen) {
//         maxLen = currLen;
//         maxStart = currStart;
//     }
    
//     printf("Longest sequence of equal elements: ");
//     for (int i = maxStart; i < maxStart + maxLen; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }


// //zad10
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N: ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter sequence: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int x;
//     printf("Enter x: ");
//     scanf("%d", &x);
    
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         if (arr[i] == x) {
//             count++;
//         }
//     }
    
//     printf("%d appears %d times\n", x, count);
    
//     return 0;
// }

// //zad11 
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter N (max 100): ");
//     scanf("%d", &N);
    
//     int arr[100];
//     printf("Enter elements: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int minVal = arr[0], maxVal = arr[0];
//     int minIndex = 0, maxIndex = 0;
    
//     for (int i = 1; i < N; i++) {
//         if (arr[i] < minVal) {
//             minVal = arr[i];
//             minIndex = i;
//         }
//         if (arr[i] > maxVal) {
//             maxVal = arr[i];
//             maxIndex = i;
//         }
//     }
    
//     printf("Smallest element: %d at index %d\n", minVal, minIndex);
//     printf("Largest element: %d at index %d\n", maxVal, maxIndex);
    
//     return 0;
// }


//zad12
#include <stdio.h>

int main() {
    int multiplier, count;
    printf("Enter multiplier and count: ");
    scanf("%d %d", &multiplier, &count);
    
    int arr[100];
    for (int i = 0; i < count; i++) {
        arr[i] = multiplier * (i + 1);
    }
    
    printf("Result: ");
    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
