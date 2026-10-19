#include <stdio.h>

int main()
{
    float distance, fare = 100;
    int member;

    scanf("%f", &distance);
    scanf("%d", &member);

    if (distance > 10)
    {
        fare = fare + (distance - 10) * 20;
    }

    if (member == 1)
    {
        fare = fare * 0.90;
    }

    printf("Final Fare: Rs.%.0f", fare);

    return 0;
}
