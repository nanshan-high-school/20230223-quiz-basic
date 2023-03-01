#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
    string gmail, password, ending, number;
    int a = 0, c = 0, d = 0, e = 0, f = 0;
    bool b = true;
    cin >> gmail;
    number = gmail.substr(1, 6);
    ending = gmail.substr(7);
    for (int i=0 ; i<6; i++){
        if ('0'<=number[i] && number[i]<='9'){
        a++;
            }
    }
    if (a!=6 || gmail[0]!='a' || ending!="@gmail.com") {
    cout << "不符合格式，重打\n";
    int a = 0;
    cin >> gmail;
    number = gmail.substr(1, 6);
    ending = gmail.substr(7);
    for (int i=0 ; i<6; i++){
        if ('0'<=number[i] && number[i]<='9'){
        a++;
            }
        }
        a=0;
    }
    cout << "符合了，請輸入密碼\n";
    
    cin >> password;
        while(password.length()<8) {
        cout << "失敗，因為長度太短，請重新輸入密碼\n";
        cin >> password;
    }
    for (int k=0; k<password.size(); k++){
        if (ispunct(password[k]))
            c++;
        if (isupper(password[k]))
            d++;
        if (islower(password[k]))
            e++;
        if (isdigit(password[k]))
            f++;
        }
            if (c+d+e+f == password.size() && c!=0 && d!=0 && e!=0 && f!=0)
                cout << "好樣的，密碼強度是強@@\n";
            else
                cout << "密碼太弱囉，不過你開心就好\n";
}
