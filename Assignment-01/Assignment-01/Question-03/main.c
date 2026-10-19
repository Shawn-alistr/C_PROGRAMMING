#include <stdio.h>

int main()
{
    int gold, x, y;
    int ben, blackbeard, remaining, pirates;

    scanf("%d", &gold);
    scanf("%d", &x);
    scanf("%d", &y);

    ben = gold * x / 100;
    remaining = gold - ben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirates = remaining / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d", pirates);

    return 0;
}
