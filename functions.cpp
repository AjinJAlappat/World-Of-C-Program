#include<bits/stdc++.h>
using namespace std;
void printname()
{
    cout<<"Ajin J Alappat\n";
}
void printname(string name)
{
    cout<<"Hey Ajin \n";
}

int main()
{
    string name="ajin";
    printname(name);
    printname(); 
    int n,m;
    cin>>m>>n;
    int res=max(n,m);
    cout<<endl<<res;   
    return 0;

}

//pass by value
//pass by reference 