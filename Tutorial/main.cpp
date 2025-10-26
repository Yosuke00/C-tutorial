#include<iostream>
#include<string>

using namespace std;

int main() {
    string s,t;
    t = "入力された文字列は、";
    cout << "文字列を入力:";
    cin >> s;
    cout << t+s << "です" << endl;
    return 0;    
}

// int main() {
//     int a;
//     cin >> a;
//     cout << "a=" << a << endl;
//     return 0;
// }

// int main() {
//     cout << "HelloWorld." << endl;
// }