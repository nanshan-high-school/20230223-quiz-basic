#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string email;
    string password;
    while (1) {
        cout << "Email: ";
        cin >> email;
        if ((email[0] == 'a') && (('0' <= (email[1])) && ((email[1]) <= '9')) && (email[2] == '5') && ((email[3] == '5') || (email[3] == '0')) && (('0' <= (email[4])) && ((email[4]) <= '9')) && (('0' <= (email[5])) && ((email[5]) <= '9')) && (('0' <= (email[6])) && ((email[6]) <= '9')) && (email[7] == '@') && (email[8] == 'g') && (email[9] == 'm') && (email[10] == 'a') && (email[11] == 'i') && (email[12] == 'l') && (email[13] == '.') && (email[14] == 'c') && (email[15] == 'o') && (email[16] == 'm')) {
            cout << "Email Valid" << endl << endl;
            break;
        } else {
            cout << "Email Invalid" << endl;
        }
    }
    while (1) {
        cout << "Password: ";
        cin >> password;
        if (8 <= password.length()) {
            cout << "Password Valid" << endl;
            break;
        } else {
            cout << "Password Invalid (At least 8 characters)" << endl;
        }
    }
}