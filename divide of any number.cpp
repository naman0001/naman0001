#include <stdio.h>
int main()
{
    int divisor,divident,quotent,remainder;
    printf("divisor=\n");
    scanf("%d",&divisor);
    printf("divident=\n");
    scanf("%d",&divident);
    quotent=divident/divisor;
    printf("quotent=%d\n",quotent);
    remainder=divident%divisor;
    printf("remainder=%d\n",remainder);
    printf("thanks kartik for using me for divison");
    return 0;
}
