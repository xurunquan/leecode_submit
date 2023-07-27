// 撰写一个程序，使之能够询问用户的姓名，并读取用户所输人的内容，请确保用户输人的名称长度大于两个字符。
// 如果用户的确输人了有效名称，就响应一些信息。
// 请以两种方式实现操作:第一种是使用C-style字符字符串，第二种则是使用string 对象

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