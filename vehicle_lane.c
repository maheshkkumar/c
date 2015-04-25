#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
long int width[MAX];

int vehicle(int, int);

int main() {

    int T, N;
    int x, veh;
    int i,j;

    scanf("%d%d", &N, &T);
    for(x=0;x<N;x++)
    {
        scanf("%ld", &width[x]);
    }
    while(T--)
    {
       scanf("%d%d", &i, &j);
       veh = vehicle(i, j);
       printf("%d\n", veh);
    }
    return 0;
}

int vehicle(int i, int j)
{
   int a;
   int min_val = 3;
   for(a=i;a<=j;a++)
   {
       if(width[a]<min_val)
           min_val = width[a];
   }
   return min_val;
}
