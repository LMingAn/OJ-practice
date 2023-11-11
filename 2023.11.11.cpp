//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;





//string d = "3 4 5 6 7 8 9 X J Q K A 2 M F", s = "33 44 55 66 77 88 99 XX JJ QQ KK AA 22 MM FF";
//int com(string sd, string jk)
//{
//	int SD = 0, JK = 0;
//	if (sd == "MF" || sd[0] == sd[1])
//		return 1;
//	else if(jk == "MF" && sd[0] == sd[1])
//		return 0;
//	else
//	{
//		SD = max(d.find(sd[0]), d.find(sd[1]));
//		if (jk[0] == jk[1])
//			return 1;
//		JK = max(d.find(jk[0]), d.find(jk[1]));
//		if (SD > JK)
//			return 1;
//		else
//			return 0;
//	}
//}
//
//int main()
//{
//	long t = 0;
//	int ans[50626] = { 0 };
//	string sd, jk;
//	cin >> t;
//	for (long a = 0; a < t; ++a)
//	{
//		cin >> sd >> jk;
//		ans[a] = com(sd, jk);
//	}
//	for (long a = 0; a < t; ++a)
//	{
//		if (ans[a] == 1)
//			cout << "ShallowDream" << endl;
//		else
//			cout << "Joker" << endl;
//	}
//	return 0;
//}



//long pri(long w)
//{
//	long m = w, d = w, y = w;
//	if (w >= 1000)
//	{
//		if (w == 1111)
//			return 0;
//		m = w - w / 10;
//		d = w - 150;
//		if (d > m)
//			return m;
//		else
//			return d;
//	}
//	else if (w >= 500)
//	{
//		m = w - w / 10;
//		return m;
//	}
//	else
//	{
//		y = w - w / 20;
//		return y;
//	}
//}
//
//int main()
//{
//	long n = 0, w = 0, sum = 0;
//	cin >> n;
//	for (long a = 0; a < n; ++a)
//	{
//		cin >> w;
//		sum += pri(w);
//	}
//	cout << sum;
//	return 0;
//}