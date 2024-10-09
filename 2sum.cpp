#include<bits/stdc++.h>
using namespace std;

void check(int n,vector<int> arr,int target)
{
    int left=0;
    int right = n-1;
    sort(arr.begin(),arr.end());

    while(left<right)
    {
        int sum=arr[left]+arr[right];
        int flag=0;
        if(target==sum)
        {
            cout<<"values are : "<<left<<","<<right<<endl;
            flag=1;
        }
        else if(target>sum)
        {
            left++;
        }
        else
        {
            right--;
        }
        
    }
}
int main()
{
    vector<int> arr={1,2,3,4,5,6};
    cout<<"Enter the target to be displayed\n";
    int target;
    cin>>target; 

    int n=arr.size();

    check(n,arr,target);

    return 0;
}