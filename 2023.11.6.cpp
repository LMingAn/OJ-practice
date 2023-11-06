#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<long> num, ans;
	long n = 0, m = 0, a = 0, q = 0;
	cin >> n;//´ý²é
	cin >> m;//²é
	for (int x = 0; x < n; ++x)
	{
		cin >> a;
		num.push_back(a);
	}
	for (int x = 0; x < m; ++x)
	{
		cin >> a;
		ans.push_back(a);
	}
	long left = 0, right = n - 1, mid = 0, check = 0;
	while (left <= right && check < m)
	{
		mid = (left + right) / 2;
		if (num[mid] == ans[check])
		{
			cout << mid + 1 << " ";
			check++;
			left = 0, right = n - 1, mid = 0;
		}
		else if (num[mid] > ans[check])
		{
			right = mid;
			mid = left + (right - left) / 2;
		}
		else
		{
			left = mid;
			mid = left + (right - left) / 2;
		}
	}
	if (left > right || check > m)
		cout << -1 << " ";
	return 0;
}