#include <stdio.h>
#include <math.h>
#include "source.h"

void simple_sum(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
}

void simple_math(void)
{
    double a, b;
    int ret;
    char op;

    ret = scanf("%lf %c %lf", &a, &op, &b);

    if (ret < 3)
    {
        printf("ERR\n");
    }
    else if (op == '+')
    {
        printf("%.1f\n", a + b);
    }
    else if (op == '-')
    {
        printf("%.1f\n", a - b);
    }
    else if (op == '*')
    {
        printf("%.1f\n", a * b);
    }
    else if (op == '/')
    {
        printf("%.1f\n", a / b);
    }
    else
    {
        printf("ERR\n");
    }
}
