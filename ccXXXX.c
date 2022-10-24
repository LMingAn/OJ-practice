//cc0703
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m, n;
//	scanf_s("%d %d", &m, &n);
//	int a, b, c = 0, d = 0;
//	for (a = m; a <= n; a++)
//	{
//		if (a == 1)
//			continue;
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > sqrt(a))
//		{
//			c = c + a;
//			d++;
//		}
//	}
//	printf("%d %d", c, d);
//	return 0;
//}


//cc0705
#include<stdio.h>
int main()
{
	int b = 0;
	scanf_s("%d", &b);
	char a[10];
	int c, d, e;
	for (c = 0; c <= 10; c++)
	{
		scanf_s("%c", &a[c]);
	}
	for (d = 0; d <= 10; d++)
	{
		if (a[d] == 'a' || a[d] == 'e' || a[d] == 'i' || a[d] == 'o' || a[d] == 'u')
		{
			a[d] = a[d] - 32;
			break;
		}
		else if (a[d] != 'A' && a[d] != 'E' && a[d] != 'I' && a[d] != 'O' && a[d] != 'U')
		{
			a[d] = a[d] + 32;
			break;
		}
	}
	e = 0;
	while (e < 10)
		printf("%c", a[e]);
	return 0;
}