#include <iostream>
#include <list>

using namespace std;

int main()
{
    int time, num;
    list<int>::iterator it;
    cin >> time;
    while (time--)
    {
        cin >> num;
        int k = 2;
        list<int> soldier;
        for (int i = 1; i <= num; i++)
            soldier.push_back(i);
        while (soldier.size() > 3)
        {
            int cnt = 1;
            for (it = soldier.begin(); it != soldier.end();)
            {
                if (cnt++ % k == 0)
                    it = soldier.erase(it);
                // �󲿷ֵ����ݽṹʹ��erase���ɾ����λ�ã����ҷ�����һ��Ԫ�ص�λ�õ���������������Խ��
                else
                    it++;
            }
            k = (k == 2 ? 3 : 2);
        }
        for (it = soldier.begin(); it != soldier.end(); it++)
            cout << *it << ' ';
        cout << endl;
    }
    system("pause");
    return 0;
}