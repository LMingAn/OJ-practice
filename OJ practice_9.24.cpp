// OJ practice_9.24.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//OJ题
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
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float c;
//	scanf_s("%d %d", &a, &b);
//	c =b / a * 0.01;
//	printf("%.3f %", c);
//	return 0;
//}

//1003
//#include<stdio.h>
//int main()
//{
//	long long n, w;
//	scanf("%lld\n", &n);
//	w = (1 + n) * n / 2;
//	printf("%lld", w);
//	return 0;
//}

//jx1006
//#include<stdio.h>
//int main()
//{
//	long a;
//	scanf_s("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    ");
//	return 0;
//}

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
#include<stdio.h>
int main()
{
	float f, c;
	scanf_s("%f", &f);
	c = static_cast<float>(5) / 9 * (f - 32);//浮点型文本未掌握
	printf("%.3f", c);
	return 0;
}