//
// Created by BC on 2020/12/16.
//
/*
 题目描述
 现有 N(N≤1000) 名同学参加了期末考试，并且获得了每名同学的信息：语文、数学、英语成绩（均为不超过 150 的自然数）。
 如果某对学生 <i,j> 的每一科成绩的分差都不大于 5，且总分分差不大于 10，那么这对学生就是“旗鼓相当的对手”。
 现在想知道这些同学中，有几对“旗鼓相当的对手”？同样一个人可能会和其他好几名同学结对

 输入格式
 第一行一个正整数 N。
 接下来 NN 行，每行三个整数，其中第 ii 行表示第 ii 名同学的语文、数学、英语成绩。最先读入的同学编号为 1。

 输出格式
 输出一个个整数，表示“旗鼓相当的对手”的对数。

 输入
 3
 90 90 90
 85 95 90
 80 100 91

 输出
 2
 */
#include<bits/stdc++.h>
using namespace std;

int n;
int output=0;
struct node
{
    int c,m,e,sum;
}stu[2000];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>stu[i].c>>stu[i].m>>stu[i].e;
        stu[i].sum+=stu[i].c+stu[i].m+stu[i].e;//求每个人的分数和
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(abs(stu[i].c-stu[j].c)<=5&&abs(stu[i].e-stu[j].e)<=5&&abs(stu[i].m-stu[j].m)<=5&&abs(stu[i].sum-stu[j].sum)<=10)//符合条件，ans++
                output++;
        }
    }
    cout<<output;
    return 0;
}