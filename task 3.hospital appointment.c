#include <stdio.h>

int main()
{
    int appointment, doctorAvailable, registrationCompleted;

    printf("Do you have an appointment? (1 for Yes, 0 for No): ");
    scanf("%d", &appointment);

    if (appointment == 1)
    {
        printf("Is the doctor available? (1 for Yes, 0 for No): ");
        scanf("%d", &doctorAvailable);

        if (doctorAvailable == 1)
        {
            printf("Is registration completed? (1 for Yes, 0 for No): ");
            scanf("%d", &registrationCompleted);

            if (registrationCompleted == 1)
            {
                printf("You can meet the doctor.");
            }
            else
            {
                printf("Registration is not completed.");
            }
        }
        else
        {
            printf("Doctor is not available.");
        }
    }
    else
    {
        printf("No appointment.");
    }

    return 0;
}
