//#include<stdio.h>
//int main()
//{
//    long a = 0, b = 0, c = 0;
//    scanf("%ld %ld", &a, &b);
//    c = a + b;
//    printf("%ld", c);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	long a = 0, b = 0, c = 0;
//	scanf("%ld %ld %ld", &a, &b, &c);
//	long max = a;
//	if (max < b)
//	{
//		max = b;
//		if (max < c)
//			max = c;
//	}
//	else if (max < c)
//		max = c;
//	printf("%ld", max);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 0, b = 0, gcd = 0, lcm = 0;
	scanf("%d %d", &a, &b);
	for (int c = a; ; c++)
		if (c % a == 0 && c % b == 0)
		{
			gcd = c;
			break;
		}
	for (int c = 2; ; c++)
		if (a % c == 0 && b % c == 0)
		{
			lcm = c;
			break;
		}
	printf("%d %d", lcm, gcd);
	return 0;
}