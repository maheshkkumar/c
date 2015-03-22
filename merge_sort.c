/*
    Author : Mahesh Kumar K
    Program : Merge Sort
*/
#include <stdio.h>
#include <stdlib.h>

int size;

int merge(int*, int, int, int);
int merge_sort(int*, int, int);

int main(void){
    int *a,i;
    printf("Enter the array size : ");
    scanf("%d",&size);
    a = (int *)malloc(size * sizeof(int));
    //printing unsorted array
    printf("Enter the array elements : \n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Unsorted array : \n");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    merge_sort(a,0,size);

    printf("Sorted array : \n");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

int merge_sort(int *a, int l, int r){
    int mid;
    if(l<r){
        mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    return 0;
}

int merge(int *a, int l, int mid, int r){
    int i,j,k;
    int limit1, limit2;
    limit1 = mid-1+1;
    limit2 = r - mid;
    int x[limit1], y[limit2];

    for(i=0;i<limit1;i++){
        x[i] = a[l+i];
    }

    for(i=0;i<limit2;i++){
        y[i] = a[(mid+1)+i];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < limit1 && j < limit2)
    {
        if (x[i] <= y[j])
        {
            a[k] = x[i];
            i++;
        }
        else
        {
            a[k] = y[j];
            j++;
        }
        k++;
    }

    while(i<limit1){
        a[k] = x[i];
        i++;
        k++;
    }

    while(j<limit2){
        a[k] = y[j];
        j++;
        k++;
    }
    return 0;
}
