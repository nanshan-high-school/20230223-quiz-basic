#include <iostream>
using namespace std;
int main() {
  string gmail;
  string password;
  int password_security = 1;
  cout << "Plesae enter your Gmail." << '\n';
  cin >> gmail;
  if (gmail[0] == 'a' && gmail[1] >= '0' && gmail[1] <= '9' &&
      gmail[2] >= '0' && gmail[2] <= '9' && gmail[3] >= '0' &&
      gmail[3] <= '9' && gmail[4] >= '0' && gmail[4] <= '9' &&
      gmail[5] >= '0' && gmail[5] <= '9' && gmail[6] >= '0' &&
      gmail[6] <= '9' && gmail[7] == '@' && gmail[8] == 'g' &&
      gmail[9] == 'm' && gmail[10] == 'a' && gmail[11] == 'i' &&
      gmail[12] == 'l' && gmail[13] == '.' && gmail[14] == 'c' &&
      gmail[15] == 'o' && gmail[16] == 'm') {
    cout << "Correct gmail!!" << '\n' << "Please enter your password." << '\n';
    cin >> password;
    while (password.length() < 8) {
      cout << "Enter the password again." << '\n';
      cin >> password;
    }
    cout << "The password is safe." << '\n';
    int size = password.length();
    for (int i = 0; i < size; i++) {
      if (password[i] >= 'A' && password[i] <= 'Z') {
        password_security += 1;
        break;
      }
    }
    for (int j = 0; j < size; j++) {
      if (password[j] >= 'a' && password[j] <= 'z') {
        password_security += 1;
        break;
      }
    }
    for (int k = 0; k < size; k++) {
      if (password[k] >= '0' && password[k] <= '9') {
        password_security += 1;
        break;
      }
    }
    for (int l = 0; l < size; l++) {
      if (password[l] < '0') {
        password_security += 1;
        break;
      } else if (password[l] > '9' && password[l] < 'A') {
        password_security += 1;
        break;
      } else if (password[l] > 'Z' && password[l] < 'a') {
        password_security += 1;
        break;
      } else if (password[l] > 'z') {
        password_security += 1;
        break;
      }
    }
    cout << "password security score:" << password_security << '\n';
  } else {
    cout << "the gmail is not correct" << '\n';
  }
}