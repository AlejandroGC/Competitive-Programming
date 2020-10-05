#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

bool validPalindrome(string s){
    string str = "";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for (int i = 0; i < s.size(); i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= '0' && s[i] <= '9')) {
            str += s[i];
        }
    }
    int i=0, j=str.size();
    while(i < j){
        cout << str[i] << str[j-1] << endl;
        if(str[i] != str[j-1]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    if(validPalindrome(s)){
        cout << boolalpha << true;
    } else {
        cout << boolalpha << false;
    }

    return 0;
}