//zad1
#include <stdio.h>

int main() {
    int numbers[7];
    int sum = 0;
    
    printf("Enter 7 integers from the interval [-300..300]:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i]>=-300 && numbers [i]<=300){
        sum = sum + numbers[i];
        }
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}




//zad2
#include <stdio.h>

int main() {
    int numbers[7];
    int max = -10000000;
    
    printf("Enter 7 integers from the interval [-300..300]:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i]>=-300 && numbers [i]<=300){
            if (i == 0 || numbers[i] > max) {
            max = numbers[i];
        }
    }
    }
    
    printf("Largest number: %d\n", max);
    return 0;
}



 //zad3
#include <stdio.h>

int main() {
    int numbers[7];
    int sum = 0;
    double average;
    int counter = 0;
    
    printf("Enter 7 integers from the interval [-300..300]:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i]>=-300 && numbers[i]<=300){
        sum += numbers[i];
        counter +=1;}
    }
    
    average = (double)sum / counter;
    printf("Average value: %.2f\n", average);
    return 0;
}



//zad4
#include <stdio.h>

int main() {
    int numbers[7];
    int sum = 0;
    double average;
    
    
    printf("Enter 7 integers from the interval [-300..300]:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
         
    }
    average = (double)sum / 7;
    printf("Average value: %.3f\n", average);
    difference = length text = 
    return 0;
}




//zad1
#include <stdio.h>

int main() {
    char text[100];
    int length = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    for (length = 0; text[length]; length++) {
        length++;
    }
    
    if (length > 0 && text[length - 1] == '\n') {
        length--;
    }
    
    printf("String length: %d\n", length);
    
    return 0;
}




//zad2
#include <stdio.h>

int main() {
    char text[200];
    int count = 0;
    int inWord = 0;
    
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ' || text[i] == '\n') {
            inWord = 0;  
        }
        else if (inWord == 0) {
            inWord = 1;  
            count++;     
        }
    }
    
    if (count > 0 && text[0] == '\n') {
        count = 0;
    }
    
    printf("Number of words: %d\n", count);
    
    return 0;
}



//zad3
#include<stdio.h>
int main(){
    char[]= 


}


