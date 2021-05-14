#include <stdio.h>

float ToCelsius(float f);

int main(void) {
	float f, c;
    printf("%6s\t%s\n", "Fahr", "Cel");
    for (f = 0.0; f <= 300.0; f += 20.0) {
        c = ToCelsius(f);
        printf("%6.0f\t%0.2f\n", f, c);
    }
	return 0;
}

float ToCelsius(float f) {
    return (5.0/9.0) * (f-32.0);
}