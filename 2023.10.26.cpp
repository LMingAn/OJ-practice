#include<iostream>
#include<vector>
#include<cstdlib>//第一题用，取绝对值
using namespace std;


//第一题
/*
题目描述
CSC集训队算法组的同学有很多，每个同学都有一个固定的学号，每个学号都是一个11位的数，现在要求计算给定的一组同学中，相隔最近的同学有几个。

输入格式
输入第一行为同学的个数N

第二行为N个同学的学号

输出格式
输出为一个整数表示最近的同学之间有几个同学

输入输出样例
输入 #1复制
5

12200050999 12200050909 12200050001 12200010999 12200021219
输出 #1复制
89

说明/提示
最近的两个同学学号为：12200050999 12200050909 二者之间存在89个数
*/
//int main()
//{
//	long long N = 0, temp = 0;
//	cin >> N;
//	vector<long long> num;
//	for (long n = 0; n < N; ++n)
//	{
//		cin >> temp;
//		num.push_back(temp);
//	}
//	long long min = num[0];
//	for (long n = 0; n < N; ++n)
//	{
//		for (long m = n + 1; m < N; ++m)
//		{
//			if (min > abs(num[n] - num[m]))
//				min = abs(num[n] - num[m]);
//		}
//	}
//	cout << min - 1;
//	return 0;
//}



//第三题
//题目背景
/*
CSCers study hard.Every one will get rich quickly.

题目描述
Several classmates at CSC are enthusiastic about learning and strive to achieve good scores in every exam.For each exam, if they perform better than the previous one, they will receive ¥100, and if they perform better than the previous two, they will receive ¥200, and so on.

输入格式
Enter an integer N in the first line to represent the number of exams.

Enter N numbers in the second line to represent each exam score.

输出格式
An integer M to represent the total money.

输入输出样例
输入 #1
5
98 95 97 94 96
输出 #1
200
*/
//int main()
//{
//	long N = 0, num[100000] = { 0 };
//	cin >> N;
//	for (int n = 0; n < N; ++n)//考试次数
//		cin >> num[n];
//	long mon = 0, test = 0;
//	for (int n = 1; n < N; ++n)//本次考试
//	{
//		test = num[n];
//		for (int m = n - 1; m >= 0; --m)//以往考试
//		{
//			if (test > num[m])
//				mon += 100;
//			else
//				break;
//		}
//	}
//	cout << mon << endl;
//	return 0;
//}



//第二题
/*
题目背景
CSC算法组想要看看谁最会画画，所以出了一道艺考题。

题目描述
给定一个正方形和字符，以该正方形的四条边的中点为顶点，以给定的字符打印出这四个顶点包围的区域。

输入格式
第一行一个奇数表示正方形边长N(N≥1) 第二行一个字符c

输出格式
包围的区域

输入输出样例
输入 #1
3
o
输出 #1
 o
ooo
 o
*/
//int main()
//{
//	long n = 0, cen = 0;
//	char c = 0;
//	cin >> n;
//	cin >> c;
//	cen = n / 2 + 1;
//	for (long a = 1; a <= n; ++a)//行遍历
//	{
//		if (a < cen)
//		{
//			for (long b = 1; b <= n; ++b)//列
//			{
//				if (b >= (cen - a + 1) && b <= (cen + a - 1))
//					cout << c;
//				else
//					cout << " ";
//			}
//		}
//		else if (a == cen)
//		{
//			for (long b = 1; b <= n; ++b)
//				cout << c;
//		}
//		else
//		{
//			for (long b = 1; b <= n; ++b)//列
//			{
//				if (b >= (cen - n + a) && b <= (cen + n - a))
//					cout << c;
//				else
//					cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
