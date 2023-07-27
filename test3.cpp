#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int people, times;
    cin >> people >> times;
    vector<int> aj(people);
    vector<int> out;
    for (int i = 0; i < people; i++)
    {
        cin >> aj[i];
    }
    // for (int i = 0; i < people; i++)
    //     cout << aj[i];
    int count = 0;
    while (out.size() != people)
    {
        aj[count]--;
        if (aj[count] == 0)
        {
            out.push_back(count + 1);
        }
        int time = times;
        while (time != 0)
        {
            if (count == 4)
                count = -1;
            count++;
            if (aj[count] != 0)
            {
                time--;
            }
        }
    }
    for (int i = 0; i < people; i++)
        cout << out[i];
    system("pause");
    return 0;
}