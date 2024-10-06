/*Write a program to display the following pattern. (W:3)
 *
 * *
 * * *
 * * * *
 * * * * **/
#include <stdio.h>

int main() {
    int n,i,j,k,temp;
    printf("Enter number of rows: ");
    scanf("%d",&n); temp=n;
    for (i=0;i<n;i++){

        for(k=(-temp);k<temp;k++){
            printf(" ");

        }
        for(j=0;j<=i;j++){
            printf("* ");
        }
        temp=temp-1;
        printf("\n");
    }


    printf("Try programiz.pro");

    return 0;
}
