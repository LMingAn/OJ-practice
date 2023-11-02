/*
string-输入与输出
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int a = 0; a < s.length(); ++a)
        cout << s[a];
    return 0;
}
*/


/*
string-拼接
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    s3 = s1 + s2;
    cout << s3;
    return 0;
}
*/


/*
string-比较
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (s1 > s2)
        cout << 1;
    else if (s1 == s2)
        cout << 0;
    else
        cout << -1;
    return 0;
}
*/


/*
string-clear与length
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s.length() << " ";
    s.clear();
    cout << s.length();
    return 0;
}
*/


/*
string-insert与erase
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k1 = 0, k2 = 0;
    char c = 0;
    cin >> k1;
    cin >> c;
    cin >> k2;
    s.insert(s.begin() + k1, c);
    s.erase(s.begin() + k2);
    cout << s;
    return 0;
}
*/


/*
string-substr
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    int k = 0, len = 0;
    cin >> k;
    cin >> len;
    s2 = s1.substr(k, len);
    cout << s2;
    return 0;
}
*/


/*
string-find
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a = s1.find(s2);
    cout << a;
    return 0;
}
*/


/*
string-replace
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1;
    int k = 0, len = 0;
    cin >> k >> len >> s2;
    s3 = s1.replace(k, len, s2);
    cout << s3;
    return 0;
}
*/