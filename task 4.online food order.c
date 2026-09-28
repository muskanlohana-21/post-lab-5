#include <stdio.h>

int main()
{
    int restaurantOpen, itemAvailable, balanceSufficient;

    printf("Is the restaurant open? (1 for Yes, 0 for No): ");
    scanf("%d", &restaurantOpen);

    if (restaurantOpen == 1)
    {
        printf("Is the item available? (1 for Yes, 0 for No): ");
        scanf("%d", &itemAvailable);

        if (itemAvailable == 1)
        {
            printf("Is the balance sufficient? (1 for Yes, 0 for No): ");
            scanf("%d", &balanceSufficient);

            if (balanceSufficient == 1)
            {
                printf("Order placed successfully.");
            }
            else
            {
                printf("Insufficient balance.");
            }
        }
        else
        {
            printf("Item is not available.");
        }
    }
    else
    {
        printf("Restaurant is closed.");
    }

    return 0;
}
