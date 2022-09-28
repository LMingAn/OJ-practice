//jx0006
/*#include<stdio.h>
int main()
{
	long a;//因为输入整数限制在32位里，所以要用long
	scanf("%ld", &a);
	printf("%ld", a);
	return 0;
}*/


//jx0005
/*#include<stdio.h>//能跑，但错
int main()
{
	long a, b;
	float c;
	scanf_s("%d %d", &a, &b);
	c = (float)b / a * 100;
	printf("%.3f%%", c);
	return 0;
}*/
/*#include<stdio.h>

int main() {
	int n, m;
	scanf_s("%d%d", &n, &m);
	float j;
	j = (float)m / n * 100;
	printf("%.3f%%", j);//百分号的表示
	return 0;


}*/
/*#include<stdio.h>//此为正解，因为整数范围为1~2^30要用double
int main()
{
	double x, y;
	scanf_s("%lf%lf", &x, &y);
	double ans = (y / x) * 100;
	printf("%.3lf%%", ans);
	return 0;
}*/


//cjc03302
/*#include <stdio.h>//错解
#include <math.h>
int fun(int a, int b, int c)
{
	if (a + b > c && b + c > a && a + c > b)
	{
		if (a == b && b == c && a == c)
			printf("等边三角形");
		else if (a == b || b == c)
			printf("等腰三角形");
		else
			printf("为普通三角形");
	}
	else
		printf("无法构成三角形");
	return 0;
}
int main()
{
	int a, b, c, shape;
	scanf_s("%d%d%d", &a, &b, &c);
	shape = fun(a, b, c);
}*/

/*#include<stdio.h>//正解
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c && a == c)
		{
			printf("%d %d %d是等边三角形", a, b, c);
		}
		else if (a == b || b == c || a == c)
		{
			printf("%d %d %d是等腰三角形", a, b, c);
		}
		else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
		{
			printf("%d %d %d是直角三角形", a, b, c);
		}
		else
			printf("%d %d %d是一般三角形", a, b, c);
	}
	else
		printf("%d %d %d不能构成三角形", a, b, c);
	return 0;
}*/