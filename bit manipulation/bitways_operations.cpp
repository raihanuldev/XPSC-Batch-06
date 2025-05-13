#include <bits/stdc++.h>
using namespace std;

bool check_bits_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << check_bits_on_or_off(45, 4) << "\n";
    return 0;
}