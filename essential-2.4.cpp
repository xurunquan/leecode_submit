// дһ���������Ծֲ���̬ (local static)�� vector �洢 Pentagonal ����Ԫ�ء�
// �˺�������1��const ָ�룬ָ��� vector����� vector ������С��ָ����Ԫ����Ŀ�������� vector ��������
// ��������ʵ�ֵڶ�������������һ��λ��ֵ�����ظ�λ���ϵ�Ԫ�أ����׫д main() ������Щ������
#include <iostream>
#include <vector>

using namespace std;

const vector<int> *Pentagonal(int number)
{
    static vector<int> local_vec;
    int vsize = local_vec.size();
    if (vsize < number)
        for (int i = vsize + 1; i <= number; i++)
            local_vec.push_back(i * (3 * i - 1) / 2);
    return &local_vec;
}
int position_out(vector<int> *vec)
{
}
int main()
{
    int number;
    while (1)
    {
        cin >> number;
        vector<int> vec = *Pentagonal(number);
        // cout << vec.size() << "-=" << endl;
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << endl;
    }
}
