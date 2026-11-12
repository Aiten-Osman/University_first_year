// #include <stdio.h>

// int main() {
//     int n, i, count = 0;
    
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



//zad2
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int sumArr[n];
    
    printf("Enter %d four-digit numbers (1000-9999):\n", n);
    for(i = 0; i < n; i++) {
        int num;
        
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num);
        
        if(num < 1000 || num > 9999) {
            printf("Warning: %d is not a four-digit number! Setting to 0.\n", num);
            arr[i] = 0;
            sumArr[i] = 0;
        } else {
            arr[i] = num;
            
           
            int d1 = num % 10;
            int d2 = (num / 10) % 10;
            int d3 = (num / 100) % 10;
            int d4 = (num / 1000) % 10;
            
            int sum = d1 + d2 + d3 + d4;
            sumArr[i] = sum;
        }
    }
    
    printf("\nSum of digits:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] == 0 && sumArr[i] == 0) {
            printf("%d -> invalid (not four-digit)\n", arr[i]);
        } else {
            printf("%d -> %d\n", arr[i], sumArr[i]);
        }
    }
    
    return 0;
}


//zad3
#include <stdio.h>

int main() {
    int n, i, j = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    
    printf("\nNew array after removing zeros:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


//zad4
#include <stdio.h>

int main() {
    int rows, cols, i, j, count = 0;
    
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
    
    int negatives[count];
    int index = 0;
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] < 0) {
                negatives[index] = matrix[i][j];
                index++;
            }
        }
    }
    
    printf("\nNegative elements in 1D array:\n");
    if(count == 0) {
        printf("No negative elements found.\n");
    } else {
        for(i = 0; i < count; i++) {
            printf("%d ", negatives[i]);
        }
        printf("\n");
    }
    
    return 0;
}


//zad5
#include <stdio.h>

int main() {
    int rows, cols, i, j, sumIndex, count = 0;
    float sumElements = 0, average;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    // Стъпка 2: Създаваме двумерния масив
    int matrix[rows][cols];
    
    // Стъпка 3: Въвеждаме естествени числа
    printf("Enter %d natural numbers:\n", rows * cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Стъпка 4: Обхождаме всички елементи
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            // Стъпка 5: Сума на индексите (ред + колона)
            sumIndex = i + j;
            
            // Стъпка 6: Проверка дали елементът е кратен на sumIndex
            // Внимаваме да не делим на 0 (когато i=0 и j=0)
            if(sumIndex != 0 && matrix[i][j] % sumIndex == 0) {
                sumElements += matrix[i][j];  // Стъпка 7: Събираме
                count++;                       // Стъпка 8: Броим
            }
        }
    }
    
    // Стъпка 9: Изчисляваме и извеждаме средно аритметично
    if(count > 0) {
        average = sumElements / count;
        printf("\nAverage of elements divisible by sum of their indices: %.2f\n", average);
        printf("(Found %d such elements)\n", count);
    } else {
        printf("\nNo elements found divisible by the sum of their indices.\n");
    }
    
    return 0;
}



//zad6
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;
    
    printf("Enter number of elements (n): ");
    scanf("%d", &n);
    
    float *prices;
    prices = (float*)calloc(n, sizeof(float));
    
    int *quantities;
    quantities = (int*)calloc(n, sizeof(int));
    
    printf("\nEnter prices and quantities:\n");
    
    for(i = 0; i < n; i++) {
        printf("Item %d - price: ", i + 1);
        scanf("%f", &prices[i]);
        
        printf("Item %d - quantity: ", i + 1);
        scanf("%d", &quantities[i]);
    }
    
    printf("\nEnter how many more elements to add (m): ");
    scanf("%d", &m);
    
    if(m > 0) {
        float *tempPrices;
        tempPrices = (float*)realloc(prices, (n + m) * sizeof(float));
        prices = tempPrices;
        
        int *tempQuantities;
        tempQuantities = (int*)realloc(quantities, (n + m) * sizeof(int));
        quantities = tempQuantities;
        
        for(i = n; i < n + m; i++) {
            prices[i] = 0;
            quantities[i] = 0;
        }
        
        printf("\nEnter %d more items:\n", m);
        
        for(i = n; i < n + m; i++) {
            printf("Item %d - price: ", i + 1);
            scanf("%f", &prices[i]);
            
            printf("Item %d - quantity: ", i + 1);
            scanf("%d", &quantities[i]);
        }
        
        n = n + m;
    }
    
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(prices[i] > prices[j]) {
                
                float tempPrice;
                tempPrice = prices[i];
                prices[i] = prices[j];
                prices[j] = tempPrice;
                
                int tempQty;
                tempQty = quantities[i];
                quantities[i] = quantities[j];
                quantities[j] = tempQty;
            }
        }
    }
    
    float totalValue = 0;
    
    printf("\n========== RESULT ==========\n");
    printf("Price\tQuantity\tTotal\n");
    printf("-----------------------------\n");
    
    for(i = 0; i < n; i++) {
        float prod;
        prod = prices[i] * quantities[i];
        
        totalValue = totalValue + prod;
        
        printf("%.2f\t", prices[i]);
        printf("%d\t\t", quantities[i]);
        printf("%.2f\n", prod);
    }
    
    printf("-----------------------------\n");
    printf("TOTAL VALUE: %.2f\n", totalValue);
    
    free(prices);
    free(quantities);
    
    return 0;
}