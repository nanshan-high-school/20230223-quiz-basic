#include<iostream>
using namespace std;

int main()
{
int a;
string account;
string password;
  
cin>>account;

if(account[0] == 'a' && account[7] == '@'  && account[1]<=57 && account[1]>=48 && account[2]<=57 && account[2]>=48 && account[3]<=57 && account[3]>=48 && account[4]<=57 && account[4]>=48 && account[5]<=57 && account[5]>=48 && account[6]<=57 && account[6]>=48  && account[8] == 'g' &&  account[9] == 'm'   && account[10] == 'a' && account[11] == 'i' && account[12] == 'l' && account[13] == '.' && account[14] == 'c' && account[15] == 'o' && account[16] == 'm') {
  cout<<"帳號格式正確，輸入密碼";
}
else {
  cout<<"帳號格式錯誤";
}
  

cin>>password;
if(password.length()>=8){
  cout<<"密碼格式正確";
}
else {
  cout<<"密碼格式錯誤";
}
}
