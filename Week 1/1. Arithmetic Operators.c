#include <stdio.h>
//Arithmetic problem
int arith(int a,int b){
    int add,sub,mult;
    float div = (float)a/b;
    printf("Div = %f\n", div);
    printf("Sum = %d\n", a+b);
    printf("Difference = %d\n", a-b);
    printf("Product = %d\n", a*b);
}
int main() {
    int a,b;
    printf("enter the numbers!\n");
    scanf("%d%d",&a,&b);
    arith(a,b);


}
