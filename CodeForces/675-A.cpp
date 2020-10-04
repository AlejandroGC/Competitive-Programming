#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ll n,a,b,c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        ll d = (a+b+c-1);
        cout << d << endl;
    }
    return 0;
}