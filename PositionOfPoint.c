#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the x point: ");
    scanf("%d", &x);

    printf("Enter the y point: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("The point is in 1st quadrant");

    else if (x > 0 && y < 0)
        printf("The point is in 4th quadrant");

    else if (x < 0 && y < 0)
        printf("The point is in 3rd quadrant");

    else if (x < 0 && y > 0)
        printf("The point is in 2nd quadrant");

    else if (x == 0 && y != 0)
        printf("The point is on the y axis");

    else if (x != 0 && y == 0)
        printf("The point is on the x axis");

    else if (x == 0 && y == 0)
        printf("The point is origin");

    return 0;
}
