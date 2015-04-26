#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    long long num;
    scanf("%d",&t);
    while(t--){
        long long temp;
        scanf("%lld", &num);
        temp = ceil(num/2);
        num = num - temp;
        printf("%lld\n",(num * temp));
    }
}
