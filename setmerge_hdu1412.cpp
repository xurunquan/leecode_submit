#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, m, temp;
    set<int> result; // set�����Դ������벻�ظ�����
    cin >> n >> m;
    result.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        result.insert(temp);
    }
    for (int j = 0; j < m; j++)
    {
        cin >> temp;
        result.insert(temp);
    }
    for (set<int>::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    system("pause");
    return 0;
}