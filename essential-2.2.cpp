// Pentagonal ���е���ֵ��ʽ�� Pn=n*(3n-1)/2����˲��� 1,5,12,22,35 ��Ԫ��ֵ��
// �Զ���1������������������ʽ����������Ԫ�������û����˵� vector ֮�У�Ԫ����Ŀ���û�ָ����
// ����Ԫ����Ŀ����Ч��(��ע:̫����������� overflow ����)��
// ������д�ڶ����������ܹ������ӻ�� vector ������Ԫ��һһӡ����
// �˺����ĵڶ���������һ���ַ�������ʾ������ vector �ڵ����е����͡�
// �����дһ�� main()��������������������

#include <iostream>
#include <vector>

using namespace std;

void Pentagonal(vector<int> &inputv, int number)
{
    if (number > 100)
    {
        cout << "the number is too big, please change your number." << endl;
        return;
    }
    for (int i = 1; i <= number; i++)
    {
        inputv.push_back(i * (3 * i - 1) / 2);
    }
}
void display(vector<int> inputv, string type)
{
    for (int i = 0; i < inputv.size(); i++)
        cout << inputv[i] << endl;
}
int main()
{
    vector<int> vec;
    int number;
    cout << "please enter the size you want to generate:";
    cin >> number;
    Pentagonal(vec, number);
    display(vec, "int");
    system("pause");
    return 0;
}