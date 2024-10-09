
#include <stdio.h>
//Swapping Two Variables
int arith(int a,int b,int d){
    int add,sub,mult;
    switch(d){

    case 1:
    float div = (float)a/b;
    printf("Div = %f\n", div);
    break;
    case 2:
    printf("Sum = %d\n", a+b);break;
    case 3:
    printf("Difference = %d\n", a-b);
    break;
    case 4:
    printf("Product = %d\n", a*b);break;
    default:
    printf("enter a valid input!!!!!!!!!!!");
    }
}
int main() {
    int a,b,d;
    printf("enter the numbers!\n");
    scanf("%d%d",&a,&b);
    printf("1.Division\n2.Sum\n3.Difference\n4.Product\n");
    scanf("%d",&d);
    arith(a,b,d);


}
