#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    vector<string> all_n, y_name, b_name, result;
    int a, b, c;
    cin >> a >> b >> c;
    string temp;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        all_n.push_back(temp);
    }
    for (int i = 0; i < b; i++)
    {
        cin >> temp;
        y_name.push_back(temp);
    }
    for (int i = 0; i < c; i++)
    {
        cin >> temp;
        b_name.push_back(temp);
    }
    for (int i = 0; i < b; i++)
    {
        if (find(all_n.begin(), all_n.end(), y_name[i]) != all_n.end())
            if (find(b_name.begin(), b_name.end(), y_name[i]) == b_name.end())
                result.push_back(y_name[i]);
    }
    if (result.empty())
        cout << "No enemy spy!" << endl;
    else
    {
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << ' ';
        cout << endl;
    }
    system("pause");
    return 0;
}
