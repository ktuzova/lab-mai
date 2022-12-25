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
            printf("%s", c);
        }
    }
    return 0;
} 
