
#include <stdio.h>

int main()
{
   
    int x;
    int y;
    printf("Введіть число x: ");
    scanf("%d", &x);
    printf("Введіть число y: ");
    scanf("%d", &y);
    
    int res = (x > y) ? printf("x більше за y") : printf("x менше за y");

    return 0;
}