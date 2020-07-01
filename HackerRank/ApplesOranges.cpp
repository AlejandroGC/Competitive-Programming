#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long s,t,a,b,n,m,val,val2,cantidad = 0, cantidad2 = 0;

    cin >> s;
    cin >> t;
    cin >> a;
    cin >> b;
    cin >> m;
    cin >> n;

    long int p[n], p2[m];

    for(int i = 0; i < n; i++) {
        cin >> val;
        p[i] = a + val;
        if(p[i] <= t && p[i] >= s) {
            cantidad += 1;
        }
    }
    
    for(int i = 0; i < m; i++) {
        cin >> val2;
        p2[i] = b + val2;
        if(p2[i] <= t && p2[i] >= s) {
            cantidad2 += 1;
        }
    }

    cout << cantidad << endl << cantidad2;
    

    return 0;
}
