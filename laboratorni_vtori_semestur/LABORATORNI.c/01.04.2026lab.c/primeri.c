// 6to laboratorno 
//izpit - rabota s masivi, ukazateli i failove 


// masiv  - posledovatelno zapazvane na edin ili poveche elementa ot edin i susht tip danni

// dinamichni masivi - masivi, koito se suzdavat po vreme na izpalnenie 
//na programata i mogat da promenqt razmera si

// izpolzvame za optimizaciq na zaemanoto pametno prostranstvo, 
//kogato ne znaem kolko elementa shte ni trqbvat  

// funkciite se namirat v biblioteki, koito sa kolekcii ot gotovi funkcii, koito mogat da se izpolzvat
// v nashite programi
// za da izpolzvame funkciite ot biblioteka, trqbva da vkluchim 
//saotvetnata glava (header) na biblioteka, koqto sadrji tezi funkcii     
//#include <stdio.h> // biblioteka za vhod i izhod
//#include <stdlib.h> // biblioteka za dinamichno razpredelqne na pamet
//#include <stdlib.h> // biblioteka za rabota s failove

// void *malloc(unsigned nbytes) - funkciq, koqto rezervira blok pamet s opredelen razmer i vrushta ukazatel kum nego
//zadelq pamet za edin element ot opredelen tip danni, koito se izpolzva za dinamichni masivi

// void *calloc (unsigned nmemb, unsigned size) - funkciq, koqto rezervira blok pamet za masiv ot elementa s opredelen razmer i broi elementa, i go inicializira na nula
// void *realloc(void *ptr, size_t size) - funkciq, koqto promenq razmera na blok pamet, rezerviran s malloc ili calloc, i vrushta ukazatel kum noviq blok pamet, koito moje da e na nova lokaciq   
// kopira dannite ot stariqa blok pamet kum noviq, ako e neobhodimo, i osvobojdava stariq blok pamet
// void free(void *ptr) - funkciq, koqto osvobojdava blok pamet, rezerviran s malloc, calloc ili realloc 

// malloc = callov  kato sintakcis malloc e nai ulesnen



// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int i =7; // gari
//     int n; // relsi
//     int *stations = (int*)malloc(i * sizeof(int)); // rezervirame pamet za masiv ot 7 elementa ot tip int
    
//     if (stations == NULL) {
//         exit(1); // proverqvame dali malloc e uspql
//     }

// for (int n = 0; n < i; n++) {
//     stations[n] = n; // inicializirame elementite na masiva s stoinosti ot 1 do 7
// }

// for (n=0; n < i; n++) {
//     printf("%d ", stations[n]); // izvejdame elementite na masiva   
//     printf("\n");
// }

// int *ptrTostations;
// ptrTostations = stations; // suzdavame promenliva, koqto shte drji stoinostta na purviq element ot masiva
// stations = (int*)realloc(stations, ++i * sizeof(int)); // preorazmerqvame/ promenqme razmera na masiva, za da dobavim oshte edin element

// for (n=0; n < 7; n++) { 
// stations[n] = ptrTostations[n];
// stations[i-1] = i; 
// }

// for (n=0; n < 7; n++) {
//     printf("%d ", stations[n]); // izvejdame elementite na masiva   
//     printf("\n");
// }


// }



// #include <stdio.h>
// #include <stdlib.h>
// int main(){

//     int i;
//     double* p;
//     p = calloc(10, sizeof(double)); // rezervirame pamet za masiv ot 10 elementa ot tip double i go inicializirame na nula

// for ( i = 0; i < 10; i++) {
//     * (p+i) = i; // inicializirame elementite na masiva s stoinosti ot 0 do 9, kato izpolzvame ukazateli
// }
// for ( i = 0; i < 10; i++) {
//     printf("*(p + %d) = %lf\n", i, *(p+i)); // izvejdame elementite na masiva, kato izpolzvame ukazateli

// }

//     free(p); // osvobojdavame pametta, rezervirana za masiva
//     printf("\n");


// for ( i = 0; i < 4; i++) {
//     * (p+i) = i; // inicializirame elementite na masiva s stoinosti ot 0 do 9, kato izpolzvame ukazateli
// }
// for ( i = 0; i < 4; i++) {
//     printf("*(p + %d) = %lf\n", i, *(p+i)); // izvejdame elementite na masiva, kato izpolzvame ukazateli

// }
// }



// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int r = 3,c=4,i,j,count;
//     int** arr = (int**)malloc(r * sizeof(int*)); // rezervirame pamet za masiv ot ukazateli kum redovete na matricata
//     for (i = 0; i < r; i++) {
//         arr[i] = (int*)malloc(c * sizeof(int)); // rezervirame pamet za masiv ot int elementa za vseki red na matricata
//     }

//     count = 0;
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             arr[i][j] = ++count; // or *(arr[i] + j) = ++count; 
//             // inicializirame elementite na matricata s stoinosti ot 0 do 11
//         }
//     }
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             printf("%d ", arr[i][j]); // izvejdame elementite na matricata
//         }
//         printf("\n");
//     }   

// }




#include <stdio.h>
#include <stdlib.h>

int main() {
    int p;
    int q;
    double *arr;
    double sum = 0;

    printf("Vavedi broi p: ");
    scanf("%d", &p);

    arr = (double*)malloc(p * sizeof(double));
    if(arr == NULL) {
       exit(1); 
    }

    printf("Vavedi %d chisla:\n", p);
    for(int i = 0; i < p; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    printf("Purva suma: %.2lf\n", sum);

    printf("Vavedi broi q: ");
    scanf("%d", &q);

    arr = (double*)realloc(arr, (p + q) * sizeof(double));
    if(arr == NULL) {
         exit(1); 
    }


    printf("Vavedi oshte %d chisla:\n", q);
    for(int i = p; i < p + q; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    int n = p + q;


    printf("Novata suma: %.2lf\n", sum);

    double max_element = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_element) {
            max_element = arr[i];
        }
    }
for (int i = 0; i < n; i++) {
    printf("%.2lf ", arr[i]);
}
    printf("\nMaksimalen element: %.2lf\n", max_element);

}



