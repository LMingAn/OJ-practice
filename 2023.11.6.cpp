#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	long long a = 0, B = 0, b = 0, p = 0, ans = 1, x = 0, s = 0;
	cin >> a >> b >> p;
	x = a;
	B = b;
	while (b > 0)
	{
		if (b & 1)
			ans *= x;
		x *= x;
		b >>= 1;
	}
	s = ans % p;
	cout << a << "^" << B << " " << "mod" << " " << p << "=" << s;
	return 0;
}


/*
P2249 �����13.��1������
# �����13.��1������

## ��Ŀ����

���� $n$ �������� $10^9$ �ĵ��������ģ����Ǻ�������ֲ�С��ǰ������֣��Ǹ����� $a_1,a_2,\dots,a_{n}$��Ȼ����� $m$ ��ѯ�ʡ�����ÿ��ѯ�ʣ�����һ������ $q$��Ҫ�������������������е�һ�γ��ֵı�ţ����û���ҵ��Ļ���� $-1$ ��

## �����ʽ

��һ�� $2$ ������ $n$ �� $m$����ʾ���ָ�����ѯ�ʴ�����

�ڶ��� $n$ ����������ʾ��Щ����ѯ�����֡�

������ $m$ ����������ʾѯ����Щ���ֵı�ţ��� $1$ ��ʼ��š�

## �����ʽ

���һ�У�$m$ ���������Կո��������ʾ�𰸡�

## ���� #1

### �������� #1

```
11 3
1 3 3 3 5 7 9 11 13 15 15
1 3 6
```

### ������� #1

```
1 2 -1
```

## ��ʾ

���ݱ�֤��$1 \leq n \leq 10^6$��$0 \leq a_i,q \leq 10^9$��$1 \leq m \leq 10^5$

��������������ϴ���ʹ�ýϿ�� IO ��ʽ��
*/
/*int main()
{
	vector<long> num;
	long n = 0, m = 0, a = 0, ans = 0;
	cin >> n;//����
	cin >> m;//��ѯ����
	for (int x = 0; x < n; ++x)
	{
		cin >> a;
		num.push_back(a);
	}
	for (int x = 0; x < m; ++x)
	{
		cin >> a;//��ѯ��
		long left = 0, right = n - 1, mid = (left + right) / 2;
		while (left < right)
		{
			if (num[mid] >= a)
				right = mid;
			else
				left = mid + 1;
			mid = left + (right - left) / 2;
		}
		if (num[mid] == a)
			cout << mid + 1 << " ";
		else
			cout << -1 << " ";
	}
	return 0;
}*/