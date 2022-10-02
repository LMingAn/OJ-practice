//1002
/*#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    C = A + B;
    printf("%d", C);
    return 0;
}*/


//1003
/*#include<stdio.h>
int main()
{
    long long n, a;
    scanf("%lld", &n);
    a = (1 + n) * n / 2;
    printf("%lld", a);
    return 0;
}*/


//1004
/*#include<stdio.h>
#include<math.h>

int main()
{
    int r;
    double pi = 3.14159265358979323;
    scanf("%d", &r);
    double s;
    s = pi * r * r;
    printf("%.7f\n", s);
    return 0;
}*/


//1006
/*#include<stdio.h>
int main()
{
    int a;
    scanf_s("%d", &a);
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}*/


//1102
/*#include<stdio.h>
int main()
{
    long long A, B, C;
    scanf("%lld %lld", &A, &B);
    C = A + B;
    printf("%lld", C);
    return 0;
}*/


//1146
#include<stdio.h>
int main()
{
    int x1, x2, y1, y2;
    scanf_s("%d %d\n%d %d", &x1, &y1, &x2, &y2);
    if (x1 == x2)
        printf("INF");
    else
        printf("%d", (y2 - y1) / (x2 - x1));
    return 0;
}