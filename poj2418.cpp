#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> result;
    string s;
    int count = 0;
    while (cin >> s)
    {
        result[s]++;
        count++;
        // cout << result[s] << endl;
        // cout << count << endl;
    }
    for (map<string, int>::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << it->first << ' ';
        cout.precision(4);
        cout << 100.0 * it->second / count << endl;
    }
    system("pause");
    return 0;
}