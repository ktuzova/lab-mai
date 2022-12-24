#include <stdio.h>
#include <math.h>
int main() {
    printf("Input a number\n");
    int a;
    scanf("%d",&a);
    if (a<10){
        printf("%d",a);
    }
    else {
        int n = a;
        int k = 0;
        int second = 0;
        int first = 0;
        int last = a%10;
        while (n>0){
            second = first;
            first = n%10;
            k++;
            n/=10;
        }
        k-=2;
        
        a = a - last + second + (last - second)*pow(10,k);
        printf("%d",a);
    }
    return 0;
} 
