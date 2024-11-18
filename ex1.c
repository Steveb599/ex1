/******************
Name: Steve Bendersky
ID: 318895943
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{
  // What bit
  int num, position;
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%u", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);

  int bitInPosition = (num >> position) & 1;

  printf("The bit in position %d of number %u is: %d\n", position, num, bitInPosition);

  // Set bit
  int num2;
  int position2;
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%u", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &position2);

  int numberWithBitSetTo1 = num2 | (1 << position2);
  int numberWithBitSetTo0 = num2 & ~(1 << position2);

  printf("Number with bit %d set to 1: %d\n", position2, numberWithBitSetTo1);
  printf("Number with bit %d set to 0: %d\n", position2, numberWithBitSetTo0);

  int num3, position3;

  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%u", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &position3);

  int toggledNumber = num3 ^ (1 << position3);

  printf("Number with bit %d toggled: %d\n", position3, toggledNumber);

  // even - odd
  printf("\nEven - Odd:\n");
  int num4;
  printf("Please enter a number:\n");
  scanf("%u", &num4);
  int LSB = num4 & 1;
  printf("%d\n", 1 ^ LSB);

  int octal1, octal2, sum;
  int bitInPosition3, bitInPosition5, bitInPosition7, bitInPosition11;
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal):\n");
  scanf("%o", &octal1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &octal2);
  sum = octal1 + octal2;
  printf("The sum in hexadecimal is: %X\n", sum);
  bitInPosition3 = (sum >> 3) & 1;
  bitInPosition5 = (sum >> 5) & 1;
  bitInPosition7 = (sum >> 7) & 1;
  bitInPosition11 = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bitInPosition3, bitInPosition5, bitInPosition7, bitInPosition11);
  printf("Bye!\n");

  return 0;
}
