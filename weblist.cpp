#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
    string cur = "***###.acm.org/", ins;
    stack<string> backward, forward;
    while (1)
    {
        cin >> ins;
        if (ins == "quit")
            break;
        else if (ins == "visit")
        {
            backward.push(cur);
            cin >> cur;
            while (!forward.empty())
                forward.pop();
            cout << cur << endl;
        }
        else if (ins == "back" && !backward.empty())
        {
            forward.push(cur);
            cur = backward.top();
            backward.pop();
            cout << cur << endl;
        }
        else if (ins == "forward" && !forward.empty())
        {
            backward.push(cur);
            cur = forward.top();
            forward.pop();
            cout << cur << endl;
        }
        else
            cout << "ignored" << endl;
    }
    system("pause");
    return 0;
}