/*
map-¸³ÖµÓë±éÀú
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> mp;
    int n = 0, val = 0;
    char key =0;
    cin >> n;
    for (int m = 0; m < n; ++m)
    {
        cin >> key >> val;
        mp[key] = val;
    }
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        cout << it -> first << " " << it -> second << endl;
    return 0;
}
*/