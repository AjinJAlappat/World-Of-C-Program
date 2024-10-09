#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"enter a string that having identical begin and ending\n";
    string str;
    getline(cin,str);
    int n=str.size();

    for(int l=1;l<=(n+1)/2;l++)
    {
        if(str.substr(0,l)==str.substr(l-1))
        {
            
                cout<<"YES"<<endl;
                cout<<str.substr(0,l)<<endl;
                return 0;
            
        }
    }
    cout<<"NO";
    return 0;
}