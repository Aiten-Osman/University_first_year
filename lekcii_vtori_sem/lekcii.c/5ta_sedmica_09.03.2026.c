
/*
указател = масив 
указатели 
int x = 5;
int *p = &x; със звезда казваме, че p е УКАЗАТЕЛ към цяло число


p                          x
200 стойност               5 стойност
400 адрес                  200 адрес 

& дава адрес
* винаги връща стойност 
*p -> 5
p -> 200
&p -> 400

*p++ -> 6
p++ ->
&p++ ->

int nums [10];
int *p = nums;
printf("%d,nums")



*/





// #include <stdio.h>
// void func(int *x)
// {
//     (*x)++; // dava stoinostta na x da se uveli4i s 1
//     printf("%d\n", *x);
// }


// int main (){
// int x = 5;
// int *p = &x;
// *p++; // dava garbage stoinost (adres + 1)
// //(*p)++; // dava stoinostta na x da se uveli4i s 1

// printf("%d", *p);

// }

/*
#include <stdio.h>
int main (){
    //int arr [] = {1, 2, 3, 4, 5};
    int arr2[5];    
    scanf("%d", &arr2[0]);


    //printf("%d\n", arr); // adres na purviq element na masiva
    //printf("%d\n", &arr); // adres na masiva (koeto e sushtiq adres kato na purviq element)
    // името е адрес на първия елемент на масива, а &името е адрес на масива,
    // който е същия адрес като на първия елемент (по този начин не се принтира ппц)
    printf("%d\n", arr2[0]);


}
*/

#include <stdio.h>
int main (){
    // //int arr [] = {1, 2, 3, 4, 5};
    // int arr2[5];
    // int len = sizeof(arr2)/sizeof(int);
    // for (int i = 0; i < len; i++){
    //     scanf("%d", &arr2[i]);
    // }

    char name[] = "Ivan";
    printf(name);
    char newName[10];

    // newName = name; // ne mojem da prenasqm masiv kato stoinost, taka se pravi s ukazatel

    int check = strcmp(newName, name); // sravnqva stoinostta na name i newName, vrushta 0 ako sa ednakvi, -1 ako name e po malko ot newName, 1 ako name e po golqmo ot newName
    strcpy(newName, name); // kopira stoinostta na name v newName
    //printf(newName);
    printf("%d", check);

}


