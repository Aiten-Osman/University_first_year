//zad1 

#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n;
    printf("Vuvedete n gosti:\n ");
    scanf("%d",&n);

    int stolove = n;
    int masi = (int)ceil(n/8);
    int chashi = (int)ceil(n/6);
    int chinii = (int)ceil(n/6);

    int kupeni_stolove=0;
    int kupeni_masi= 0;
    int kupeni_chashi=0;
    int kupeni_chinii= 0;

    char command [20];
    printf("Vuvedi kakvo si kupil do sega: Stolove, Masi, Chashi, Chinii \n");

    while (1){
        scanf("%s",command);

        if(strcmp(command, "PARTY!")==0){
            break;
        }

        if(strcmp( command, "Stolove")==0){
            kupeni_stolove++;

        }

        else if(strcmp(command, "Masi")==0){
            kupeni_masi++;
            
        }       

        else if(strcmp(command, "Chashi")==0){
            kupeni_chashi++;
            
        }     

        else if(strcmp( command, "Chinii")==0){
            kupeni_chinii++;
            
        }       

    }

    double poharcheni_pari = (kupeni_stolove * 13.99) +
                            (kupeni_masi * 42.00) +
                            (kupeni_chashi * 5.98) +
                            (kupeni_chinii * 21.02);


    printf ("Poharchenite pari sa %.2f\n", poharcheni_pari);

    if (kupeni_stolove < stolove){
        printf("Trqbvat oshte %d stolove \n", stolove - kupeni_stolove);
    }

    if (kupeni_masi < masi){
        printf("Trqbvat oshte %d masi \n", masi - kupeni_masi);
    }

    if (kupeni_chashi < chashi){
        printf("Trqbvat oshte %d chinii \n", chashi - kupeni_chashi);
    }

    if (kupeni_chinii < chinii){
        printf("Trqbvat oshte %d chinii", chinii - kupeni_chinii);
    }

}


//zad 2 на изпита също ще има само динамични масиви + 7ма задача задължително
#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    double price;
    int num_product;
};

struct Order {
    char addres[100];
    int id;
};


int main(){
    struct Product products[100];
    struct Order chakashti_producti[100];

    char command [20];
    printf("Vuvedi comanda Product, Order or END");
    while (1)
    {
        scanf("%s", command);

        if(strcmp(command, "END")==0){
            break;
        }

        if(strcmp(command, "Product")==0){
        struct Product p;
        scanf("%s %lf %d", p.name, &p.price, &p.num_product);
        }

        else if(strcmp(command, "Order")==0){
        struct Order o;
        scanf("%s %d", o.name, &o.id);
        }
    }
    return 0;
}


//zad 4
#include <stdio.h>

int main() {
    char filename[100];
    int key;
    char ch;

    printf("Vuvedete ime na faila, koito iskate da kodirate: ");
    scanf("%s", filename);

    printf("Vuvedete kluch (chislo mejdu 2 i 10): ");
    scanf("%d", &key);

    FILE *src = fopen(filename, "r");
    FILE *dest = fopen("kodiran", "w");

    if (src == NULL) {
        printf("Error opening file.\n");
        exit (1);
    }

    while (1) {
        ch = fgetc(src);      
        if (ch == EOF) break;
        char encodedCh = ch + key;
        fputc(encodedCh, dest);
    }
    fclose(src);
    fclose(dest);

    printf("Gotovo! Kodiraniyat tekst e zapisan v encoded.txt\n");

    return 0;
}


//zad 7
struct Employee {
    int id;
    double pochasovo_plashtane;
    int otraboteni_chasove;
    double zaplata;
};


int main(){
    int n;
    printf("Vuvedoi broi sutrudnici:\n");
    scanf("%d", &n);
    if(n>30){
        break;
    }
    

    FILE *p = fopen();
    if 

}



