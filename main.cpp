#include <iostream>
using namespace std;
int main() {
  int a,b,c=0,all_1=0,all_2=0,all_3=0,all_4=0,all;
  char d,e,g;
  string f,k;
  cout <<"請輸入帳號:";
  cin >> f;
  if(f[0]!='a'){
    cout << "帳號不符合";
    return 0 ;
  }
  if(f[0]=='a'){
      for(int i=1;i<=6;i++){
        if(f[i]<'0' || f[i]>'9'){
          cout <<"帳號不符合";
          return 0;
        }
      }
      if(f[7]!='@' || f[8]!='g'||f[9]!='m'||f[10]!='a'||f[11]!='i'||f[12]!='l'||f[13]!='.'||f[14]!='c'||f[15]!='o'||f[16]!='m'){
         cout <<"帳號不符合";
          return 0;
      }
  cout <<"請輸入密碼:";
  cin >> k;
  for(int i=0;i<20;i++){
    if(k[i]>'0'&& k[i]<'9'){
      all_4=1;
      continue;
    }
    else if(k[i]>'a'&& k[i]<'z'){
      all_1=1;
      continue;
    }
    else if(k[i]>'A'&& k[i]<'Z'){
      all_2=1;
      continue;
    }
    else {
      all_3=1;
    }
    if(i<=8 && k[i]=='\0'){
      cout <<"密碼不安全";
      return 0;
    }   
  }
  all=all_1+all_2+all_3+all_4+1;
  cout << "密碼強度:"<< all <<"\n";
  cout << "密碼安全";
    }
  }