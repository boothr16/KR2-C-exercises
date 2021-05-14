#include <stdio.h>
#define MAX 20 // print lines over 20 chars long

int main(void) {
	int c, len = 0;
    int i = 0;
    char buffer[256];

    while ( (c = getchar()) != EOF) {
        buffer[i++] = (char)c; // put input into buffer array
        if (c != '\n') {
            len++;
        }
        else {
            buffer[i++] = (char)'\0';
            if (len > MAX) {
                for (int p = 0; buffer[p] != (char)'\0'; p++)
                    printf("%c", buffer[p]);
            }
            i = len = 0;
        }
    }
    // check if last line before EOF is printable
	if (len > MAX) {
        for (int p = 0; buffer[p] != (char)'\0'; p++)
            printf("%c", buffer[p]);
    }

	return 0;
}
