#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n = 0, input, temp;
    vector<vector<int>> pass(7, vector<int>(n));
    for (int i = 0; i < 7; i++)
    {
        cin >> input;
        if (input < 0 || input > 10)
            return -1;
        for (int j = 0; j < input; j++)
        {
            cin >> temp;
            if (temp < 0 || temp > 9)
                return -1;
            pass[i].push_back(temp);
        }
    }

    system("pause");
    return 0;
}