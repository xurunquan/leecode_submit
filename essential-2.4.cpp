// 写一个函数，以局部静态 (local static)的 vector 存储 Pentagonal 数列元素。
// 此函数返回1个const 指针，指向该 vector。如果 vector 的容量小于指定的元素数目，就扩充 vector 的容量。
// 按下来再实现第二个函数，接受一个位置值并返回该位置上的元素，最后，撰写 main() 测试这些函数。
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
