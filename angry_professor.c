#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    int a[1000], i;
    int n, k, sum;

    scanf("%d", &t);
    while(t--){
        sum = 0;
        scanf("%d%d", &n, &k);
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
            }
        for(i=0;i<n;i++){
            if(a[i]<=0)
                ++sum;
        }
        if(sum>=k){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
