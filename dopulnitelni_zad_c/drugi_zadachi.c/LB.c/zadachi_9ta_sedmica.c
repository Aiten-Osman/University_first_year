#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many numbers you will have in the array: ");
    scanf("%d", &n);
    
    int* arr;
    arr = calloc(n, sizeof(int));
    
    printf("Enter %d numbers: ", n);
    
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
        sum = sum + arr[i];    
    }
    
    printf("Sum = %d\n", sum);
    
    arr = realloc(arr, (n + sum) * sizeof(int));
    
    printf("Array after adding %d numbers: ", sum);
    for (int i = n; i < n + sum; i++) {
        arr[i] = i + 1;   
    }
    
    for (int i = 0; i < n + sum; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    
    return 0;
}



//zad2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    int* arr;
    arr = calloc(n, sizeof(int));
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    
    return 0;
}


//zad3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    int* arr;
    arr = calloc(n, sizeof(int));
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int* even;
    even = calloc(n, sizeof(int));
    
    int evenCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {           
            even[evenCount] = arr[i];    
            evenCount = evenCount + 1;  
        }
    }
    
    even = realloc(even, evenCount * sizeof(int));
    
    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    
    free(arr);
    free(even);
    
    return 0;
}


//zad4
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    
    int* arr1;
    arr1 = calloc(n1, sizeof(int));
    
    printf("Enter %d numbers for first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    int n2;
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    
    int* arr2;
    arr2 = calloc(n2, sizeof(int));
    
    printf("Enter %d numbers for second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int* result;
    result = calloc(n1 + n2, sizeof(int));
    
    for (int i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        result[n1 + i] = arr2[i];   
    }
    

    printf("Concatenated array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    
    free(arr1);
    free(arr2);
    free(result);
    
    return 0;
}


//zad5 **
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str;
    str = calloc(1, sizeof(char));
    
    int length = 0;
    
    printf("Enter a string (without spaces): ");
    
    for (int i = 0; i < 100; i++) {
        char ch;
        scanf("%c", &ch);          
        
        if (ch == '\n') {          
            break;
        }
        
        str = realloc(str, length + 2);
        
        str[length] = ch;
        length = length + 1;
        
        str[length] = '\0';
    }
    
    
    printf("String: %s\n", str);
    printf("Length: %d\n", length);
    
    free(str);
    
    return 0;
}

//zad7
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    int* arr;
    arr = calloc(n, sizeof(int));
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index;
    printf("Enter index to remove (0 to %d): ", n - 1);
    scanf("%d", &index);
    
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];   
    }
    
    arr = realloc(arr, (n - 1) * sizeof(int));
    
    printf("Array after removal: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    
    return 0;
}



//zad9
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    int* arr;
    arr = calloc(n, sizeof(int));
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int* unique;
    unique = calloc(n, sizeof(int));
    
    
    int uniqueCount = 0;
    
    for (int i = 0; i < n; i++) {
        int found = 0;  
        
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                found = 1;   
                break;       
            }
        }
        

        if (found == 0) {
            unique[uniqueCount] = arr[i];
            uniqueCount = uniqueCount + 1;
        }
    }
    
    unique = realloc(unique, uniqueCount * sizeof(int));
    
    printf("Unique elements: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    
    free(arr);
    free(unique);
    
    return 0;
}