//
// Created by BC on 2020/12/15.
//

#include <iostream>
using namespace std;
int n,a[100];
int i=1;
int main(){
    cin>>n;
    while (n!=1){
        a[i]=n;
        i++;
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
    }
    for(int j=i;j>=1;j--){
        cout<<a[j]<<" ";
    }
    return 0;
}