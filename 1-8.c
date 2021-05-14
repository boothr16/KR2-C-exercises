#include <stdio.h>
int main (void) {
    int bl = 0, t = 0, nl = 0, c;
    while ( (c = getchar()) != EOF) {
        switch(c) {
            case ' ' :
            bl++;
            break;

            case '\t' :
            t++;
            break;

            case '\n' :
            nl++;
            break;
        }
    }
    printf("%i blanks, %i tabs, %i newlines\n", bl, t, nl);
    return 0;
} 