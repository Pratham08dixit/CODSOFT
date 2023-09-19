#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(char arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
char check(char a[3][3]){
    if(((a[0][0]=='X'&&a[1][1]=='X')&&(a[2][2]=='X'))||((a[0][2]=='X'&&a[1][1]=='X')&&(a[2][0]=='X'))||((a[0][0]=='X'&&a[0][1]=='X')&&(a[0][2]=='X'))||((a[1][0]=='X'&&a[1][1]=='X')&&(a[1][2]=='X'))||((a[2][0]=='X'&&a[2][1]=='X')&&(a[2][2]=='X'))||((a[0][0]=='X'&&a[1][0]=='X')&&(a[2][0]=='X'))||((a[0][1]=='X'&&a[1][1]=='X')&&(a[2][1]=='X'))||((a[0][2]=='X'&&a[1][2]=='X')&&(a[2][2]=='X'))){
        return 'X';
    }
     else if(((a[0][0]=='0'&&a[1][1]=='0')&&(a[2][2]=='0'))||((a[0][2]=='0'&&a[1][1]=='0')&&(a[2][0]=='0'))||((a[0][0]=='0'&&a[0][1]=='0')&&(a[0][2]=='0'))||((a[1][0]=='0'&&a[1][1]=='0')&&(a[1][2]=='0'))||((a[2][0]=='0'&&a[2][1]=='0')&&(a[2][2]=='0'))||((a[0][0]=='0'&&a[1][0]=='0')&&(a[2][0]=='0'))||((a[0][1]=='0'&&a[1][1]=='0')&&(a[2][1]=='0'))||((a[0][2]=='0'&&a[1][2]=='0')&&(a[2][2]=='0'))){
        return '0';
    }
    else return '1';
}
int main(){
   
    while(true){
        char arr[3][3];
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]='_';
        }
    }
    bool flag=true;
    int row,column;
    bool turn= 1;
    
        while(true){
            cout<<"Enter row and column number"<<endl;
            cin>>row>>column;
            if(arr[row-1][column-1] != '_' || (row==0) || (column==0)){
                cout<<"Invalid move."<<endl;
                continue;
            }
            if(turn==0){
                arr[row-1][column-1] = '0';
                turn = 1;
                cnt++;
            }
            else{
                arr[row -1][column-1] = 'X';
                turn = 0;
                cnt++;
            }
            print(arr);
            if( check(arr)=='X'){
                char repeat;
                cout<<"Winner is 'X' "<<endl;
                cout<<"Do you wanna play again(y/n)?"<<endl;
                cin>>repeat;
                if(repeat=='y'){
                    flag = false;
                    cnt=0;
                    break;
                }
                else {
                    flag = true;
                    cnt=0;
                    break;
                }
            }
            else if(check(arr)=='0') {
                cout<<"Winner is '0'"<<endl;
                char repeat;
                cout<<"Do you wanna play again(y/n)?"<<endl;
                cin>>repeat;
                if(repeat=='y'){
                flag = false;
                cnt=0;
                break;
                }
                else {
                    flag = true;
                    cnt=0;
                    break;
                }
            }
            else if(check(arr)=='1' && cnt==9){
                cout<<"The game is DRAW :("<<endl;
                char repeat;
                cout<<"Do you wanna play again(y/n)?"<<endl;
                cin>>repeat;
                if(repeat=='y'){
                    flag = false;
                    cnt=0;
                    break;
                }
                else {
                    flag = true;
                    cnt=0;
                    break;
                }
            }
        }
        if(flag) break;
    }
}