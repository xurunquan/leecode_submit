// 撰写一个程序，从标准输入装置读取一串整数，并将读入的整数依次置入 array 及 vector，然后
// 遍历这两种容器，求取数值总和，将总和及平均值输出至标准输出装置。
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