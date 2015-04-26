#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int t, rem;
    long int n, s;
    scanf("%d", &t);
    while(t--){
        int count = 0;
        scanf("%ld", &n);
        s = n;
        while(n>0){
            rem = n % 10;
            n = n / 10;
            if(rem!=0){
                if(s%rem == 0)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return  0;
}

