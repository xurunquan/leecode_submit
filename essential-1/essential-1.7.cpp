// 使用你最称手的编辑工具，输人两行(或更多)文字并存盘，然后撰写一个程序，
// 开启该文字文件，将其中每个字都读取到一个 vector<string>对象中，历该 vector，将内容显示到 cout.
// 然后利用泛型算法 sort()，对所有文字排序
// #include <algorithm>
// sort( container.begin(), container,end() ):
// 再将排序后的结果输出到另一个文件。

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream ifile("file-1.7.txt");
    vector<string> contents;
    string content_file_out;
    if (!ifile)
        cerr << "can not open the file." << endl;
    else
        while (ifile >> content_file_out)
            contents.push_back(content_file_out);
    cout << "The vector before sort:" << endl;
    for (int i = 0; i < contents.size(); i++)
        cout << contents[i] << endl;
    sort(contents.begin(), contents.end());
    // cout << "\nThe vector after sort:" << endl;
    // for (int i = 0; i < contents.size(); i++)
    //     cout << contents[i] << endl;
    ofstream ofile("file-1.7-output.txt");
    if (!ofile)
        cerr << "can not open the file." << endl;
    else
    {
        cout << "\nThe vector after sort:" << endl;
        for (int i = 0; i < contents.size(); i++)
        {
            cout << contents[i] << endl;
            ofile << contents[i] << endl;
        }
        cout << "\nwrite file successful" << endl;
    }
    system("pause");
    return 0;
}