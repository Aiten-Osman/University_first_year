// funkcii s ezika C
// suvkupnost ot algoritmi

//<tip><ime>(spisuk form operatori)
//         operatori
//         return

// razlichni tipove ot void -> int, double, float

//int r = ime opr (facticheski parametur)
// void   ime par 



// double Prod (double x, double y){

    // duoble r;
    // r = x+y;
    // return r;

//}


// void main (){ -> tva vse edno e int main

    // double r = prod (a,b);
    // printf(%f,r);


//}



//declaraciq -> definiciqta stoi pod main ## Bro Code 3.05.00 prototype 



//definiciq na funcciq -> zadelqme pamet i kazvame kakvo shte se zapazi tam 

// #include <stdio.h>
// double Prod (double a, double b); // declaraciq/ prototip tuk zavurshvame s ; , a pri definiciq NQMA

// int main(){ // facticheski parametri
//     double a;
//     double b;
//     printf("Enter a: ");
//     scanf("%lf", &a);
//     printf("Enter b: ");
//     scanf("%lf", &b);
//     double r = Prod(a,b);
//     printf("%.2lf",r);
//     return 0;

// }
// double Prod (double x, double y){ // formalni / obshti parametri

//     double r;
//     r = x * y;
//     return r;
// }



// funciq lice na krug
# include <stdio.h>
void area (double r){
    double area= 3.14 * r * r;
    printf("Liceto e %.2lf",area);
    
}
int main(){
    double x;
    printf("Enter x =: ");
    scanf("%lf",&x);
    area(x);
    return 0;

}


// za po golemi chisla

#include <stdio.h>
int max (int, int); // declaraciq na funkciq

void main(){      // pri void ne polzvame return 
int x = 4, y = 5;  // x i y facticheski parametri
printf("%d",max(x,y));


}

int max (int num1, int num2){ // num1 i num2 formalni parametri
    int result;
    if(num1>num2){
        result= num1;             // cqloto napisano e definiciq
    }
    else{
        result = num2;
    }
    return result;

}




