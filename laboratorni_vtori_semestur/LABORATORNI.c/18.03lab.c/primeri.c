    //ednomeren masiv i nizove

    // masiv -> suvkupnost ot promenlivi ot edin i susht tip / structura v koqto se suhranqvat
    // posledovatelnost ot danni, koito sa suhraneni na opredeleno mqsto s opredelen razmer. Trqbva 

    //indeksirane-> zapochva ot 0, opredelenoto mqsto na elementa 
    // indeksa opredelq kude e elementa 


    // ukazatelq sochi adresa na masiva

    // #include <stdio.h>
    // int main(){
    //     int arr [10];
    //     for (int i = 1 ; i <= 10; i++){
    //         arr [i - 1] = 2 * i;

    //     }

    //     for (int i = 0;i < 10; i ++){
    //         printf("Elementite arr[]= %d\n",i, arr[i]);

    //     }
    // }


    // #include <stdio.h>
    // int main (){
    //     int arr[5],i;
    //     printf("Size of integer in this compiler is %lu\n",sizeof(int));

    //     for (i = 0; i<5; i++)
    //     printf("Address arr[%d]is %p\n",i,&arr[i]);

    // }




    // niz ->suvkupnost ot simvoli,  posledovatelen masiv / ednomeren masiv ot tip char 


    //
    //char str [5];   declraciqta 
    //char str1 [] = {'k', 's','I'};    inicializaciq
    //char str2[4] = "KSI";     inicializaciq 


    // #include <stdio.h>
    // int main (){
    //     char greeting [6] = {'A', 'y', 't', 'e','n','\0'};
    //     printf("Greeting message: %s\n",greeting);
    //     return 0;
    // }


    // #include <stdio.h>
    // int main (){
    //     char name [20];
    //     printf("Enter name: ");
    //     scanf("%s",name);
    //     printf("Your name is %s.", name );
    //     return 0;

    // }

    // \0 krai na niz


    // #include <stdio.h>
    // int main (){
    //     char name [30];
    //     printf("Enter name: ");
    //     fgets(name,sizeof(name), stdin);
    //     printf("Name:");
    //     puts (name);
    //     return 0 ;
    // }


    //potrebitelski funkcii= koito nie gi declarirame


    // #include <stdio.h>
    // void displayString(char str[]);
    // int main (){

    //     char str [50];
    //     printf("Enter string: ");
    //     fgets(str, sizeof(str),stdin);
    //     displayString(str);
    //     return 0;
    // }
    // void displayString(char str[])
    // {
    // printf("String output: ");
    // puts(str);

    // }




    // #include <stdio.h>
    // int main() {
    //     char name[] = "Harry Potter";
    //     printf("%c", *(name));
    //     printf("%c", *(name+1));
    //     printf("%c", *(name+7));

    //     char *namePtr = name;
    //     printf("%c\n", *(namePtr));
    //     printf("%c\n", *(namePtr+1));
    //     printf("%c\n", *(namePtr+7));
    // }


    // #include <stdio.h>
    // int main() {
    //     char name[] = "Harry Potter";
    //     printf("%c", *(name));
    //     printf("%c", *(name+1));
    //     printf("%c", *(name+7));

    //     char *namePtr = name;
    //     printf("%p\n", *(namePtr));
    //     printf("%p\n", *(namePtr+1));
    //     printf("%p\n", *(namePtr+7));
    // }








