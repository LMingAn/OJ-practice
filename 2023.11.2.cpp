#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
������
��Ŀ����
Given a word, please output its number of occurrences and first occurrence position in the given string.

�����ʽ
First line is a string containing only letters, representing a given word.

Second line is a string that may only contain letters and spaces, representing the given string.

�����ʽ
One line, if a given word is found in the string, two integers are output, separated by a space, indicating the number of times the word appears in the string and the position of the first occurrence. If the word does not appear in the string, output -1 directly.

�����������
���� #1����
to
to be or not to be is a question
��� #1����
2 0
���� #2����
to
to be or not to be is a together question
��� #2����
2 0
˵��/��ʾ
�����ַ���ʱ��

string s;

Ȼ��ʹ��

getline(cin, s);

���

cin >> s;

�������Ա�֤����ո�
*/
int main()
{
	string s1, s2;
	long n = 0, m = 0, nm = 0;//nΪ�״α�����mΪ���ִ�����nmΪ��̬�״γ��ֵص�
	cin >> s1;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);//��Сдת�� -- ת��ΪСд
	getchar();
	s1 += " ";
	getline(cin, s2);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	s2 += " ";
	nm = n = s2.find(s1);//�״α�����ѯ
	while (s2.size() != 0 && n != -1)//�ظ�������ѯ
	{
		nm = s2.find(s1);
		if (nm == -1)
			break;
		else
		{
			++m;
			s2.erase(0, nm + s1.size());
		}
	}
	if (n == -1)
		cout << n;
	else
		cout << m << " " << n;
	return 0;
}


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