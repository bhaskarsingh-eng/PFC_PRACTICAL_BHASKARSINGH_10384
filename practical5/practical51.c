#include <stdio.h>
int main()
{
    int num, a, b, c, max, choice;

    printf("MENU\n");
    printf("1. Odd/Even using if-else\n");
    printf("2. Max of three numbers using if-else\n");
    printf("3. Max of three numbers using ternary operator\n");
    printf("4. Odd/Even using switch case\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("Number is Even\n");
        }
        else
        {
            printf("Number is Odd\n");
        }
        break;

    case 2:
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a >= b && a >= c)
        {
            printf("Greatest number is %d\n", a);
        }
        else if (b >= a && b >= c)
        {
            printf("Greatest number is %d\n", b);
        }
        else
        {
            printf("Greatest number is %d\n", c);
        }
        break;

    case 3:
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
        max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        printf("Greatest number is %d\n", max);
        break;

    case 4:
        printf("Enter a number: ");
        scanf("%d", &num);
        switch (num % 2)
        {
        case 0:
            printf("Number is Even\n");
            break;
        case 1:
            printf("Number is Odd\n");
            break;
        }
        break;

    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
/*expected code
MENU
1. Odd/Even using if-else
2. Max of three numbers using if-else
3. Max of three numbers using ternary operator
4. Odd/Even using switch case
Enter your choice: 3
Enter three numbers: 2
3
2
Greatest number is 3
*/