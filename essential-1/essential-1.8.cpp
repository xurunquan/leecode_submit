// 1.4节的 switch 语句让我们得以根据用户答错的次数提供不同的安慰语句。
// 请以 array 储存 4种不同的字符申信息，并以用户答错的次数作为 array 的索引值，以此方式来显示安慰语句，

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