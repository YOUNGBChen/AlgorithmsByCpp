//
// Created by BC on 2020/12/15.
//
#include <iostream>
using namespace std;
int a[100],num=0,n;
int main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<i;j++){
            if (a[j]<a[i])
                num++;
        }
        cout <<num<<" ";
        num=0;
    }
    return 0;
}
