#include <iostream>
#include <algorithm>

int main() {
    using namespace std;
    
    long long t = 0;
    long long int arr[5];
    
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        t = t + arr[i];
    }

    sort(arr, arr+5);
    cout << t - arr[4] << " " << t - arr[0];
    
    return 0;
}
