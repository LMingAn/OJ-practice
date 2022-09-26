//jx0010
/*#include<stdio.h>
int main()
{
	int a, b, x, y;
	scanf("%d %d", &a, &b);
	x = (4 * b - a) / 2;
	y = (a - 2 * b) / 2;
	printf("%d %d", x, y);
	return 0;
}*/


//jx0011
#/*include<stdio.h>
int main()
{
	int a, ge, shi, bai;
	scanf_s("%d", &a);
	ge = a % 10;
	shi = a / 10 % 10;
	bai = a / 100 % 10;
	printf("%d %d %d", ge, shi, bai);
	return 0;
}*/


//jx0020
/*#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d", &a, &b, &c);
	d = (a + b + c) / 3;
	if (d >= 60)
		printf("NO");
	else
		printf("YES");
	return 0;
}*/


//jx0019
/*#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		printf("yes");
	else
		printf("no");
		return 0;
}*/


//jx0016
/*#include<stdio.h>
int main()
{
	int n, k;
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		k = n / 2;
		printf("%d", k);
	}
	else
	{
		k = 3 * n + 1;
		printf("%d", k);
	}
	return 0;
}*/


//jx0017
#include<stdio.h>
int main()
{
	//int X, Y, Z;//若X是Y的因数，那么X能整除Y，又因为题干输入要求：输入两个正整数X, Y。  (1 <= X <= Y <= 100000000000000)，所以不能用int，要用long long
	long long X, Y, Z;
	scanf_s("%lld %lld", &X, &Y);
	if (Y % X == 0)
	{
		Z = X + Y;
		printf("%lld", Z);
	}
	else
	{
		Z = Y - X;
		printf("%lld", Z);
	}
	return 0;
}