#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,ans;
    srand(time(0));
    num = rand();
    num = num % 10000 + 1;
    cout<<"Guess the numbe(In range of 1 to 10000)"<<endl;
    while(ans != num){
      cin>>ans;
      if(ans>num){
        int dif = ans - num;
        if(dif<50) cout<<"Try smaller number you are too close!"<<endl;
        else cout<<"Try smaller number."<<endl;
      }
      else if(ans<num){
        int dif = num - ans;
        if(dif<50) cout<<"Try greater number you are too close!"<<endl;
        else cout<<"Try greater number."<<endl;
      }
      else{
        cout<<"Yayy! You guessed it right!"<<"The answer is "<<num<<endl;
      }
    }
return 0;
}