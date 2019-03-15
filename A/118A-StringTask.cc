#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] < 91){
            s[i] += 32;
        }
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y'
            && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
                cout << '.' << s[i];
            }
    }
    cout << endl;
    return 0;
}