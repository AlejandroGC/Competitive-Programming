#include <iostream>
#include <algorithm>


int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, mayor = 0, c = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (mayor < arr[i]) {
            mayor = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == mayor) {
            c += 1;
        }
    }

    cout << c;
    
    return 0;
}
