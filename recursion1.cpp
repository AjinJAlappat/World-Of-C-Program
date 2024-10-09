#include<bits/stdc++.h>
using namespace std;
void func(int n,int i=0)
{
    if(i<n)
    {
        cout<<"Ajin\n";
        func(n,i+1);
    }
    return;
}

int main()
{
    int n;
    cout<<"enter the times to print\n";
    cin>>n;
    func(n);

    return 0;
}