#include <iostream>

int main()
{
    using namespace std;
    
    int n = 3;

    int a[n], b[n], p[2] = {0,0};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            p[0] += 1;
        } else if (a[i] == b[i]) {
            cout << "";
        } else {
            p[1] += 1;
        }
        
    }

    for (int i = 0; i < 2; i++) {
        cout << p[i] << " ";
    }
    

    
    
    return 0;
}
