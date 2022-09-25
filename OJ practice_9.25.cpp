//cjc03305
#include<stdio.h>
/*int main()
{
    int a;
    scanf("%d", &a);
    if (a % 13 == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    scanf_s("%d %d %d %d %d %d %d 0", &a, &b, &c, &d, &e, &f, &g);
    printf("%d %d %d %d %d %d %d", g, f, e, d, c, b, a);
    return 0;
}