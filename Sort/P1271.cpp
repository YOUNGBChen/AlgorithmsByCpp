//
// Created by BC on 2020/12/16.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,a[200001];

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m)
    for(int i=0;i<m;i++){
        cont<<a[i];
    }
    return 0;
}