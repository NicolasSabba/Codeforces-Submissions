#include <iostream>
#include <algorithm>

using namespace std;
int
main(){
    	ios::sync_with_stdio(false);
        string s;
        int i = 0;
        cin >> s;
        sort(s.begin(), s.end());
        for(i=0; i < s.size() - 1; i++){
            if(s[i] != '+')
                cout << s[i] << '+';
        }
        cout << s[s.size() - 1] << endl;
    return 0;
}