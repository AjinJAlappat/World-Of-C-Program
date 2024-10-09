#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    //algorithms 
    //containers
    //functions
    //iterators
/*
    pair<int ,int>p={1,2};
    cout<<p.first<<endl;

    pair<int,pair<int,int>> q={1,{1,2}};
    cout<<q.second.first<<endl;

    pair<int,int> arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[0].second;
*/
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> r;
    r.push_back({1,2});
    r.emplace_back(3,4);

    vector<int> v3(5,50);
    v3.push_back(1);
    vector<int> u(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);
    cout<<endl<<endl;
   // cout<<v;
    //cout<<r.first;
    for(int i:v3)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    for(int j : v2){
        
        cout<<j<<" ";
    }
    cout<<endl<<endl;
     for(int j : v){
        
        cout<<j<<" ";
    }
    cout<<endl<<endl;
    vector<int>::iterator it = v3.end();
    it--;
    cout<<*(it)<<" ";

    v.erase(v.begin());
    cout<<endl;
     cout<<endl;
    for(auto it = v.begin();it !=v.end();it++)
    {
        cout<<*(it)<<" ";
    }

    cout<<endl<<endl;

    v.insert(v.begin(),2,10);
    for(auto it = v.begin();it !=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl<<endl;
    cout<<v.size();
    return 0;

}

//stack<int> st;
//st.push(1);
//st.emplace(5);
//st.pop(),st.top(),st.size()

//list<int> ls;
//ls.push_back();
//ls.push_front();

//deque<int> dq;
//dq.push_back()
//  