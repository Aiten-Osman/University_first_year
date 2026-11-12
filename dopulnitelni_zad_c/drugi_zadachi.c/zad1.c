// #include <stdio.h>
// #include <stdbool.h>

// когато имаме int main () - това е функцията main, която е входната точка на програмата,
//завършваме с return 0; което означава, 
//че програмата е изпълнена успешно и връща стойност 0 на операционната система.

// a когато е int void не ни трябва return 0; защото void означава, че функцията не връща стойност,
// и може да завърши просто с } без return израз



/*  
 int = whole number (integer) 4 bytes / 8 bytes
 char = single character 1 byte
 float = single precision decimal number 4 bytes 
 double = double precision decimal number 8 bytes
 char [] = array of characters (string) size depends on the number of characters + 1 for null terminator
 bool = boolean value (true or false) 1 byte requires #include <stdbool.h>


 
    %p and %x izvejdat adresa
    %d - means decimal (integer)
    %5d - means decimal with a width of 5 characters (right-aligned)
    %-5d - means decimal with a width of 5 characters (left-aligned)
    %05d - means decimal with a width of 5 characters, padded with zeros
    %f - float
    %.2f - float with 2 digits after the decimal point
    %+7.2f - float with 2 digits after the decimal point, padded with spaces on the left, and a sign (+ or -)
    %lf - long float (double)
    %c - char
    %s - string (char array)
    %p - adres 
    %p - pointer address
    %lu - unsigned long integer

   !!! V ezika C nqmame stringove promenlivi, a imame char masivi, koito sa nizove ot simvoli !!!

    %.2lf - 2 digits after the decimal point
    /n - new line
    // - single line comment
    /*   - multi line comment
    'A' - CHAR literal
    "Hello" - STRING literal    

*/
//int main (){
   /*  purvi vid variables 
    int age = 25;
    int years = 2025;
    printf("I'm %d years old \n", age  );
    printf("The year is %d\n",years);
*/

/* vtori vid variables
    float gpa = 3.75;
    printf("My GPA is %f\n", gpa);
*/

/* treti vid variables
    double pi = 3.14159265358979323846;
    printf("The value of pi is %.20lf\n", pi);
*/
 
/* chetvarti vid variables
    char grade = 'A';   
    printf("My grade is %c\n", grade);
*/

/*
    char name[] = "Alice"; // char array (string)
    printf("My name is %s\n", name);
*/

 
/* peti vid variables 
    bool isonline = 0; // boolean variable
    
    if (isonline) {
        printf("The user is online.");
    } 
    else {
        printf("The user is offline.");
    }

// */
//     int age;
//     char name[50]; // char array to hold the name (string) with a maximum size of 50 characters

//     printf("Enter your age: ");
//     scanf("%d", &age); // read an integer input into age variable

//     printf("Enter your name: ");
//     scanf("%s", name); // read a string input into name variable
//     fgets(name, sizeof(name), stdin); // read a string input with spaces into name variable
//     // (1 chas ot bro code)
    

//     printf("%d\n", age);
//     printf("%s\n", name);
//     return 0; 
// }


// // 1.07min ot bro code

// #include <string.h> // za da polzvame funkcijata fgets; functions related to strings 
// item[strlen(item) - 1] = '\0'; // za da mahna new line karaktera, 
// koito se dobavq ot fgets, kato zamenqme posledniq simvol s null terminator

//fgets izpolzva se za chetene na stringove s prazni mesta, 
//dokato scanf se izpolzva za chetene na stringove bez prazni mesta (do pyrviq space)


// sizeof(name) - vrushta razmera na masiva name, koeto e 50 v tozi sluchay,
// taka che fgets shte chete do 49 simvola i shte ostavi posledniq simvol za null terminator, 
//koito oznachava kraq na stringa i e vajno da se ostavi tova mesto za da ne se poluchi 
//buffer overflow,
// koeto e situaciq, pri koyato se zapisva izvun granicite na masiva,
// koeto moze da dovede do nepredvideni posledstviq, kato prepisvane na danni 
//v sushtata pametna lokaciq, koeto moze da dovede do korupciq na danni ili 
//dori do krasvane na programata  


//stdin - standard input (obiknoveno klaviaturata)
//fgets(name, sizeof(name), stdin); // read a string input with spaces into name variable
// noun[strlen(noun) - 1] = '\0'; // za da mahna new line karaktera,
// koito se dobavq ot fgets, kato zamenqme posledniq simvol s null terminator


//stdout - standard output (obiknoveno ekrana)


// math functions in C require #include <math.h> and link with -lm flag when compiling
// sqrt(x) - square root of x, toest sqrt(16) e 4
// pow(x, y) - x raised to the power of y, toest 2 na 3 e pow(2, 3)
// round(x) - rounds x to the nearest integer, toest round(3.6) e 4, a round(3.4) e 3
// ceil(x) - rounds x up to the nearest integer, toest ceil(3.2) e 4
// floor(x) - rounds x down to the nearest integer, toest floor(3.8) e 3
// abs(x) - absolute value of x, toest abs(-5) e 5
// log(x) - natural logarithm of x, toest log(2.71828) e 1
// sin(x) - sine of x (x in radians), toest sin(3.14159/2) e 1
// cos(x) - cosine of x (x in radians), toest cos(0) e 1
// tan(x) - tangent of x (x in radians), toest tan(0) e 0

// char operator = '\0'; toest char operator = 0; - oznachava kraq na stringa,
// i e vajno da se ostavi tova mesto za da ne se poluchi buffer overflow,
// koeto e situaciq, pri koyato se zapisva izvun granicite na masiva,
// koeto moze da dovede do nepredvideni posledstviq,
// kato prepisvane na danni v sushtata pametna lokaciq,
// koeto moze da dovede do korupciq na danni ili dori do krasvane na programata   


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


