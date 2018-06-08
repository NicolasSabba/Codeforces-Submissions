#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int l, n, h;
    cin >> l >> n;
    int inAL[l] = {0};
    int inAN[n] = {0};
    char s[l][n];
    int tw = 0;
    for(int al=0; al<l; al++){
        for(int an=0; an<n; an++){
            cin >> s[al][an];
            if(s[al][an] == '*'){
                inAL[al]++;
                inAN[an]++;
                tw++;
            }
        }
    }
    for(int al=0; al<l; al++){
        for(int an=0; an<n; an++){
            h = inAL[al] + inAN[an];
            if(s[al][an] == '*')
                h--;
            if(h == tw){
                cout << "YES" << endl << al+1 << ' ' << an+1 << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}