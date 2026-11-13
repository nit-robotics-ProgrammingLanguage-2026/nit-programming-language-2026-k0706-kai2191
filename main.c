#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    scanf("%f", &x);
    if (x <= 0)
    {
        printf("NG");
        return 0;
    }
    printf("%.2f", atan(x));
    return 0;
}
