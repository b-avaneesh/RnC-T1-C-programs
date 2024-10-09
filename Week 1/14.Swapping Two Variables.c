#include <stdio.h>
//Swapping Two Variables
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main() {
    int a,b;
    printf("enter the numbers to be swapped!\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Swapped numbers %d and %d",a,b);
    return 0;

}
