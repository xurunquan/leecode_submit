#include <iostream>
#include <deque>
#include <map>

using namespace std;

void read(int &x)
{
    char ch = getchar();
    x = 0;
    for (; ch < '0' || ch > '9'; ch = getchar())
        ;
    for (; ch >= '0' && ch <= '9'; ch = getchar())
        x = x * 10 + ch - '0';
}
int main()
{
    int n, q;
    cin >> n >> q;
    map<int, deque<int>> m;
    int ins, u, w, v, val;
    m.clear();
    while (q--)
    {
        read(ins);
        read(u);
        read(w);
        // cout << ins << ' ' << u << ' ' << w << ' ' << endl;
        switch (ins) // switch�е�case ע��һ��һ��Ҫ��break;!!!!!!!!!!!!
        {
        case 1:
            read(val);
            if (w == 0)
                m[u].push_front(val);
            else if (w == 1)
                m[u].push_back(val);
            break;
        case 2:
            if (!m[u].empty())
            {
                if (w == 0)
                {
                    cout << m[u].front() << endl;
                    m[u].pop_front();
                }
                else if (w == 1)
                {
                    cout << m[u].back() << endl;
                    m[u].pop_back();
                }
            }
            else
                cout << -1 << endl;
            break;
        case 3:
            read(v); // �˴� u=u,w=v,v=w;
            if (v == 0)
            {
                m[u].insert(m[u].end(), m[w].begin(), m[w].end());
                m[w].clear();
            }
            else if (v == 1)
            {
                m[u].insert(m[u].end(), m[w].rbegin(), m[w].rend());
                // rbegin-rend��ʾ������������ٽ��в������
                m[w].clear();
            }
            break;
        default:
            break;
        }
    }
    system("pause");
    return 0;
}