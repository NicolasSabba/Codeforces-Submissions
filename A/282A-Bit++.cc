#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int n, x;
    string s;
    x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s[0] == '+' || s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
}