#include <stdio.h>

int main()
{
    int temperature;

    printf("Enter temperature ");
    scanf("%d", &temperature);

    if (temperature < 15)
    {
        printf("Cold");
    }
    else if (temperature <= 30)
    {
        printf("Normal");
    }
    else
    {
        printf("Hot");
    }

    return 0;
}
