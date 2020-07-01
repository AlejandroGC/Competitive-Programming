#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int a, sum = 0, sum2 = 0;
    cin >> a;
    int arr[a][a];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cin >> arr[i][j];
            if(i == j) {
                sum += arr[i][j];
            }
            if(i+j == (a-1)) {
                sum2 += arr[i][j];
            }
        }

    }

    cout << abs(sum - sum2);

    return 0;
}
