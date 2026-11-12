// // За разлика от класовете, в структурата няма методи 
// // класът е структура с методи 

// # include <stdio.h>
// typedef struct
// {
//     char name[20];
//     char fac_num [20];
//     int group;
//     double grade;


// } Student;


// int main 
// {
//     Student student;
//     strcpy (Student.name, "Ivan");
//     Student.group = 58;
//     student.grade = 4.58;

// }

// typedef struct 
// {
//     char name[20];
//     char fac_num [20];
//     int group;
//     double grade;   
// }*p ;

// typedef struct
// {
//     char name[20];
//     char fac_num [20];
//     int group;
//     double grade;   
// }student[10] ;




# include <stdio.h>
int main()
{
    struct Student {
        char name [20];
        int age;
        char fac_num[11];
        double grade;

    struct Student student;

    strcpy (student.name, "Ivan");
    strcpy (student.fac_num, "121225209");
    student.age = 20;
    student.grade = 4.58;

    printf(student.name);
    printf("\n");
    printf(student.fac_num);
    printf("\n");
    printf("%d\n", student.age);
    printf("%.2lf\n", student.grade);
    
    }
    
}