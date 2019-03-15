#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int r = 1;
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1])
            r++;
        else
            r = 1;
        if(r > 6){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}