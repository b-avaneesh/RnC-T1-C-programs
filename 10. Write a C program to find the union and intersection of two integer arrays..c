#include <stdio.h>

int main() {
    int i,j,n1,n2,k,d,temp;

    //ARRAY 1
    printf("Enter number of elements: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    //ARRAY 2
    printf("Enter number of elements: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int inter[100];int sum=0;

    for (i=0;i<n1;i++){ // array 1 is reference
        for(j=0;j<n2;j++){ //array 2 is indexed
            if (arr1[i]==arr2[j]){ d=0; //assuming its not present
                for(k=0;k<sum;k++){
                    if (arr1[i]==inter[k]){
                        d=1;
                        break;
                    }
                }
                if (d==0){
                    inter[sum]=arr1[i];
                    sum=sum+1;
                }
            }
        }
    }
    printf("The intersection is\n");
    for(i=0;i<sum;i++){
        printf("%d ",inter[i]);
    }
}
