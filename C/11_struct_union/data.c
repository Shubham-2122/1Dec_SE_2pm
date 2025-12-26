#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        max = 1;
    else if (b >= a && b >= c)
        max = 2;
    else
        max = 3;

    switch (max) {
        case 1:
            printf("Max value = %d", a);
            break;
        case 2:
            printf("Max value = %d", b);
            break;
        case 3:
            printf("Max value = %d", c);
            break;
    }

    return 0;
}

