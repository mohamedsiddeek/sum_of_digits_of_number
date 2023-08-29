#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n , acc=0;
    printf("enter the number \n");
    scanf("%i",&n);
    while(n >= 10){
        acc+=n%10;
        n/=10;
    }
    acc+=n%10;
    printf("the sum = %i",acc);
    return 0;
}
