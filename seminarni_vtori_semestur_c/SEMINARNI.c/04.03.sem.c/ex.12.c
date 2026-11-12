#include <stdio.h>

int main() {
    int N, M;
    float USD_to_BGN, month_salary, year_gross, year_net, day_profit;

    printf("Въведете работни дни на месец N: ");
    scanf("%d", &N);
    printf("Въведете долари на ден M: ");
    scanf("%d", &M);
    printf("Въведете курс USD към BGN: ");
    scanf("%f", &USD_to_BGN);

    month_salary = N * M;
    year_gross = month_salary * 12 + month_salary * 2.5;
    year_net = year_gross * 0.75;
    day_profit = (year_net / 365) * USD_to_BGN;

    printf("Чиста средна печалба на ден в лева: %.2f\n", day_profit);

    return 0;
}