#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int b=0,i,j,n,m,k,max,p=0;
    char a[500][500];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%500s",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        max=0;
            for(k=0;k<m;k++)
            {
                if((a[i][k]==49)||(a[j][k]==49))
                {
                    max++;
                }
            }
            if(b<max)
            {
                p=1;
                b=max;
            }
            else if(b==max)
            {
                p++;
            }
        }
    }
    printf("%d\n%d",b,p);
}
