#include <bits/stdc++.h>
using namespace std;

string str;
int number;

int main(){
    cin>>number;
    cin>>str;
    for(int i=0;i<str.size();i++){
        //小写
        if(str[i]>='a' && str[i]<='z'){
            str[i] = 'a' + (str[i]+number-'a')%26;
        }
        //大写
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = 'A' + (str[i]+number-'A')%26;
        }
    }

    cout<<str;
    return 0;
}