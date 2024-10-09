//#include<bits/stdc++>
#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter 10 numbers(0,1)\n ";
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                
            }
        }
    } 
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;   
}