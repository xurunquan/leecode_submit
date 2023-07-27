#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, q; // n �γ� m ѧԺ q��ѯ����
    cin >> n >> m >> q;
    vector<int> si(n);                          // ��ʾ���Ϊi�Ŀγ̵Ŀ���ѧԺΪsi��
    vector<vector<int>> fij(4, vector<int>(n)); // fij=0��ʾ������i�꼶��ѧ������ѡj�γ̣�fij=1���ʾ����
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
        // ���ж��Ƿ��Լ���Ϳ���ѡ�� fij
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