#include <stdio.h>

int main()
{
    int operation, account;

    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. PIN Change\n");

    printf("Enter your choice: ");
    scanf("%d", &operation);

    switch (operation)
    {
        case 1:
            printf("Balance Inquiry\n");

            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type: ");
            scanf("%d", &account);

            switch (account)
            {
                case 1:
                    printf("Savings Account selected.");
                    break;

                case 2:
                    printf("Current Account selected.");
                    break;

                default:
                    printf("Invalid account type.");
            }
            break;

        case 2:
            printf("Cash Withdrawal\n");

            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type: ");
            scanf("%d", &account);

            switch (account)
            {
                case 1:
                    printf("Savings Account selected.");
                    break;

                case 2:
                    printf("Current Account selected.");
                    break;

                default:
                    printf("Invalid account type.");
            }
            break;

        case 3:
            printf("Cash Deposit\n");

            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type: ");
            scanf("%d", &account);

            switch (account)
            {
                case 1:
                    printf("Savings Account selected.");
                    break;

                case 2:
                    printf("Current Account selected.");
                    break;

                default:
                    printf("Invalid account type.");
            }
            break;

        case 4:
            printf("PIN Change\n");

            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type: ");
            scanf("%d", &account);

            switch (account)
            {
                case 1:
                    printf("Savings Account selected.");
                    break;

                case 2:
                    printf("Current Account selected.");
                    break;

                default:
                    printf("Invalid account type.");
            }
            break;

        default:
            printf("Invalid operation.");
    }

    return 0;
}
