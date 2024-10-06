// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char s1[100],s2[100];int count1=0,count2=0; int i,check,j,pos;
    printf("Enter strings!\n");
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    while(s1[count1]!='\0'){
        count1=count1+1;
    }
    while(s2[count2]!='\0'){
        count2=count2+1;
    }
    printf("Characters in s1 is %d\n",count1);
    printf("Characters in s2 is %d\n",count2);

    if (count1>count2){
    for(i=0;i<count1;i++){
        if (s2[0]==s1[i]){ check=0;
            for(j=0;j<count2;j++){
                if(s1[i+j]!=s2[j]){
                    check=1;
                    break;
                }
                else pos=i+1;

            }
        }
    }
    if (check==0){
        printf("String exists at %d",pos);
    }
    else{
            printf("Doesnt exist!");

        }
    }
    else{
       for(i=0;i<count2;i++){
        if (s1[0]==s2[i]){ check=0;
            for(j=0;j<count1;j++){
                if(s2[i+j]!=s1[j]){
                    check=1;
                    break;
                }
                else pos=i+1;

            }
        }
    }
    if (check==0){
        printf("String exists at %d",pos);
    }
    else{
            printf("Doesnt exist!");

        }
    }



    return 0;
}
