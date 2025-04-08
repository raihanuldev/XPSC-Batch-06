#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //init map
    map<int,int>mp;
    //insert at map
    mp[1] = 101;   
    mp[2] = 102;   
    mp[5] = 132;
    // mp.insert({6,56});

    //travarse
    // for(auto [key,value]:mp)
    // {
    //     cout<<key<<" => "<<value<<'\n';
    // } 
    for(auto it:mp){
        cout<<it.first<<" => "<<it.second<<"\n";
    }
    
    return 0;
}