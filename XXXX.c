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

//1010
/*#include<stdio.h>
int main()
{
    int n, s, temp = 0;
    scanf_s("%d\n", &n);
    int arr[20] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d ", &arr[i]);
    }
    scanf_s("%d", &s);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == s)
        {
            temp = 1;
            printf("%d", j + 1);
            break;
        }
    }
    if (temp == 0)
    {
        printf("-1");
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int n;
    scanf_s("%d", &n);
    int a[20];
    int num;
    int i;
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    scanf_s("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            flag = 1;
            printf("%d", i + 1);
            break;
        }
    }
    if (flag == 0)
        printf("-1");

    return 0;
}*/


//1053
#include<stdio.h>
int main()
{
    int arr[200] = { 0 };
    int n;
    scanf_s("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        int m = 0;
        for (m = 0; m < n - j - 1; m++)
        {
            if (arr[m] > arr[m + 1])
            {
                int temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
            }
        }
    }
    for (int h = 0; h < n; h++)
    {
        printf("%d ", arr[h]);
    }
    return 0;
}
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
/*#include<stdio.h>
int main()
{
    int x1, x2, y1, y2;
    scanf_s("%d %d\n%d %d", &x1, &y1, &x2, &y2);
    if (x1 == x2)
        printf("INF");
    else
        printf("%d", (y2 - y1) / (x2 - x1));
    return 0;
}*/