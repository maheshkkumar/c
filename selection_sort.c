/*
    Author - Mahesh Kumar K
    Problem - Selection Sort
*/

#include <stdlib.h>
#include <stdio.h>

long long int size;

int selection_sort(long long int*);
//int swap(int, int);

int main(void){
    long long int *a;
    int i;
    printf("Enter the size of the array : ");
    scanf("%lld",&size);
    a = (long long int *)malloc(size * sizeof(long long int));
    printf("Enter the elements : \n");
    for(i=0;i<size;i++){
        scanf("%lld",&a[i]);
    }
    printf("Unsorted array : \n");
    for(i=0;i<size;i++){
        printf("%lld\n",a[i]);
    }
    selection_sort(a);
    free(a);
    return 0;
}

// Selection sort function to sort all the numbers
int selection_sort(long long int *a){
    int i,j,min;
    for(i=0;i<size-1;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Sorted array : \n");
    for(i=0;i<size;i++){
        printf("%lld\n",a[i]);
    }
    return 0;
}
/*
int swap(int x, int y){
    x = x + y;
    y = x - y;
    x = x - y;
}
*/
