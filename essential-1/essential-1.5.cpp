// ׫дһ������ʹ֮�ܹ�ѯ���û�������������ȡ�û������˵����ݣ���ȷ���û����˵����Ƴ��ȴ��������ַ���
// ����û���ȷ��������Ч���ƣ�����ӦһЩ��Ϣ��
// �������ַ�ʽʵ�ֲ���:��һ����ʹ��C-style�ַ��ַ������ڶ�������ʹ��string ����

#include <iostream>

using namespace std;

int main()
{
    char name1[20];
    string name2;
    cout << "please enter your name(the length of name must bigger than 2)" << endl;
    cin >> name1;
    cout << "store by name1:" << name1 << endl;
    cin >> name2;
    cout << "store by name2:" << name2 << endl;
    system("pause");
    return 0;
}