// ʹ��������ֵı༭���ߣ���������(�����)���ֲ����̣�Ȼ��׫дһ������
// �����������ļ���������ÿ���ֶ���ȡ��һ�� vector<string>�����У����� vector����������ʾ�� cout.
// Ȼ�����÷����㷨 sort()����������������
// #include <algorithm>
// sort( container.begin(), container,end() ):
// �ٽ������Ľ���������һ���ļ���

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