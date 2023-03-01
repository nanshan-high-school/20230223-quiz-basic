#include <iostream>
using namespace std;

int main() {
    string mail, password;
    int count = 0, level1 = 0, level2 = 0, level3 = 0, level4 = 0, level;
    cout << "請輸入帳號";
    cin >> mail;
    if (mail[0] != 'a') {
        count++;
    }
    for (int i = 1; i < 7; i++) {
        if ((mail[i] - '0') < 0 || (mail[i] - '0') > 9) {
            count++;
        }
    }
    if (mail[7] != '@' || mail[8] != 'g' || mail[9] != 'm' || mail[10] != 'a' || mail[11] != 'i' || mail[12] != 'l' || mail[13] != '.' || mail[14] != 'c' || mail[15] != 'o' || mail[16] != 'm') {
        count++;
    }
    if (count != 0) {
        cout << "失敗";
    } else {
        cout << "請輸入密碼";
        cin >> password;
        if (password.size() >= 8) {
            for (int i = 0; i < password.size(); i++) {
                if (password[i] >= 48 && password[i] <= 57) {
                    level1 = 1;
                } else if (password[i] >= 65 && password[i] <= 90) {
                    level2 = 1;
                } else if (password[i] >= 97 && password[i] <= 122) {
                    level3 = 1;
                } else {
                    level4 = 1;
                } 
            }
            level = level1 + level2 + level3 + level4 + 1;
            cout << level;
        } else {
            cout << 0;
        }
    }
}
