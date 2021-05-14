#include <stdio.h>
#define MAXLENGTH 10 // global constant

int main(void) {
	int c, len = 0;
    int lengths[MAXLENGTH + 1] = {0}; // initialize int array with zeroes
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            lengths[len]++;
            len = 0;
        }
        else
        	len++;
    }
    lengths[len]++; // last word before EOF

    for (int i = 1; i <= MAXLENGTH; i++) {
        printf("%i\t", i);
        for (int j = 0; j < lengths[i]; j++)
            putchar('*');
        putchar('\n');
    }
	return 0;
}
