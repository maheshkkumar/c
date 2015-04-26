#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int arr[1000];
    int n, flag = 0, i;
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    flag = 0;
    do{
        flag = 0;
        int count = 0, min = 1000;
        for(i=0;i<n;i++){
            if(arr[i]!=0 && arr[i]<min){
                min = arr[i];
            }
        }

        for(i=0;i<n;i++){
            if(arr[i]!=0){
                arr[i] = arr[i] - min;
                count++;
                flag = 1;
            }
        }
        if(count!=0){
            printf("%d\n", count);
        }

    }while(flag==1);
    return 0;
}
