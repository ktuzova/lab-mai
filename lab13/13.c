#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#define V (1u << ('a' - 'a') | 1u << ('e' - 'a') | 1u << ('i' - 'a') | 1u << ('o' - 'a') | 1u << ('u' - 'a'))
int Sep(char c) {
    return c == ' ' || c == '\n' || c == '\t' || c == ',' || c == EOF;
}
typedef enum {
    SEP, WORD
} S;
int main() {
    char c;
    u_int word = 0;
    u_int res = V;
    S state = SEP;
    while ((c = getchar()) != EOF) {
        switch (state) {
            case SEP:
                if (!Sep(c)) {
                    c = tolower(c);
                    word |= 1u << (c - 'a');
                    state = WORD;
                }
                break;
            case WORD:
                if (!Sep(c)) {
                    c = tolower(c);
                    word |= 1u << (c - 'a');
                } else {
                    res &= word;
                    word = 0;
                    state = SEP;
                }
                break;
        }
    }

    if (res > 0) {
        printf("\nYes");
    } else {
        printf("\nNo");
    }
}
