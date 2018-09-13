#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int res = 1;
    sort(s.begin(), s.end());
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i-1])
            res++;
    }
    if(res & 1)
        cout << "IGNORE HIM!" << endl;
    else 
        cout << "CHAT WITH HER!" << endl;
    return 0;
}
