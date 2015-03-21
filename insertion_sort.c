/*
    Author : Mahesh Kumar K
    Program : Insertion Sort
*/
#include <stdio.h>
#include <stdlib.h>

// size of the array of elements
long int size;

// function prototype for sorting using insertion sort
int insertion_sort(long long int*);

int main(void){

    long long int *a;
    int i;

    printf("Enter the size of the array: ");
    scanf("%ld",&size);
    /*
        dynamic allocation of memory
        syntax - var = (datatype *)malloc(size * size(datatype));
    */
    a = (long long int *)malloc(size * sizeof(long long int));

    for(i=0;i<size;i++){
        scanf("%lld",&a[i]);
    }

    printf("Unsorted array : \n");
    for(i=0;i<size;i++){
        printf("%lld\n",a[i]);
    }

    insertion_sort(a);
    free(a);
    return 0;
    }

// Insertion Sort function to sort the unsorted elements
int insertion_sort(long long int *a){
    int i,j;
    int temp;

    for(i=0;i<size;i++){
        j = i;
        temp = a[i];
        while(j>0 && a[j-1]>temp){
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }

    printf("Sorted Array : \n");
    for(i=0;i<size;i++){
        printf("%lld\n",a[i]);
    }
}
