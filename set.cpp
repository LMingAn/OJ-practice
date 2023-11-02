//#include <iostream>
//#include <set>
//using namespace std;

//set - insert与遍历
//int main()
//{
//    set<int> s;
//    int n = 0, a = 0;
//    cin >> n;
//    for (int m = 0; m < n; ++m)
//    {
//        cin >> a;
//        s.insert(a);
//    }
//    set<int>::iterator it = s.find(4);
//    if (it != s.end())
//        s.erase(it);
//    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
//    {
//        if (it != s.begin())
//            cout << " ";
//        cout << *it;
//    }
//    return 0;
//}


//set-find与erase迭代器
//int main()
//{
//    set<int> s;
//    int n = 0, a = 0, x = 0;
//    cin >> n;
//    cin >> x;
//    for (int m = 0; m < n; ++m)
//    {
//        cin >> a;
//        s.insert(a);
//    }
//    set<int>::iterator it = s.find(x);
//    if (it != s.end())
//        s.erase(it);
//    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
//    {
//        if (it != s.begin())
//            cout << " ";
//        cout << *it;
//    }
//    return 0;
//}


/*
set-erase指定元素
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n = 0, x = 0, a = 0;
    cin >> n;
    cin >> x;
    for (int m = 0; m < n; ++m)
    {
        cin >> a;
        s.insert(a);
    }
    s.erase(x);
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        if (it != s.begin())
            cout << " ";
        cout << *it;
    }
    return 0;
}
*/


/*
set-clear与size
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n = 0, a = 0;
    cin >> n;
    for (int m = 0; m < n; ++m)
    {
        cin >> a;
        s.insert(a);
    }
    s.clear();
    cout << s.size();
    return 0;
}
*/