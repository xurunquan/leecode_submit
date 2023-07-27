#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, q; // n 课程 m 学院 q查询次数
    cin >> n >> m >> q;
    vector<int> si(n);                          // 表示编号为i的课程的开课学院为si；
    vector<vector<int>> fij(4, vector<int>(n)); // fij=0表示不允许i年级的学生自行选j课程，fij=1则表示允许；
    vector<vector<int>> gij(m, vector<int>(n));
    for (int i = 0; i < n; i++)
        cin >> si[i];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < n; j++)
            cin >> fij[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> gij[i][j];
    int a, b, c;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b >> c;
        // 先判断是否自己年纪可以选课 fij
        if (fij[b - 1][c - 1] == 1 && gij[a - 1][c - 1] == 1)
            cout << "Help yourself" << endl;
        else if (fij[b - 1][c - 1] != 1 && gij[a - 1][c - 1] != 1)
            cout << "Impossible" << endl;
        else
            cout << "Ask for help" << endl;
    }
    system("pause");
    return 0;
}