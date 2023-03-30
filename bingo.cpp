#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int a=0,b;
    int bingo[5][5];
    int number[25]={0};
    srand(time(0));
    for(int i=0;i<25;i++){
      int pick;
      do{
        pick=rand()%25+1;
      }while(number[pick-1]>0);

      number[pick-1]++;
      
      //cout<< pick <<" " ;
      //a++;
      //if(a>=5){
        //cout <<"\n";
        //a=0;
      //}
    } 
    int now=0;
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        bingo[i][j]=number[now];
        now++;
        cout <<now;
      }
    }
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        //cout <<bingo[i][j];
      }
      //cout<<"\n";
    }
  }
 
