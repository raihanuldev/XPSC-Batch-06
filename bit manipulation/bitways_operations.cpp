#include <bits/stdc++.h>
using namespace std;

bool check_bits_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}
// prints all bit status
void print_bits_status(int n){
    for(int k=7; k>=0;k--){
        if(check_bits_on_or_off(n,k)){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    print_bits_status(45);
    return 0;
}