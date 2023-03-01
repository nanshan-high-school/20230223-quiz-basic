#include <iostream>
#include <string>
using namespace std;

int main() {
    char email[17];
    string password;
    cout << "請輸入email帳號: ";
    cin >> email;
    while (email[0] == 'a' && email[7] == '@' && email[8] == 'g' && email[9] == 'm' && email[10] == 'a' && email[11] == 'i' && email[12] == 'l' && email[13] == '.' && email[14] == 'c' && email[15] == 'o' && email[16] == 'm'){
        cout << "請輸入密碼: ";
        cin >> password;
        if (password.length() >= 8){
        	cout << "correct";
		}
        system("PAUSE");
    }
    cout << "Fail";
}