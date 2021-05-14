#include <stdio.h>

int main(void) {
	char buffer[256];
    int c, len = 0, i = 0;
    while ((c = getchar()) != EOF) {
        buffer[i++] = (char)c;
    }
    for (int j = 0; j < i; j++) {
        if (buffer[j] != '\n') {
            printf("%c", buffer[j]);
            len++;
        }

        else {
            printf("\t[%i]", len);
            len = 0;
            printf("%c", buffer[j]);
        }
    }
    printf("\t[%i]", len); // length of last line
	return 0;
}
