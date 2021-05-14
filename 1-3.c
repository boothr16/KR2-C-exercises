#include <stdio.h>
int main (void) {
    printf("%6s\t%s\n", "Fahr", "Cel");
    float f, c;
    for (f = -40.0; f <= 300; f += 20.0) {
        c = (5.0/9.0) * (f - 32.0);
        printf("%6.0f\t%.2f\n", f, c);
    } 
    return 0;
} 