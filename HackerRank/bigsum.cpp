#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long int t = 0;
    cin >> n;
    long long int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        t = t + ar[i];
    }
    cout << t;
    
    return 0;
}
