#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
int main() {
    int k=0;
    char c;
    int arr[6]= {1,1,1,1,1,1};
    int a = 0;
    int e = 0;
    int y = 0;
    int u = 0;
    int i = 0;
    int o = 0;
    while ((c = getchar()) != EOF) {
        c = tolower(c);
        if (c!=' '){
            if (c='a'){
                a++;
            }
            if (c='e'){
                e++;
            }
            if (c='y'){
                y++;
            }
            if (c='u'){
                u++;
            }
            if (c='i'){
                i++;
            }
            if (c='o'){
                o++;
            }
        }
        else{
            if (a>0){
                a=0;
            }
            else{
                arr[0]=0;
            }
            if (e>0){
                e=0;
            }
            else{
                arr[1]=0;
            }
            if (y>0){
                y=0;
            }
            else{
                arr[2]=0;
            }
            if (u>0){
                u=0;
            }
            else{
                arr[3]=0;
            }
            if (i>0){
                i=0;
            }
            else{
                arr[4]=0;
            }
            if (o>0){
                o=0;
            }
            else{
                arr[5]=0;
            }
        }
        
    }
   
    int check = 0;
    for (int j =0; j<6; j++){
        if (arr[i]==1){
            check = 1;
        }
    }
    if (check == 1){
        printf("\nyes");
    }
    else{
        printf("\nno");
    }
}