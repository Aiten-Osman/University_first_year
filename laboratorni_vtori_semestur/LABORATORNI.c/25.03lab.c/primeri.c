//ukazatel -> promenliva, koqto pokazva adres na druga promenliva 


// declaraciq na ukazatel NE moge da e sushtoto ime kato promenlivata 
// adresa na ukazatelq e po maluk ot samiq tip


// #include <stdio.h>
// int main (){

// int x=10,y,*p,*q;   //*y   -> *y ne moje trqbva da e *q
// int *p; -> declarirane na ukazatel
//     p=&x; // nasochvame ukazatelq
//     q=&y;
//     p = &q; 

// double arr[3], *ptr;
// ptr = arr;
// printf("%d",*p); -> taka se izvejda stoinostta na ukazatelq s *p, a inache s 
// }


// #include <stdio.h>
// int main (){
//     int var = 20;
//     int *ip;
//     ip = &var;
//     printf("%x\n",&var); // adres na promenlivata var
//     printf("%x\n",ip); // adres na ukazatelq
//     printf("%d\n",*ip); // stoinastta na ukazatelq

// }


// stoitost NULL na ukazatelq she izpolzvame za failove 
// ppc ne sochi 0 zashtoto 0 e zapazeno za sistemite 
// #include <stdio.h>
// int main (){
// int a = 5;
// int *p = &a;
// int **ppa= &p; // dvoen ukazatel 
// *p = a;  //ukazatelq  prisvoqva stoinostta na promenlivata 


// }

// #include <stdio.h>
// int main (){
//     int arr[]= {10,20,30,40,50,60};
//     int * ptr = arr; // nasochvame ukazatelq kum 1vi element na masiva, VINAGI 1vi 
//     //int * ptr = &arr; // greshka zashtoto stavat dva adresa 
//     //int * ptr = &arr[3]; izvejda 40
//     printf("%d",*ptr);
//     printf("arr[4] = %d\n", arr[4]);
//     printf("*(arr + 4) = %d\n",*( arr +2 ));
//     printf("ptr[4] = %d\n", ptr[4]);
//     printf("*(ptr + 4) = %d\n", (ptr +2) );


//     return 0;

// }


// dvumeren masiv


// #include <stdio.h>
// int main (){
//     int arr [2][3];
//     int i,j;

//     for (i= 0;i<2; i++ ){
//         for (j=0; j<3; j++){
//             printf("Въведете елементи за матрицата: ");
//             scanf("%d", &arr[i][j]);
//         }
//     }


//     for (i= 0;i<2; i++ ){
//         for (j=0; j<3; j++){
//             printf("%d ", arr[i][j]);
           
//         }
//         printf("\n");
//     }


// }

#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;

int main (){
int temperature[CITY][WEEK];
    
    for (int i = 0; i < CITY; ++i) {
        for (int j = 0; j < WEEK; ++j) {
            printf("City %d, Day %d",i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    
    for (int i = 0; i < CITY; ++i) {
        for (int j = 0; j < WEEK; ++j) {
            printf("City %d, Day %d = %d\n",i+1, j+1, temperature[i][j]);
        }
    }   

}




//primer 1

#include <stdio.h>
int main (){
int arr1[2][2];
int arr2[2][2];
    
    printf("First 2D\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Second 2D\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    printf("The arrays\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    printf("Subrah masivite\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

}







