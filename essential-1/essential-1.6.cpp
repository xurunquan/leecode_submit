// ׫дһ�����򣬴ӱ�׼����װ�ö�ȡһ����������������������������� array �� vector��Ȼ��
// ������������������ȡ��ֵ�ܺͣ����ܺͼ�ƽ��ֵ�������׼���װ�á�
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0;
    int input1[20];
    vector<int> input2(20);
    cout << "please enter five number for input1: " << endl;
    for (int i = 0; i < 5; i++)
        cin >> input1[i];
    cout << "please enter five number for input2: " << endl;
    for (int j = 0; j < 5; j++)
        cin >> input2[j];
    for (int k = 0; k < 5; k++)
    {
        sum1 += input1[k];
        sum2 += input2[k];
    }
    cout << "sum1 = " << sum1 << "and the mean of sum1 = " << sum1 / 5 << endl;
    cout << "sum2 = " << sum2 << "and the mean of sum2 = " << sum2 / 5 << endl;
    system("pause");
    return 0;
}