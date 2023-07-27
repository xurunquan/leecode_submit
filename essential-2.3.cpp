// 将练习 2.2 的 Pentagonal 数列求值函数分离为两个函数，其中之一为 inline，用来检验元素数目是否合理。
// 如果的确合理，而且尚未被计算过，便执行第二个函数，执行实际的求值工作.
#include <iostream>
#include <vector>

using namespace std;
inline bool Pentagonal1(vector<int> v, int number)
{
    // cout << v.size() << endl;
    if (number > 100 || v.size() != 0)
        return false;
    else
        return true;
}
void Pentagonal(vector<int> &inputv, int number)
{
    if (Pentagonal1(inputv, number))
        for (int i = 1; i <= number; i++)
        {
            inputv.push_back(i * (3 * i - 1) / 2);
        }
    else
        cout << "the number is too big, please change your number." << endl;
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