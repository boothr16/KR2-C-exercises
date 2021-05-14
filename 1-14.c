#include <stdio.h>

int main(void) {
	int c;
    int freq[256] = {0};

    while ( (c = getchar()) != EOF) {
        freq[c]++; // increment based on ASCII value
    }

    for (int i = 0; i < 256; i++) {
        printf("%c\t", i); // print ASCII symbol
        for (int j = 0; j < freq[i]; j++)
            printf("*");
        printf("\n");
    }
	return 0;
}
