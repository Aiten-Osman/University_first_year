// #include <stdio.h>
// int main (){
//     int a,n;
//     scanf("%d %d", &a,&n);
//     int sum = a+n;
//     printf("%d + %d = %d ",a,n,sum);

// }





//масиви 
// #include <stdio.h> 
// int main () { 
// int n[ 10 ]; /* n is an array of 10 integers */ 
// int i,j; 
// /* initialize elements of array n to 0 */          
// for ( i = 0; i < 10; i++ ) { 
// n[ i ] = i + 100; /* set element at location i to i + 100 */ 
// } 
// /* output each array element's value */ 
// for (j = 0; j < 10; j++ ) { 
// printf("Element[%d] = %d\n", j, n[j] ); 
// } 
// return 0; 
// } 

// #include <stdio.h>
// int main() {
//  int arr[5], i; 
   
//     printf("Size of integer in this compiler is %lu\n", 
//            sizeof(int)); // sizeof() returns size of a variable
//     printf("Size of arr is %lu\n", sizeof(arr));// sizeof(arr) returns total size of the array in bytes
//     printf("Number of elements in arr is %lu\n", sizeof(arr) / sizeof(int)); // To get the number of elements, divide total size by size of one element
   
//     for (i = 0; i < 5; i++) 
//         // The use of '&' before a variable name, yields 
//         // address of variable. 
//         printf("Address arr[%d] is %p\n", i, &arr[i]); 
//     return 0;
// }




// //сортиране на масив 
// #include <stdio.h> 
  
// // A function to implement bubble sort 
// void bubbleSort(int arr[], int n) 
// { 
//     int i, j; 
//     for (i = 0; i < n - 1; i++) 
  
//         // Last i elements are already in place 
//         for (j = 0; j < n - i - 1; j++) 
//             if (arr[j] > arr[j + 1]) 
//             { 
//                  int temp = arr[j]; 
//                  arr[j] = arr[j+1]; 
//                  arr[j+1] = temp; 
//             } 
// } 
  
// /* Function to print an array */ 
// void printArray(int arr[], int size) 
// { 
//     int i; 
//     for (i = 0; i < size; i++) 
//         printf("%d ", arr[i]); 
//     printf("\n"); 
// } 
  
// // Driver program to test above functions 
// int main() 
// { 
//     int arr[] = { 5, 1, 4, 2, 8 }; 
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     bubbleSort(arr, n); 
//     printf("Sorted array: \n"); 
//     printArray(arr, n); 
//     return 0; 
// }



// #include <stdio.h> 
// double getAverage(int arr[], int size) { 
 
//    int i; 
//    double avg; 
//    double sum = 0; 
 
//    for (i = 0; i < size; ++i) { 
//       sum += arr[i]; 
//    } 
 
//    avg = sum / size; 
 
//    return avg; 
// } 

 
// int main () { 
 
//    /* an int array with 5 elements */ 
//    int balance[5] = {1000, 2, 3, 17, 50}; 
//    double avg; 
 
//    /* pass pointer to the array as an argument */ 
//    avg = getAverage( balance, 5 ) ; 
  
//    /* output the returned value */ 
//    printf( "Average value is: %f ", avg ); 
     
//    return 0; 
// }



// #include <stdio.h> 
   
// int arr_length(int arr[]) 
// { 
//     int i; 
//     int count = 0; 
//     for(i=0; arr[i]!='\0'; i++) 
//     { 
//         count++; 
//     } 
//     return count; 
// } 
   
// int main() 
// { 
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10, '\0'}; 
//     int n; 
   
//     n = arr_length(arr); 
//     printf("Length of Array is: %d", n); 
   
//     return 0; 
// } 



// #include <stdio.h> 
// int main() 
// { 
//     char name[30]; 
//     printf("Enter name: "); 
//     fgets(name, sizeof(name), stdin);  // read string 
//     printf("Name: "); 
//     puts(name);    // display string 
//     return 0; 
// }





// //указатели
// #include <stdio.h>
// int main() {
// int  var = 20;   /* декларация на реална променлива*/ 
// int  *ip;        
// /* декларация на указател */ 
// ip = &var;  /* подаване на стойност на указателя адреса на променлива */ 
// printf("Address of var variable: %x\n", &var  ); 
// /* адреса запазен в указателя */ 
// printf("Address stored in ip variable: %x\n", ip ); 
// /* достъп до стойността в указателя */ 
// printf("Value of *ip variable: %d\n", *ip ); 
// }


// #include <stdio.h> 
// void myFunction(int *my_var) { 
// *my_var = 15; // Get the value and change it!! 
// } 
// int main() { 
// int x = 5; 
// printf("Before func: %d\n", x); 
// myFunction(&x); //Pass ref to the function 
// printf("After func: %d\n", x); 
// } 


// #include <stdio.h> 
// int main() { 
// int arr[5] = {10, 15, 25, 30, 80}; 
// printf("%d\n", arr); 
// printf("%d\n", &arr[0]); 
// }



// #include <stdio.h> 
// int main () { 

//    /* масив с 5 реда и 2 колони*/ 
//    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}}; 
//    int i, j; 
  
//    /* изкарване на всеки елемент */ 
//    for ( i = 0; i < 5; i++ ) { 
 
//       for ( j = 0; j < 2; j++ ) { 
//          printf("a[%d][%d] = %d\n", i,j, a[i][j] ); 
//       } 
//    } 
    
//    return 0; 
// } 



#include <stdio.h> 
const int CITY = 2; 
const int WEEK = 7; 
 
int main() 
{ 
  int temperature[CITY][WEEK]; 
 
  // Using nested loop to store values in a 2d array 
  for (int i = 0; i < CITY; ++i) 
  { 
    for (int j = 0; j < WEEK; ++j) 
    { 
      printf("City %d, Day %d: ", i + 1, j + 1); 
      scanf("%d", &temperature[i][j]); 

    } 
  } 
  printf("\nDisplaying values: \n\n"); 
 
  // Using nested loop to display vlues of a 2d array 
  for (int i = 0; i < CITY; ++i) 
  { 
    for (int j = 0; j < WEEK; ++j) 
    { 
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]); 
    } 
  } 
  return 0; 
}