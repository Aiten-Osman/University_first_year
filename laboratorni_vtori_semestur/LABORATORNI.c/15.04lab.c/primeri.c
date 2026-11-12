
//структури и масивни структури
// групиране/съвкупност от различен тип данни, които са логически свързани и служат 
//за описание на обекти от реалния свят


//структура от данни е различно 


//синтактис на структурата -> дефиницията на структурата е над мейна 
//struct <име на структурата> {    -> дефинираме 
//    <тип данни> <име на член>;
//    <тип данни> <име на член>;}

// struct Books{
//     char title[40]; -> член на структурата, низ от символи, който може да съхранява до 39 символа + терминален символ;
//задължително трябва да сложим размер на масива, за да знаем колко памет да заделим за този член на структурата
//     char author[20]; -> член на структурата, низ от символи
//     char tema[30]; -> член на структурата, низ от символи
//     int id_book; -> член на структурата, цяло число
// };




// в мейна създаваме променлива от тип структура и я инициализираме
// struct Books book1; -> създаваме променлива от тип структура, book1 е обект от структурата тип Books
// strcpy(book1.title, "The Great Gatsby"); -> инициализираме члена title на структурата book1 със стойност "The Great Gatsby"
// за да използваме функциите трябва да включим библиотеката string.h, която съдържа функцията strcpy за копиране на низове от символи  


// #include <stdio.h>
// #include <string.h>


// struct Books{
//     char title[40];
//     char author[20];
//     int id_book;
// };


// int main(){
//     struct Books book1;
//     struct Books book2;

//     strcpy(book1.title, "The Great Gatsby"); // book1.title = "The Great Gatsby"; -> не може да се използва директно, защото title е масив от символи, а не указател към низ        
//     strcpy(book1.author, "F. Scott Fitzgerald");
//     book1.id_book= 12345;

//     strcpy(book2.title, "To Kill a Mockingbird");
//     strcpy(book2.author, "Harper Lee");
//     book2.id_book= 67890;

//     printf("Book 1:\nTitle: %s\nAuthor: %s\nID: %d\n\n", book1.title, book1.author, book1.id_book); // използваме %s за низове и %d за цяло число, за да отпечатаме стойностите на членовете на структурата book1
//     printf("Book 2:\nTitle: %s\nAuthor: %s\nID: %d\n", book2.title, book2.author, book2.id_book);

//     return 0;


// }




// функция за извикване на указател към структурата
// #include <stdio.h>
// #include <string.h>

// struct Books{
//     char title[40];
//     char author[20];
//     int id_book;
// };

// void printBook(struct Books *book){ // функция, която приема указател към структурата Books
//     printf("Title: %s\nAuthor: %s\nID: %d\n", book->title, book->author, book->id_book); // използваме оператора -> за достъп до членовете на структурата чрез указателя
// }


// int main(){
//     struct Books book1;
//     struct Books book2;
    

//     strcpy(book1.title, "The Great Gatsby"); // book1.title = "The Great Gatsby"; -> не може да се използва директно, защото title е масив от символи, а не указател към низ        
//     strcpy(book1.author, "F. Scott Fitzgerald");
//     book1.id_book= 12345;


//     strcpy(book2.title, "To Kill a Mockingbird");
//     strcpy(book2.author, "Harper Lee");
//     book2.id_book= 67890;

//     printBook(&book1); // извикваме функцията printBook и подаваме адреса на структурата book1 като аргумент
//     printBook(&book2); // извикваме функцията printBook и подаваме адреса на структурата book2 като аргумент
//     return 0;


// }


//typedef struct Books{ -> използваме typedef, за да създадем псевдоним за структурата Books, така че да не се налага да пишем struct всеки път, когато декларираме променлива от този тип
//    char title[40];
//    char author[20];
//} books; -> създаваме псевдоним books за структурата, така че можем да използваме books вместо struct books при деклариране на променливи от този тип

// #include <stdio.h>
// #include <string.h>

// typedef struct Person{
//     char name[50];
//     int citNo;
//     float salary;
// } person;


// int main (){

//     person p1; // декларираме променлива p1 от тип person, който е псевдоним за структурата Person
//     person p2; // декларираме променлива p2 от тип person

//     strcpy(p1.name, "John Doe"); // инициализираме члена name на структурата p1 със стойност "John Doe"
//     p1.citNo = 123456789; // инициализираме члена citNo на структурата p1 със стойност 123456789
//     p1.salary = 50000.0; // инициализираме члена salary на структурата p1 със стойност 50000.0

//     strcpy(p2.name, "Jane Smith"); // инициализираме члена name на структурата p2 със стойност "Jane Smith"
//     p2.citNo = 987654321; // инициализираме члена citNo на структурата p2 със стойност 987654321
//     p2.salary = 60000.0; // инициализираме члена salary на структурата p2 със стойност 60000.0

//     printf("Person 1:\nName: %s\nCitizen Number: %d\nSalary: %.2f\n\n", p1.name, p1.citNo, p1.salary); // отпечатваме стойностите на членовете на структурата p1
//     printf("Person 2:\nName: %s\nCitizen Number: %d\nSalary: %.2f\n", p2.name, p2.citNo, p2.salary); // отпечатваме стойностите на членовете на структурата p2

//     return 0;
// }






//вложена структура -> структура, която съдържа друга структура като член

// #include <stdio.h>
// #include <string.h>
// struct complecs
// {
//     int imag;
//     int real;
// };

// struct number
// {
//     int integer;
// };  num1;num2;





// масив от структура -> масив, чиито елементи са от тип структура
// събиране и изваждане няма как да се извърши директно върху структури, затова трябва да създадем функции, които да извършват тези операции върху членовете на структурите




//zad2
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char model[20];
    int year;
}; Vehicle; 
typedef struct Transport {
    Vehicle car;
    Vehicle plane;
    Vehicle motor;

}; TypeTransport;

int main() {
    TypeTransport myTransport; 
    strcpy(myTransport.car.name, "Toyota");
    strcpy(myTransport.car.model, "Corolla");
    myTransport.car.year = 2020;

    strcpy(myTransport.plane.name, "Plane1");
    strcpy(myTransport.plane.model, "Basick");
    myTransport.plane.year = 2015;

    strcpy(myTransport.motor.name, "BMW");
    strcpy(myTransport.motor.model, "3");
    myTransport.motor.year = 2019;

    printf("Car:\nName: %s\nModel: %s\nYear: %d\n\n", myTransport.car.name, myTransport.car.model, myTransport.car.year);
    printf("Plane:\nName: %s\nModel: %s\nYear: %d\n\n", myTransport.plane.name, myTransport.plane.model, myTransport.plane.year);
    printf("Motorcycle:\nName: %s\nModel: %s\nYear: %d\n\n", myTransport.motor.name, myTransport.motor.model, myTransport.motor.year);
    printf("Boat:\nName: %s\nModel: %s\nYear: %d\n", myTransport.boat.name, myTransport.boat.model, myTransport.boat.year);

    return 0;
}




//zad1 
#include <stdio.h>

struct Point {
    int x;
    int y;
    int z;
};

int main() {
    struct Point p1;
    struct Point p2;
    struct Point p3;

    p1.x = 3;
    p1.y = 4;
    p1.z = 5;


    p2.x = 5;
    p2.y = 6;
    p2.z = 7;

    p3.x = 7;
    p3.y = 8;
    p3.z = 9;

    return 0;
}
