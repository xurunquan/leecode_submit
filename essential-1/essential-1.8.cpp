// 1.4�ڵ� switch ��������ǵ��Ը����û����Ĵ����ṩ��ͬ�İ�ο��䡣
// ���� array ���� 4�ֲ�ͬ���ַ�����Ϣ�������û����Ĵ�����Ϊ array ������ֵ���Դ˷�ʽ����ʾ��ο��䣬

#include <iostream>

using namespace std;
int main()
{
    int number = 54, num_store, fcount = 0;
    bool answer = false;
    cout << " please try to find the number." << endl;
    while (!answer)
    {
        cin >> num_store;
        if (num_store != number)
        {
            fcount++;
            switch (fcount % 4)
            {
            case 1:
                cout << "error meassage one." << endl;
                break;
            case 2:
                cout << "error meassage two." << endl;
                break;
            case 3:
                cout << "error meassage three." << endl;
                break;
            case 0:
                cout << "error meassage four." << endl;
                break;
            default:
                break;
            }
        }
        else
        {
            cout << "answer is correct." << endl;
            answer = true;
        }
    }
    system("pause");
    return 0;
}