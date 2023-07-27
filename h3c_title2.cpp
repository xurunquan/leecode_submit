#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<int> temp;
    cin >> s;
    int sum = 0, t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            t = 0;
            for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++)
            {
                t = t * 10 + s[i] - '0';
            }
            if (find(temp.begin(), temp.end(), t) == temp.end())
            {
                temp.push_back(t);
                sum += t;
            }
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}