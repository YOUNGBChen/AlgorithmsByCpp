//
// Created by BC on 2020/12/16.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
   string a;
   cin>>a;
   for(int i=0;i<a.size();i++){
       if(a[i]>='a' && a[i]<='z'){
           a[i]=a[i]-('a'-'A');
       }
   }
    cout<<a<<endl;
}