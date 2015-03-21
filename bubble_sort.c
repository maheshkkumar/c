/*
    Author: Mahesh Kumar K
    Program: Bubble Sort
*/

#include <stdio.h>
#include <stdlib.h>

//declaring the size of the array as global
int size;

//function prototype for sorting using bubble sort algorithm
int bubble_sort(int*);

//main function, to accept the unsorted array using pointers and send the values to sorting funtion
int main(void){
        int *a,i;
        printf("Enter the size of the array:\n");
        scanf("%d",&size);
        a = (int *)malloc(size * sizeof(int));
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("Unsorted array : ");
        for(i=0;i<size;i++){
            printf("%d\n",a[i]);
        }
        bubble_sort(a);
        free(a);
        return 0;
}

/*
    Bubble sort algorithm

    1. start
    2. for i from 0 to n-1
          for j from 0 to n-i-1
             if ptr[j]>ptr[j+1]
                    swap the values
           repeat until all the values are assessed
    3. end
*/
int bubble_sort(int *a){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array is : \n");
    for(i=0;i<size;i++){
            printf("%d : %d\n",(i+1),a[i]);
        }
    return 0;
}
