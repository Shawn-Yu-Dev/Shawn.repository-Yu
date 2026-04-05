#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
    int a;
    cout << "您好，欢迎使用本计算器。是否为您提供教程？  ";
    cin >> a;
    if (a==1){
        cout << "1.请勿输入任何字母（否则会崩溃）" << endl;
        cout << "2.采用long double,放心使用"<< endl;
    }
    cout << "那么，请按任意数字键开始计算吧!   ";
    int b ;
    cin >> b ;
    cout << "计算次数：";
    int c ;
    cin >> c ;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i=0;i < c;i++) {
        cout << "第" << i+1 << "次" << endl;
        cout << "算式：";
        long double d,e ;
        char f;
        if (!(cin >> d >> f >> e)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "输入格式错误，请重新输入！" << endl;
            i--;
            continue;
        }
        cout << "\033[A\r算式：" << d << f << e << "=";
        cout << "   ";
        if (f == '+'){
            cout << d+e ;
        }else if (f=='-') {
            cout << d-e ;
        }else if (f=='*') {
            cout << d*e ;
        }else if (f=='/') {
            if (e==0) {
                cout << "错误：除数不可为0！";
                i--;
                continue;
            }
            cout << d/e ;
        }
        cout << endl << endl;
    }
    return 0;
}
