#include <stdio.h>

int main(void)
{
    int x, y;
    float v, z;

    scanf("%d %d\n", &x, &y);
    scanf("%f %f", &v, &z);

    int int_sum = x + y;
    int int_sub = x - y;

    float float_sum = v + z;
    float float_sub = v - z;

    printf("%d %d\n", int_sum, int_sub);
    printf("%.1f %.1f", float_sum, float_sub);
    return (0);
}
