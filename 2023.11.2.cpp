#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int main()
{
	unordered_map<string, long> word;
	string s1, s2;
	long n = 0, m = 0;
	cin >> s1;
	for (n = 0, cin >> s2; s2.end()-1 != " "; ++n)
	{
		if (s1 == s2)
		{
			if (word[s1] == 0)
			{
				m = n;
			}
			word[s1]++;
		}
	}
	unordered_map<string, long>::iterator it;
	cout << it->second << " " << m;
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