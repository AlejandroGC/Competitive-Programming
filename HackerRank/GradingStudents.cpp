#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int arr[n];
    int grades[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (!(arr[i] < 38) && (arr[i] % 5 > 2)) {
            grades[i] = arr[i] + (5 - (arr[i] % 5));
        } else
        {
            grades [i] = arr[i];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << grades[i] << endl;
    }
    

    
    return 0;
}
