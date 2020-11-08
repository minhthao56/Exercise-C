#include <stdio.h>
#include <math.h>

void main()
{
    int num1;
    int num2;
    int num3;
    int num4;

    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    int sum = num1 + num2 + num3 + num4;
    if (sum > 30)
    {
        printf("So xe cua ban la: ");
        printf("%d", sum - 30);
    }
    else if (sum > 20)
    {
        printf("So xe cua ban la: ");
        printf("%d", sum - 20);
    }
    else if (sum > 10)
    {
        printf("So xe cua ban la: ");
        printf("%d", sum - 10);
    }
    else if (sum = 10)
    {
        printf("So xe cua ban la: ");
        printf("%d", 0);
    }
    else
    {
        printf("So xe cua ban la: ");
        printf("%d", sum);
    }
}