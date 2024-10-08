#include <stdio.h>

int main(void) {
    float a,p,b,c;
    printf("inserire il numero dei prodotti:");
    scanf("%f", &a);
    c = 1;
    while (c <= a) {
        printf("inserisci il prezzo dei prodotti");
        scanf("%f", &a);
        p = p + a;
        c = c + 1;
    }
    printf("il prezzo totale e': %.2f", p);
}
