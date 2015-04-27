#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test, cash_in_pocket, cost_of_chocolate, minimum_wrapper, extra;
    scanf("%d", &test);
    while ( test-- )
    {
        scanf("%d%d%d",&cash_in_pocket ,&cost_of_chocolate ,&minimum_wrapper);
        int total_chocolate = 0;
        total_chocolate = cash_in_pocket / cost_of_chocolate;

        if(total_chocolate >= minimum_wrapper){
            extra = total_chocolate;
            do{
                extra -= minimum_wrapper;
                total_chocolate++;
                extra++;
            }while(extra>=minimum_wrapper);
        }

        printf("%d\n",total_chocolate);
    }
    return 0;
}
