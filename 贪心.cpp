//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//
//}



//int main()
//{
//	long num[10] = { 0 };
//	string ans;
//	for (int a = 0; a < 10; a++)
//		cin >> num[a];
//	for (int a = 9; a >= 0; a--)
//		for (; num[a] > 0; num[a]--)
//			ans += 48 + a;
//	if (ans[0] == 48)
//		ans = 48;
//	cout << ans;
//	return 0;
//}



//int main()
//{
//	long s[10004] = { 0 }, t[10004] = { 0 }, n = 0, m = 0, ans = 0;
//	cin >> n >> m;
//	for (long a = 0; a < n; a++)
//		cin >> s[a];
//	for (long a = 0; a < m; a++)
//		cin >> t[a];
//	sort(s, s + n);
//	sort(t, t + m);
//	for (long a = 0; a < n; a++)
//	{
//		for (long b = 0; b < m; b++)
//		{
//			if (s[a] <= t[b] && s[a] != -1 && t[b] != -1)
//			{
//				ans++;
//				s[a] = t[b] = -1;
//				break;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}



//long wt[100005] = { 0 };
//int main()
//{
//	long n = 0, w = 0, ans = 0, tw = 0;
//	cin >> n >> w;
//	for (int a = 0; a < n; ++a)
//		cin >> wt[a];
//	sort(wt, wt + n);//wt从小到大排序
//	int a = 0;
//	tw += wt[a];
//	while (tw <= w)//加成量小于等于承受量
//	{
//		ans++;
//		a++;
//		tw += wt[a];
//	}
//	tw -= wt[a];
//	cout << ans << " " << tw;
//	return 0;
//}