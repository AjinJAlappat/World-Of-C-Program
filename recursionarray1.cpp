#include<bits/stdc++.h>
using namespace std;
vector<int>func(vector<int> &arr)
{
    int len=arr.size();
    for(int i=0;i<len/2;i++) 
    {
        swap(arr[i],arr[len-i-1]);
    }
    return arr;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    arr=func(arr);

    for(auto num : arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}