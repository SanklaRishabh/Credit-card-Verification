#include <stdio.h>
#include <stdbool.h>

bool verifyCard(char *string)
{
    short cardNum[16], alternateDigits[8], sum = 0;

    for (short i = 0; i < 16; i++)
    {
        i[cardNum] = *(string + i) - 48;

        if (i % 2 == 0)
        {
            alternateDigits[i / 2] = i[cardNum] * 2;

            if (alternateDigits[i / 2] > 9)
            {
                alternateDigits[i / 2] -= 9;
            }

            sum += alternateDigits[i / 2];
        }
        else
        {
            sum += cardNum[i];
        }
    }

    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void main()
{
    char cardNumber[17];

    printf("Enter a credit card number: ");
    scanf("%s", cardNumber);

    if (verifyCard(cardNumber))
    {
        printf("The card is valid.");
    }
    else
    {
        printf("You entered an invalid card number.");
    }
}