#include <stdio.h>

int main(void) {
	int c;
    while ( (c = getchar()) != EOF) {
        switch (c) {
            case ' ' :
            putchar('%');
            putchar('2');
            putchar('0');
            break;

            case '\t' :
            putchar('\\');
            putchar('t');
            break;

            case '\\' :
            putchar('\\');
            putchar('\\');
            break;

            default :
            putchar(c);
            break;
        }
    }
	return 0;
}
