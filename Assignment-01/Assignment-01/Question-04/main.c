
#include <stdio.h>

int main()
{
    int d1, c1, d2, c2;
    int total, dollars, cents;

    scanf("%d", &d1);
    scanf("%d", &c1);
    scanf("%d", &d2);
    scanf("%d", &c2);

    total = d1 * 100 + c1 + d2 * 100 + c2;

    dollars = total / 100;
    cents = total % 100;

    printf("%d\n", dollars);
    printf("%d", cents);

    return 0;
}
