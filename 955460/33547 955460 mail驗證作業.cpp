#include <iostream>
using namespace std;
int main() {
     string mail;
     cin >> mail;
     string maxx;
     string secret;
     cin >> secret;
     int len;
     len = secret.length();
     int level;
     level = 0;
if(mail[0] == 'a'&& mail[7] == '@' && mail[8] == 'g'&& mail[9] == 'm'&& mail[10] == 'a'&& mail[11] == 'i'&& mail[12] == 'l'&& mail[13] == '.'&& mail[14] == 'c'&& mail[15] == 'o'&& mail[16] == 'm'&& mail[1] - 48 > -1 && mail[2] - 48 > -1 && mail[3] - 48 > -1 && mail[4]- 48 > -1 && mail[5] - 48 > -1 && mail[6] - 48 > -1){
cout << "gmail格式正確";

}
else{cout << "gmail格式錯誤";}
    
if(len > 7){cout << "密碼格式正確";
    }
else{
    cout <<"密碼格式錯誤(備註:密碼等級無效)";
    
}
int number;
for(number = 0; number <= len; number++){
if(secret[number]>= 65 && secret[number]<=90){
    level += 1;
    break;}
}
for(number = 0; number <= len; number++){
if(secret[number]>= 97 && secret[number]<=122){
    level += 1;
    break;
}
    }

for(number = 0; number <= len; number++){
if(secret[number]>= 65 && secret[number]<=90){}
else if(secret[number]>= 97 && secret[number]<=122){}
else if(secret[number] >= 48 && secret[number] >= 57){}
else{
    level += 1;
    break;
}
    }
cout << "密碼等級為:" << level;
    }

