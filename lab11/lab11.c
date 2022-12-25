#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char c;
    while ((c = getchar()) != EOF) {
        if (c=="\n"){
            printf(' ');
        }
        else{
            printf("%c", c);
        }
    }
    return 0;
} 
