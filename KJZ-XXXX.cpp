//KJZ-2101
/*#include<stdio.h>
int main()
{
	int A, B, C;
	scanf("%d %d", &A, &B);
	C = A + B;
	printf("%d", C);
	return 0;
}*/


//KJZ-2103
#include<stdio.h>
int main()
{
	int n, a, b = 1, c = 1, d = 1;
	scanf("%d", &n);
	if (n > 2)
		for (a = 3; a <= n; a++)
		{
			d = b + c;
			b = c;
			c = d;
		}
	printf("%d", d);
	return 0;
}