// Pentagonal 数列的求值公式是 Pn=n*(3n-1)/2，借此产生 1,5,12,22,35 等元案值。
// 试定义1个函数，利用上述公式，将产生的元素置人用户传人的 vector 之中，元素数目由用户指定，
// 请检查元素数目的有效性(译注:太大则可能引发 overflow 问题)。
// 接下来写第二个函数，能够将所接获的 vector 的所有元素一一印出。
// 此函数的第二参数接受一个字符串，表示储存于 vector 内的数列的类型。
// 最后再写一个 main()，测试上述两个函数。

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