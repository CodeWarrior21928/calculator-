#include <bits/stdc++.h>
using namespace std;
int addition(int a, int b)
{
    return a+b;
}
int division(int a, int b)
{
    return a/b;
}
int multiplication(int a,int b)
{
    return a*b;
}
int subtraction(int a, int b)
{
    return a-b;
}
int main()
{
    int a,b;
    cin>>a>>b;
     cout<<multiplication(a,b) <<endl;
    cout<<subtraction(a,b) <<endl;
    cout<<addition(a,b)<<endl;
    cout<<division(a,b)<<endl; 
}