//#include <iostream>
//#include <algorithm>
//using namespace std;

//long p[10000007] = { 0 };
//int main()
//{
//	long n = 0, ans = 0, check = 0, max = 0;
//	cin >> n;
//	for (long a = 0; a < n; a++)
//		cin >> p[a];
//	sort(p, p + n);
//	for (long a = 0; a < n; a++)//���
//	{
//		for (long b = a + 1; b < n; b++)//�е�/�յ�
//		{
//			if (p[a] == p[b])
//				continue;
//			if (p[b] - p[a] == 1)//���
//			{
//				for (long c = b + 1; c < n; c++)//�յ�
//				{
//					if (p[c] == p[b] || p[c] == p[c + 1])
//						continue;
//					else if (max == 0)
//					{
//						check = 1;
//						ans = c - a;
//						max = 1;
//						break;
//					}
//					else if (max == 1)
//					{
//						check = 1;
//						if (ans < c - a)
//							ans = c - a;
//						break;
//					}
//					a += b;//�����
//				}
//			}
//			if (check == 1)
//				break;
//		}
//		check = 0;
//	}
//	cout << ans;
//	return 0;
//}



//long mp[10000007] = { 0 }, np[10000007] = { 0 };
//int main()
//{
//	long m = 0, n = 0, ans = 0, check = 0;//m->�ţ�n->��
//	cin >> m;
//	for (long a = 0; a < m; a++)
//		cin >> mp[a];
//	sort(mp, mp + m);
//	cin >> n;
//	for (long a = 0; a < n; a++)
//		cin >> np[a];
//	sort(np, np + n);
//	for (long a = 0; a < m; a++)//�ų�
//	{
//		for (long b = 0; b < n; b++)
//		{
//			if (np[b] * np[b] >= mp[a])
//				break;
//			for (long c = b + 1; c < n; c++)
//			{
//				if (np[b] * np[b] + np[c] * np[c] == mp[a])
//				{
//					ans++;
//					check = 1;
//					break;
//				}
//				else if (np[c] * np[c] >= mp[a])
//				{
//					check = 1;
//					break;
//				}
//			}
//			if (check == 1)
//			{
//				check = 0;
//				break;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}



//long flw[10000007] = { 0 };
//int main()
//{
//	long n = 0, ans = 0, all = 0;
//	cin >> n;
//	for (int a = 0; a < n; a++)
//	{
//		cin >> flw[a];
//		if (flw[a] == 0)//��
//			all++;
//		else if (flw[a] == 0 && flw[a - 1] == 0)
//			all++;
//		else//��
//		{
//			if (all != 0 && all % 2 == 1)
//				ans += all / 2;
//			else if (all != 0 && all % 2 == 0)
//				ans += all / 2 - 1;
//			all = 0;
//		}
//	}
//	cout << ans;
//	return 0;
//}



//long cd[10000007] = { 0 };
//int main()
//{
//	long n = 0, x = 0, ans = 0;
//	cin >> n >> x;
//	for (int a = 0; a < n; a++)
//		cin >> cd[a];
//	for (int a = 0; a < n - 1; a++)
//	{
//		if (cd[a] + cd[a + 1] > x)//����
//		{
//			long eat = cd[a] + cd[a + 1] - x;
//			ans += eat;
//			if (cd[a + 1] >= eat)//��a + 1���ܳ���
//			{
//				cd[a + 1] -= eat;
//			}
//			else//�Բ���
//			{
//				eat -= cd[a + 1];
//				cd[a + 1] = 0;
//				cd[a] -= eat;
//			}
//		}
//		else
//			continue;
//	}
//	cout << ans;
//	return 0;
//}