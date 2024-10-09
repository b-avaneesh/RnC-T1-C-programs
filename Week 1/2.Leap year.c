#include <stdio.h>

int main() {
    int a,b,d;
    printf("Input the year!\n");
    scanf("%d",&a);
    if ((a%4==0)&&(a%100!=0)){
        printf("It is a leap year");
    }
    else printf("not a leap year");


}
