
#include <stdio.h>

int main() {
    char symbol;
    
    printf("Въведете знак за рамката: ");
    scanf("%c", &symbol);
    
    // Горен ред
    printf("%c%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
    
    // Средни редове (3 реда с празнина в средата)
    printf("%c        %c\n", symbol, symbol);
    printf("%c        %c\n", symbol, symbol);
    printf("%c        %c\n", symbol, symbol);
    
    // Долен ред
    printf("%c%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
    
    return 0;
}