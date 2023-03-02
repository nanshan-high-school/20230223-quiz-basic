#include <iostream>
using namespace std;

int main() {
  cout << "請輸入帳號";
  string nssh;
  cin >> nssh;
  int check = 0;
  for (int i = 1; i < 6; i++) {
    if (nssh[i] != '1' && nssh[i] != '2' && nssh[i] != '3' && nssh[i] != '4' &&
        nssh[i] != '5' && nssh[i] != '6' && nssh[i] != '7' && nssh[i] != '8' &&
        nssh[i] != '9' && nssh[i] != '0') {
      check = 1;
      cout << "失敗";
      break;
    }
  }
  if (nssh[0] == 'a') {
    if (check == 0) {
      if (nssh[7] == '@' && nssh[8] == 'g' && nssh[9] == 'm' &&
          nssh[10] == 'a' && nssh[11] == 'i' && nssh[12] == 'l' &&
          nssh[13] == '.' && nssh[14] == 'c' && nssh[15] == 'o' &&
          nssh[16] == 'm') {
        cout << "請輸入密碼";
        string key;
        cin >> key;
        int use1 = 0, use2 = 0, use3 = 0, use4 = 0;
        int level = 0;
        if(key.size() > 8 || key.size() == 8) {
            level++;
            for (int i = 0; i < key.size(); i++) {
                if (key[i] > 64 && key[i] < 91 && use1 == 0) {
                    level++;
                    use1 = 1;
                }else if(key[i] > 96 && key[i] < 123 && use2 == 0) {
                    level++;
                    use2 = 1;
                }else if(key[i] > 47 && key[i] < 58 && use3 == 0) {
                    level++;
                    use3 = 1;
                } else {
                    if (use4 == 0) {
                        level++;
                        use4 = 1;
                    }
                }
            }    
            cout << level;
        }else{
          cout << "失敗";
        }
      }
    }
  } else {
    cout << "失敗";
  }
}
