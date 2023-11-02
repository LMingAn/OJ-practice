/*
queue-push°¢front”Îback
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n = 0, a = 0;
    cin >> n;
    for (int m = 0; m < n; ++m)
    {
        cin >> a;
        q.push(a);
    }
    cout << q.front() << " " << q.back();
    return 0;
}
*/


/*
queue-pop”Îempty
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n = 0, k = 0, a = 0;
    cin >> n >> k;
    for (int m = 0; m < n; ++m)
    {
        cin >> a;
        q.push(a);
    }
    for (int m = 0; m < k; ++m)
        q.pop();
    if (q.empty() == true)
        cout << "empty queue";
    else
        cout << q.front() << " " << q.back();
    return 0;
}
*/