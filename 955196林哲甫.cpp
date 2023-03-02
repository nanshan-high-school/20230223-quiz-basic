#include <iostream>
using namespace std;
//是否有數字
int num(string code){
  int i;
  for(i=0;i<code.length();i++){
    if (int(code[i])>=48 && int(code[i])<=57){
      return 1;
    }
  }
  return 0;
}

//是否有大寫
int big(string code){
  int i;
  for(i=0;i<code.length();i++){
    if (int(code[i])>=65 && int(code[i])<=90){
      return 1;
    }
  }
  return 0;
}

//是否有小寫
int small(string code){
  int i;
  for(i=0;i<code.length();i++){
    if (int(code[i])>=97 && int(code[i])<=122){
      return 1;
    }
  }
  return 0;
}

//是否有特殊字元
int sp(string code){
  int i;
  for(i=0;i<code.length();i++){
    if ((int(code[i]<48)) || (int(code[i])>57 && int(code[i])<65) || (int(code[i])>90 && int(code[i])<97) || (int(code[i]>122))){
      return 1;
      }
  }
  return 0;
}


int main() {
  string mail;
  string code;
  cin >> mail;
  cin >> code;
  if(mail[0]=='a' && (mail[7]=='@') && (int(mail[2])>=48 && int(mail[2])<=57) && (int(mail[3])>=48 && int(mail[3])<=57) && (int(mail[4])>=48 &&     
    int(mail[4])<=57) && (int(mail[5])>=48 && int(mail[5])<=57) && (int(mail[6])>=48 && int(mail[6])<=57) && (int(mail[1])>=48 && 
    int(mail[1])<=57) && (mail[8]=='g') && (mail[9]=='m') && (mail[10]=='a') && (mail[11]=='i') && (mail[12]=='l') && 
    (mail[13]=='.') && (mail[14]=='c') && (mail[15]=='o') && (mail[16]=='m')){
    cout<<"帳號正確";
  }else{
    cout<<"帳號錯誤";
  }
  if(code.length()>=8){
    cout<<"密碼合格\n";
    cout<<"密碼強度:"<<num(code)+big(code)+small(code)+sp(code);
  }else{
    cout<<"密碼不合格";
  }
}