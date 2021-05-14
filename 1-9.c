#include <stdio.h>

int main(void) {
	int c;
    while ( (c = getchar()) != EOF) {
        if (c == ' ') {
        	putchar(c);
            while ((c = getchar()) == ' ') // skip repeated blanks
                ; // do nothing
        }
        putchar(c); // not a blank
    }
	return 0;
}