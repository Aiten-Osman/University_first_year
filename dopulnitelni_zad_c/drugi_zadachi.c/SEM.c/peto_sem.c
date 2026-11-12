
//без 3, 5 и 6 7

//zad 1 
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    printf("Vuvedete broi gosti: ");
    scanf("%d", &n);

    int nujni_masi = (int)ceil(n / 8.0);
    int nujni_stolove = n;
    int nujni_komplekti_chashi = (int)ceil(n / 6.0);
    int nujni_komplekti_chinii = (int)ceil(n / 6.0);

    int kupeni_masi = 0;
    int kupeni_stolove = 0;
    int kupeni_chashi = 0;
    int kupeni_chinii = 0;

    char command[20];
    printf("Enter items (Chair, Table, Cups, Dishes) or 'PARTY!':\n");
    
    while (1) {
        scanf("%s", command); 
        
        if (strcmp(command, "PARTY!") == 0) 
        {
        break;
        }
        
        if (strcmp(command, "Table") == 0)
        {
        kupeni_masi++;
        }
        else if (strcmp(command, "Chair") == 0)
        {
            kupeni_stolove++;
        } 
        else if (strcmp(command, "Cups") == 0)
        {
            kupeni_chashi++;
        }
        else if (strcmp(command, "Dishes") == 0)
        { 
            kupeni_chinii++;
        }
    }

    double total_cost = (kupeni_masi * 42.00) + 
                        (kupeni_stolove * 13.99) + 
                        (kupeni_chashi * 5.98) + 
                        (kupeni_chinii * 21.02);

    printf("\nTotal cost: %.2f lv.\n", total_cost);
    
    
    printf("Nujni neshta:\n");
    if (kupeni_masi < nujni_masi) 
        printf("%d Table(s)\n", nujni_masi - kupeni_masi);
    
    if (kupeni_stolove < nujni_stolove) 
        printf("%d Chair(s)\n", nujni_stolove - kupeni_stolove);
    
    if (kupeni_chashi < nujni_komplekti_chashi) 
        printf("%d set(s) of Cups\n", nujni_komplekti_chashi - kupeni_chashi);
    
    if (kupeni_chinii < nujni_komplekti_chinii) 
        printf("%d set(s) of Dishes\n", nujni_komplekti_chinii - kupeni_chinii);

    return 0;
}


//zad 2
#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    double price;
    int id;
};

struct Order {
    char address[100];
    int product_id;
};

int main() {
    struct Product products[100];
    struct Order waiting_orders[100];

    int product_count = 0;     
    int waiting_order_count = 0; 
    char command[20];

    printf("Enter commands (Product, Order, END):\n");

    while (1) 
    {
        scanf("%s", command);

        if (strcmp(command, "END") == 0) {
            break;
        }

        if (strcmp(command, "Product") == 0) {
            struct Product p;
            scanf("%s %lf %d", p.name, &p.price, &p.id);}
            
            products[product_count] = p;
            product_count++;

        else if (strcmp(command, "Order") == 0) {
            struct Order o;
            scanf("%s %d", o.address, &o.product_id);
        }
    }

    return 0;
}


//zad 3 
#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *binOut = fopen("result.bin", "wb");
    
    if (in == NULL) {
        printf("Greshka: Failut input.txt ne moje da bude otvoren!\n");
        return 1;
    }

    char currentWord[51];
    char lastWord[51];
    char space = ' ';
    int first = 1;

    while (1) {
    int rezultat;
    rezultat = fscanf(in, "%50s", currentWord);
    if (rezultat != 1) {
        break; 
    }
}
        if (first) {
            fwrite(currentWord, sizeof(char), strlen(currentWord), binOut);
            fwrite(&space, sizeof(char), 1, binOut);
            
            strcpy(lastWord, currentWord);
            first = 0;
        } 
    

    fclose(in);
    fclose(binOut);

    printf("Suderjanie na binarniya fail:\n");
    binOut = fopen("result.bin", "rb");
    
    printf("\n");
    return 0;
}



