//cjc01301
/*#include<stdio.h>
int main()
{
	float x, y, l, s;
	scanf("%f %f", &x, &y);
	l = (x + y) * 2;
	printf("%.3f\n", l);
	s = x * y;
	printf("%.3f", s);
	return 0;
}*/


//cjc02301
/*#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d\n", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	return 0;
}*/


/*cjc02302
#include<stdio.h>
int main()
{
	int x, y, a, b;
	scanf("%d %d\n", &x, &y);
	a = (4 * x - y) / 2;
	b = (y - 2 * x) / 2;
	printf("%d %d", a, b);
	return 0;
}*/


//cjc02303:
#include <iostream>
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a;
//	scanf_s("%d\n", &a);
//	printf("%d", ~a + 1);
//	return 0;
//}


//cjc02304:-----暂时无法解决

//int main()
//{
//	int a1, a2, b1, b2, s1, s2;//a为实部，b为虚部
//	scanf_s("%d %d\n%d %d", &a1, &b1, &a2, &b2);//每行为一个复数
//	s1 = a1 + a2;
//	s2 = b1 + b2;
//	s1 = a1 - a2;
//	s2 = b1 - b2;
//	s1 = 
//	printf("%d %d\n%d %d\n%d %d\n%d %d", );//每一行分别表示复数虚实部的和，差，积，商
//	return 0;
//}以上为错误解法
//网络解法
//#include<stdio.h>
//#include<stdlib.h> //头文件 
//typedef struct Complex   //定义结构体类型Complex 
//{
//    float real;  //实部 
//    float image;   //虚部 
//}Complex;
//Complex InitComplex(float a, float b)/*给复数的实部和虛部复制，并返回复数。*/
//{
//    Complex c;
//    c.real = a;
//    c.image = b;
//    return c;
//}
//Complex Add(Complex c1, Complex c2)   //加法 
//{
//    Complex sum;
//    sum.real = c1.real + c2.real;
//    sum.image = c1.image + c2.image;
//    return sum;
//}
//
//Complex Sub(Complex c1, Complex c2)  //减法 
//{
//    Complex dif;
//    dif.real = c1.real - c2.real;
//    dif.image = c1.image - c2.image;
//    return dif;
//
//}
//Complex Mul(Complex c1, Complex c2)   //乘法 
//{
//    Complex product;
//    product.real = c1.real * c2.real - c1.image * c2.image;
//    product.image = c1.real * c2.image + c1.image * c2.real;
//    return product;
//}
//float GetReal(Complex c)
//{/*取复数实部*/
//    return c.real;
//}
//float GetImag(Complex c)
//{ /*取复数虚部*/
//    return c.image;
//}
//void Print_C(Complex c)
//{/*复数输出*/
//    if (GetImag(c) == 0.0)   printf("%5.2f\n", GetReal(c));
//    else if (GetReal(c) == 0.0)  printf("%5.2fi\n", GetImag(c));
//    else  printf("%5.2f+%5.2fi\n", GetReal(c), GetImag(c));
//}
//int main(void)
//{
//    Complex z1, z2, sum, dif, pro;   //z1复数1，z2复数2，sum和，dif差，pro积 
//    float e1, e2, e3, e4;   //e1、e3实部，e2、e4虚部 
//    int a[2], b[2];//存储实部、虚部和结果
//    printf("输入第1个复数\nz1=");   //提示输入第一个复数 
//    scanf_s("%f+%fi", &e1, &e2);
//    z1 = InitComplex(e1, e2);/***********提示输入复数z1，并存入变量中。*/
//
//    printf("输入第2个复数\nz2=");
//    scanf_s("%f+%fi", &e3, &e4);
//    z2 = InitComplex(e3, e4);/*****提示输入复数z2，并存入变量中。*/
//    sum = Add(z1, z2); Print_C(sum);  //显示求和的结果 
//    dif = Sub(z1, z2); Print_C(dif);   //显示求差的结果 
//    pro = Mul(z1, z2); Print_C(pro);   //显示求积的结果 
//
//    printf("请输入第3个复数的实部和虚部：\n");
//    scanf_s("%d%d", &a[0], &b[0]);
//    printf("您输入的复数为%d+%di\n", a[0], b[0]);
//
//    printf("请输入第4个复数：\n");
//    scanf_s("%d+%di", &a[1], &b[1]);
//    printf("第4个复数的实部是:%d\n", a[1]);
//    printf("第4个复数的虚部是:%d\n", b[1]);
//
//}

/*cjc03301
#include<stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  if (a%3 == 0 && a%5 == 0 && a%7 == 0)
	printf("yes");
  else
	printf("no");
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

/*cjc03303
#include<stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  if (a%2 == 0)
	printf("even");
  else
	printf("odd");
  return 0;
}*/


//cjc03305
/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 13 == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}*/