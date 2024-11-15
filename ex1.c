/*******************
Name: Maya Eliyahu.
ID: .
Assignment: ex1.
********************/

#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.
int main()
{
    /*
    What bit:
    Scan two integers (representing number and a position)
    Print the bit in this position.
    */
    int num, position;
    printf("What bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    printf("The bit in position %d of number %d is: %d\n", position, num, (num >> position) & 1);

    /*
    Set bit:
    Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output
    */
    printf("\nSet bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    num = num | (1 << position);
    printf("Number with bit %d set to 1: %d\n", position, num);
    num = num ^ (1 << position);
    printf("Number with bit %d set to 0: %d\n", position, num);

    /*
    Toggle bit:
    Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number
    */
    printf("\nToggle bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    num = num ^ (1 << position);
    printf("Number with bit %d toggled: %d\n", position, num);

    /*
    Even - Odd:
    Scan an integer
    If the number is even - print 1, else - print 0.
    */
    printf("\nEven - Odd:\n");
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("%d\n", (~num) & 1);

    /*
    3, 5, 7, 11:
    Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result.
    */
    int num1, num2, sum;
    printf("\n3, 5, 7, 11:\n");
    printf("Please enter the first number (octal):\n");
    scanf("%o", &num1);
    printf("Please enter the second number (octal):\n");
    scanf("%o", &num2);
    sum = num1 + num2;
    printf("The sum in hexadecimal: %X\n", sum);
    printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1,(sum >> 11) & 1);

    printf("Bye!\n");

    return 0;
}
