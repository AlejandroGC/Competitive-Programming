#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double t = 0, p = 0, n = 0, z = 0;
    int c;
    cin >> c;
    int ar[c];

    for(int i = 0; i < c; i++) {
        cin >> ar[i];
        t += 1;
        if (ar[i] > 0) {
            p += 1;
        } else if (ar[i] == 0) {
            z += 1;
        } else {
            n += 1;
        }
        
    }

    float div1 = p/t;
    float div2 = n/t;
    float div3 = z/t;

    cout << div1 << endl << div2 << endl << div3;
    
    return 0;
}
