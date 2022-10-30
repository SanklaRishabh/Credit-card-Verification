#include <stdbool.h>
#include <stdio.h>

bool verifyCard(char *string) {
  short cardNum[16], alternateDigits[8], sum = 0;

  for (short i = 0; i < 16; i++) {
    i[cardNum] = *(string + i) - 48;

    if (i % 2 == 0) {
      alternateDigits[i / 2] = i[cardNum] * 2;

      if (alternateDigits[i / 2] > 9) {
        alternateDigits[i / 2] -= 9;
      }

      sum += alternateDigits[i / 2];
    } else {
      sum += cardNum[i];
    }
  }

  if (sum % 10 == 0) {
    return true;
  } else {
    return false;
  }
}

bool verifyCard2(char *cardNumber) {
  // assuming that cardNumber lenth is always 16
  int sum = 0;
  for (short i = 0; i < 16; i++) {
    int num = cardNumber[i] - '0';
    if (i & 1) {
      sum += num;
    } else {
      sum += num << 1;
      if (num << 1 > 9) {
        sum -= 9;
      }
    }
  }

  return sum % 10 == 0;
}

int main() {
  char cardNumber[17];

  printf("Enter a credit card number: ");
  scanf("%s", cardNumber);

  if (verifyCard2(cardNumber)) {
    printf("The card is valid.");
  } else {
    printf("You entered an invalid card number.");
  }
  return 0;
}
