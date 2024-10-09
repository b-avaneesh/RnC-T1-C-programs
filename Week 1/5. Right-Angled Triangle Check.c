#include <stdio.h>
//5. Right-Angled Triangle Check

int main() {
    int a[3],i,j,temp;printf("Enter the elements\n");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        for(j=i;j<2;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    if ((a[0]*a[0]+a[1]*a[1]==a[2]*a[2])){
        printf("\nIt forms right angled triangle!");
    }
    else printf("\nnah, doesnt form a right triangle, try better");



}
