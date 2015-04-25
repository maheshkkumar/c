#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 1000000

int xor(int, int);
int max_value(long long int a[MAX], int );

int main(void)
{
    int l, r;
    scanf("%d%d", &l, &r);
    r = xor(l, r);
    printf("%d", r);
    return 0;
}

int xor(int l, int r)
{
    int i, j;
    int a, b, x, res;
    int index = 0;
    long long int max_arr[MAX];
    if(r>l)
    {
        for(i=l;i<=r;i++)
        {
            for(j=l;j<r;j++)
            {
               a = i & j;
               b = ~i & ~j;
               x = ~a & ~b;
               max_arr[index] = x;
               ++index;
            }
        }
    }
    res = max_value(max_arr, index);
    return res;
}

int max_value(long long int a[MAX], int len)
{
    int index, max_val, i;
    max_val = -1;
    index = -1;
    for(i=0;i<len;i++)
    {
        if(a[i]>max_val)
        {
            max_val = a[i];
            index = i;
        }
    }
    return max_val;
}
