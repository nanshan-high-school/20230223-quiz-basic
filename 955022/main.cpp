#include <iostream>
using namespace std;
int main() {
  string gmail;
  cin >> gmail;

  if (gmail[0] == 'a' && gmail[1] >= '0' && gmail[1] <= '9' &&
      gmail[2] >= '0' && gmail[2] <= '9' && gmail[3] >= '0' &&
      gmail[3] <= '9' && gmail[4] >= '0' && gmail[4] <= '9' &&
      gmail[5] >= '0' && gmail[5] <= '9' && gmail[6] >= '0' &&
      gmail[6] <= '9' && gmail[7] == '@' && gmail[8] == 'g' &&
      gmail[9] == 'm' && gmail[10] == 'a' && gmail[11] == 'i' &&
      gmail[12] == 'l' && gmail[13] == '.' && gmail[14] == 'c' &&
      gmail[15] == 'o' && gmail[16] == 'm') {
    cout << "格式正確" << '\n';
  } else {
    cout << "格式錯誤!";
  }

  string password;
  cin >> password;
  if (password.length() >= 8) {
    cout << "註冊成功";
  } else {
    cout << "格式錯誤!";
  }
  return 0;
}