// zad4 
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
    FILE *dest = fopen("encoded.txt", "w");

    if (src == NULL) {
        printf("Greshka: Failut '%s' ne beshe nameren!\n", filename);
        return 1;
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
#include <stdio.h>
void dobavi_zapis() {
    FILE *f_check = fopen("firma.bin", "rb");
    int broi = 0;
    struct Sutrudnik temp;

    if (f_check != NULL) {
        while (fread(&temp, sizeof(struct Sutrudnik), 1, f_check) == 1) {
            broi++;
        }
        fclose(f_check);
    }

    if (broi >= 30) {
        printf("\nSTOP! Dostignat e maksimalniyat broi ot 30 sutrudnika.\n");
        printf("Ne moje da dobavyate poveche zapisi.\n");
        return; 
    }

    FILE *f = fopen("firma.bin", "ab");
    struct Sutrudnik s;

    printf("\n--- Dobavyane na sutrudnik ---\n");
    printf("Vuvedete ID nomer: ");
    scanf("%d", &s.id);
    printf("Vuvedete zaplata na chas: ");
    scanf("%f", &s.zaplata_chas);
    printf("Vuvedete otraboteni chasove za sedmicata: ");
    scanf("%f", &s.otraboteni_chasove);

    float bruto;
    if (s.otraboteni_chasove > 40) {
        bruto = (40 * s.zaplata_chas) + ((s.otraboteni_chasove - 40) * s.zaplata_chas * 1.5);
    } else {
        bruto = s.otraboteni_chasove * s.zaplata_chas;
    }

    s.sedmichna_zaplata = bruto - (bruto * 0.0365);

    // Zapisvame strukturata v binarniya fail
    fwrite(&s, sizeof(struct Sutrudnik), 1, f);
    fclose(f);
    printf("Zapisut beshe uspeshen!\n");
}

// Funktsiya za izvejdane na zaplatite na ekrana
void izvedi_zaplatite() {
    FILE *f = fopen("firma.bin", "rb"); 
    struct Sutrudnik s;

    if (f == NULL) {
        printf("\nFailut vse oshte ne sushtestvuva. Purvo dobavete zapis!\n");
        return;
    }

    printf("\n--- Sedmichni zaplati na sutrudnicite ---\n");
    // Chetem zapisi edin po edin dokato fread vrushta 1 (uspeh)
    while (fread(&s, sizeof(struct Sutrudnik), 1, f) == 1) {
        printf("ID: %d | Otraboteni chasove: %.2f | Chista zaplata: %.2f lv.\n", 
                s.id, s.otraboteni_chasove, s.sedmichna_zaplata);
    }
    fclose(f);
}

int main() {
    int izbor;

    while (1) {
        printf("\n********** MENYU **********\n");
        printf("1. Dobavi nov zapis\n");
        printf("2. Izvedi izchislenite zaplati\n");
        printf("3. Izxod\n");
        printf("Vashiyat izbor: ");
        scanf("%d", &izbor);

        if (izbor == 1) {
            dobavi_zapis();
        } else if (izbor == 2) {
            izvedi_zaplatite();
        } else if (izbor == 3) {
            printf("Dovijdane!\n");
            break; 
        } else {
            printf("Greshen izbor! Opitaite pak.\n");
        }
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// --- СТЪПКА 1: Дефиниране на структурата ---
// Това е нашият "шаблон". Всеки служител ще има тези 4 характеристики.
struct Employee 
{
    int id;              // Идентификационен номер
    double hourly_rate;  // Колко му се плаща на час
    double hours_worked; // Колко часа е работил
    double weekly_wage;  // Крайната заплата след изчисленията
};

// --- СТЪПКА 2: Функция за изчисляване на заплатата ---
// Разделяме я на два реда за по-добра видимост
double calculate_pay(
    double rate, double hours) 
{
    double gross_amount; // Сума преди данъци

    // Проверяваме за извънреден труд (над 40 часа)
    if (hours > 40) 
    {
        double regular_pay = 40 * rate;
        double overtime_hours = hours - 40;
        double overtime_pay = overtime_hours * (rate * 1.5); // 150% за извънредни
        gross_amount = regular_pay + overtime_pay;
    } 
    else 
    {
        gross_amount = hours * rate;
    }

    // Удържаме данък от 3.65%
    // 100% - 3.65% = 96.35% (или 0.9635)
    double net_amount = gross_amount * 0.9635;

    return net_amount;
}

// --- ГЛАВНА ФУНКЦИЯ ---
int main() 
{
    int choice;
    char filename[] = "employees.bin";

    // Безкраен цикъл за менюто
    while (1) 
    {
        printf("\n======= MENU =======\n");
        printf("1. Dobavyane na nov sutrudnik\n");
        printf("2. Izvejdane na zaplatite na ekrana\n");
        printf("3. Izhod\n");
        printf("Vashiyat izbor: ");
        
        scanf("%d", &choice);

        // --- ЛОГИКА ЗА ДОБАВЯНЕ (ОПЦИЯ 1) ---
        if (choice == 1) 
        {
            // Отваряме файла в режим "ab" (Append Binary - Добавяне в края)
            FILE *f = fopen(filename, "ab");

            // ПРОВЕРКА 1: Успешно ли е отворен файлът?
            if (f == NULL) 
            {
                printf("Greshka: Failut ne moje da bude otvoren!\n");
                continue;
            }

            struct Employee e; // Създаваме временна променлива (кутийка)

            printf("Vuvedete ID nomer: ");
            scanf("%d", &e.id);
            
            printf("Vuvedete zaplashtane na chas: ");
            scanf("%lf", &e.hourly_rate);
            
            printf("Vuvedete raboteni chasove za sedmicata: ");
            scanf("%lf", &e.hours_worked);

            // Изчисляваме заплатата чрез функцията и я записваме в структурата
            e.weekly_wage = calculate_pay(e.hourly_rate, e.hours_worked);

            // ЗАПИСВАНЕ: Записваме 1 брой от структурата
            size_t result = fwrite(&e, sizeof(struct Employee), 1, f);

            // ПРОВЕРКА 2: Успешен ли е самият запис?
            if (result == 1) 
            {
                printf("Zapisut e uspeshen!\n");
            } 
            else 
            {
                printf("Greshka pri zapisvane na dannite.\n");
            }

            fclose(f); // Затваряме файла
        }

        // --- ЛОГИКА ЗА ИЗВЕЖДАНЕ (ОПЦИЯ 2) ---
        else if (choice == 2) 
        {
            // Отваряме за четене в бинарен режим "rb"
            FILE *f = fopen(filename, "rb");

            // ПРОВЕРКА: Има ли файл?
            if (f == NULL) 
            {
                printf("Failut vse oshte ne sushtestvuva (nyama zapisi).\n");
                continue;
            }

            struct Employee e;
            printf("\n--- SPISUK NA SUTRUDNICITE ---\n");
            printf("ID\tChasove\tZaplata (lv.)\n");
            printf("------------------------------\n");

            // ЧЕТЕНЕ НА ВСИЧКИ ЗАПИСИ
            while (1) 
            {
                // Опитваме да прочетем една структура
                size_t count = fread(&e, sizeof(struct Employee), 1, f);

                // ПРОВЕРКА: Успешно ли прочетохме 1 запис?
                // Ако count не е 1, значи сме стигнали края на файла
                if (count != 1) 
                {
                    break; 
                }

                // Извеждаме данните на екрана
                printf("%d\t%.2f\t%.2f\n", e.id, e.hours_worked, e.weekly_wage);
            }

            fclose(f);
        }

        // --- ЛОГИКА ЗА ИЗХОД (ОПЦИЯ 3) ---
        else if (choice == 3) 
        {
            printf("Programata priklyuchi. Dovijdane!\n");
            break; // Спираме while цикъла
        }

        // Ако потребителят въведе грешно число
        else 
        {
            printf("Greshen izbor! Molya, izberete 1, 2 ili 3.\n");
        }
    }

    return 0;
}


