//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;

/*
第三题
题目描述
Given a word, please output its number of occurrences and first occurrence position in the given string.

输入格式
First line is a string containing only letters, representing a given word.

Second line is a string that may only contain letters and spaces, representing the given string.

输出格式
One line, if a given word is found in the string, two integers are output, separated by a space, indicating the number of times the word appears in the string and the position of the first occurrence. If the word does not appear in the string, output -1 directly.

输入输出样例
输入 #1复制
to
to be or not to be is a question
输出 #1复制
2 0
输入 #2复制
to
to be or not to be is a together question
输出 #2复制
2 0
说明/提示
读入字符串时：

string s;

然后使用

getline(cin, s);

替代

cin >> s;

这样可以保证读入空格。
*/
/*
int main()
{
	string s1, s2;
	long n = 0, m = 0, nm = 0;//n为首次遍历，m为出现次数，nm为动态首次出现地点
	getline(cin, s1);
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);//大小写转化 -- 转化为小写
	s1 = " " + s1 + " ";
	getline(cin, s2);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	s2 = " " + s2 + " ";
	nm = n = s2.find(s1);//首次遍历查询
	while (s2.size() != 0 && n != -1)//重复遍历查询
	{
		nm = s2.find(s1);
		if (nm == -1)
			break;
		else
		{
			++m;
			s2.erase(0, nm + s1.size() - 1);
		}
	}
	if (n == -1)
		cout << n;
	else
		cout << m << " " << n;
	return 0;
}
*/

/*
第二题
题目描述
听说CSC算法组的余同学准备请大家喝奶茶，但是他发现在账单中，除了某个口味奶茶只点了一杯，其余都点了偶数杯，他十分好奇谁的口味与众不同，他准备找出这个小机灵鬼点的奶茶。

输入格式
第一行N表示奶茶的杯数（N为奇数且N<1e7） 第二行输入N杯奶茶的id

输出格式
独一无二的那杯奶茶id

输入输出样例
输入 #1复制
5
1 2 2 1 3
输出 #1复制
3
*/
//int main()
//{
//	unordered_map<int, int> id;
//	int ID;
//	long N = 0, n = 0, m1 = 0;
//	cin >> N;
//	for (n = 0; n < N; ++n)
//	{
//		cin >> ID;
//		id[ID]++;
//	}
//	unordered_map<int, int>::iterator it;
//	unordered_map<int, int>::iterator m;
//	for (it = id.begin(); it != id.end(); ++it)
//	{
//		if (it->second % 2 != 0)
//			m = it;
//	}
//	cout << m->first;
//	return 0;
//}


/*
第一题
题目描述
CSC算法组有好几个同学经常在积分赛中夺得第一，好奇的张老师和林老师突然有天想要知道哪个同学拿第一的次数最多，并准备给他一份大大的surprise。

输入格式
第一行输入整数N（N <1e7），表示共有N次积分赛。 第二行依次输入N次积分赛第一名的名字。

输出格式
输出获得第一名次数最多的同学的名字和其获得第一名的次数，结果保证无并列情况发生。

输入输出样例
输入 #1复制
5
xiaoming lilei lihua xiaoming xiaoming
输出 #1复制
xiaoming 3
*/
//int main()
//{
//	unordered_map<string, int> s1;
//	string s2;
//	long N = 0, n = 0, m1 = 0, m2 = 0;
//	cin >> N;
//	for (n = 0; n < N; ++n)
//	{
//		cin >> s2;
//		s1[s2]++;
//	}
//	unordered_map<string, int>::iterator it;
//	unordered_map<string, int>::iterator m;
//	for (it = s1.begin(); it != s1.end(); ++it)
//	{
//		if (m1 < it->second)
//		{
//			m1 = it->second;
//			m = it;
//		}
//	}
//	cout << m->first << " " << m->second;
//	return 0;
//}