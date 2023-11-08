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
P2249 【深基13.例1】查找
# 【深基13.例1】查找

## 题目描述

输入 $n$ 个不超过 $10^9$ 的单调不减的（就是后面的数字不小于前面的数字）非负整数 $a_1,a_2,\dots,a_{n}$，然后进行 $m$ 次询问。对于每次询问，给出一个整数 $q$，要求输出这个数字在序列中第一次出现的编号，如果没有找到的话输出 $-1$ 。

## 输入格式

第一行 $2$ 个整数 $n$ 和 $m$，表示数字个数和询问次数。

第二行 $n$ 个整数，表示这些待查询的数字。

第三行 $m$ 个整数，表示询问这些数字的编号，从 $1$ 开始编号。

## 输出格式

输出一行，$m$ 个整数，以空格隔开，表示答案。

## 样例 #1

### 样例输入 #1

```
11 3
1 3 3 3 5 7 9 11 13 15 15
1 3 6
```

### 样例输出 #1

```
1 2 -1
```

## 提示

数据保证，$1 \leq n \leq 10^6$，$0 \leq a_i,q \leq 10^9$，$1 \leq m \leq 10^5$

本题输入输出量较大，请使用较快的 IO 方式。
*/
/*int main()
{
	vector<long> num;
	long n = 0, m = 0, a = 0, ans = 0;
	cin >> n;//待查
	cin >> m;//查询次数
	for (int x = 0; x < n; ++x)
	{
		cin >> a;
		num.push_back(a);
	}
	for (int x = 0; x < m; ++x)
	{
		cin >> a;//查询数
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