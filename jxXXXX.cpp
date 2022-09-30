//jx0001:
//#include<stdio.h>
//int main()
//{
//	printf("CDUT ACM Training Team");
//}


//jx0002:
//#include<stdio.h>
//int main()
//{
//	printf("     **     \n     **     \n************\n************\n    *  *    \n    *  *    ");
//}


//jx0003:
//#include<stdio.h>
//int main()
//{
//	printf("Helo wordl");
//}


//jx0004
//int main()
//{
//	printf("1*1= 1\n1*2= 2 2*2= 4\n1*3= 3 2*3= 6 3*3= 9\n1*4= 4 2*4= 8 3*4=12 4*4=16\n1*5= 5 2*5=10 3*5=15 4*5=20 5*5=25\n1*6= 6 2*6=12 3*6=18 4*6=24 5*6=30 6*6=36\n1*7= 7 2*7=14 3*7=21 4*7=28 5*7=35 6*7=42 7*7=49\n1*8= 8 2*8=16 3*8=24 4*8=32 5*8=40 6*8=48 7*8=56 8*8=64\n1*9= 9 2*9=18 3*9=27 4*9=36 5*9=45 6*9=54 7*9=63 8*9=72 9*9=81");
//}


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


//jx1006
/*#include<stdio.h>
int main()
{
	long a;//因为输入整数限制在32位里，所以要用long
	scanf("%ld", &a);
	printf("%ld", a);
	return 0;
}*/


//jx0007
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    if (a != b)
//    {
//        if (a > b)
//            printf(">");
//        else
//            printf("<");
//    }
//    else
//        printf("=");
//    return 0;
//}


//jx0008
/*#include<stdio.h>
int main()
{
	float f, c;
	scanf_s("%f", &f);
	c = static_cast<float>(5) / 9 * (f - 32);//浮点型文本未掌握
	printf("%.3f", c);
	return 0;
}*/


//jx0009
/*#include<stdio.h>
int main()
{
	float c, f;
	scanf_s("%f", &f);
	c = static_cast<float>(5) / 9 * (f - 32);
	printf("%.3f", c);
	return 0;
}*/


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
/*#include<stdio.h>
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