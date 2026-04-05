#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    cout << "欢迎使用Atbash解码、编码器！" << endl;
    string str;
    while (getline(cin, str)) {
        for (char &c : str) {
            if (c >= 'a' && c <= 'z') c = 'a' + 'z' - c;
            else if (c >= 'A' && c <= 'Z') c = 'A' + 'Z' - c;
        }
        cout << endl<< str << endl;
    }
    return 0;
}