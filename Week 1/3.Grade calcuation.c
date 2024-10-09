#include <stdio.h>
//3. Grade Calculation
int grade(int a){
    int add,sub,mult;
    if (a>=90){
        printf("A");
    }
    else if((a>=80) && a<90){
        printf("B");
    }
    else if((a>=70) && a<80){
        printf("C");
    }
    else if((a>=60) && a<70){
        printf("D");
    }
    else if(a<60){
        printf("F, you failed lmfao!");
    }
}
int main() {
    int a,b,d;
    printf("enter the marks!\n");
    scanf("%d",&a);
    grade(a);


}
