#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int len,temp;
    vector <int> arr={1,2,3,4,5};

    cout<<"Enter the nno of digits to be shifted\n";
    cin>>len;
    int size=arr.size();
    if(size<len)
    {
        len=len%size;
    }
    
    for(int i=0;i<len;i++)
    {
        temp=arr[0];
        for(int j=1;j<=size;j++)
        {
            arr[j-1]=arr[j];
        }
        arr[size-1]=temp;
    }

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}