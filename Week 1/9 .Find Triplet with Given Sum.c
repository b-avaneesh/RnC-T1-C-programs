/*Find Triplet with Given Sum: Write a program to find three elements in an array that
add up to a given sum. (W:3)
Sample Input: Enter the number of elements: 5
Enter elements: 1 2 3 4 5
Enter the desired sum: 9
Output: Triplets with sum 9: (2, 3, 4)*/


#include <stdio.h>

int main() {
    int i,j,n,n2,k,d,inp;

    //ARRAY 1
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];int sum[3];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &inp);
    int check;


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(j==k) continue;

                else{
                for(k=0;k<n;k++){
                    if ( arr[i]==arr[k]){
                        continue;
                    }
                    else if (arr[i]+arr[j]+arr[k]==inp){
                        check=1;
                        sum[0]=arr[i];sum[1]=arr[j];
                        sum[2]=arr[k];
                    }
                    else continue;
                }
                }

            }

        }
        if (check==1){printf("The elemennts are\n");
            for(k=0;k<3;k++){
                printf("%d ",sum[k]);
            }
            check=0;
            printf("\n");
            continue;

        }

    }

}
