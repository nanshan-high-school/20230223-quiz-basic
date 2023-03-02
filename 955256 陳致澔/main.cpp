#include <iostream>
using namespace std;
int main() {
  string mail, password;
  int power=0;
  cin>>mail;
  if((mail[0]=='a') && (mail[1]>='0') && (mail[1]<='9') && (mail[2]>='0') && (mail[2]<='9') && (mail[3]>='0') && (mail[3]<='9') && (mail[4]>='0') && (mail[4]<='9') && (mail[5]>='0') && (mail[5]<='9') && (mail[6]>='0') && (mail[6]<='9') && (mail[7]=='@') && (mail[8]=='g') && (mail[9]=='m') && (mail[10]=='a') && (mail[11]=='i') && (mail[12]=='l') && (mail[13]=='.') && (mail[14]=='c') && (mail[15]=='o') && (mail[16]=='m')){
    cout<<"格式正確!!";
  }
  else{
    cout<<"格式錯誤!!";
  }
  cin>>password;
  if(password.length()>=8){
    cout<<"密碼設置成功!";
    power+=1;
  }
  int longs=password.length();
  for(int i=0; i<=longs; i++){
    if (password[i]>='A'&& password[i]<='Z'){
      power+=1;
      break;  
    }
  }
  for(int i=0; i<=longs; i++){
    if (password[i]>=48 && password[i]<=57){
      power+=1;
      break;  
    }
  }
  for(int i=0; i<=longs; i++){
    if (password[i]>=58 && password[i]<=64){
      power+=1;
      break;  
    }
  }
  for(int i=0; i<=longs; i++){
    if (password[i]>=32 && password[i]<=47){
      power+=1;
      break;  
    }
  }
  for(int i=0; i<=longs; i++){
    if (password[i]>=97 && password[i]<=122){
      power+=1;
      break;  
    }
  }
  for(int i=0; i<=longs; i++){
    if (password[i]>=123 && password[i]<=126){
      power+=1;
      break;  
    }
  }
  for(int i=0; i<=longs; i++){
    if (password[i]>=91 && password[i]<=96){
      power+=1;
      break;  
    }
  }
  cout<<"強度:";
  cout<<power;
}
// cout<<"強度:";
// cout<<power;