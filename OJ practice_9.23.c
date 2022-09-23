//OJ:jc03302
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
		{
			printf("等边三角形");
		}
		else if (a == b || b == c || a == c)
		{
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
				printf("等腰直角三角形");
			else
				printf("等腰三角形");
		}
		else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
		{
			printf("直角三角形");
		}
		else
			printf("普通三角形");
	}
	else
		printf("不能形成三角形");
	return 0;
}


//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);   //输入三条边
//	if (a + b > c && a + c > b && b + c > a)   //先判断是否能构成三角形
//	{
//		if (a == b && b == c) //再判断较为特殊的三角形
//		{
//			printf("等边三角形");
//		}
//		else if (a == b || a == c || b == c)    //判断是否等腰
//		{
//			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)   //再判断等腰三角形的特殊形式
//				printf("等腰直角三角形");
//			else
//				printf("等腰三角形");
//		}
//		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)   //最后判断是否为直角三角形
//		{
//			printf("直角三角形");
//		}
//		else
//			printf("普通三角形");
//	}
//	else
//		printf("不能形成三角形");   //若前面判断不能构成三角形
//	return 0;
//}