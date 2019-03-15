#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int a, h, h2, r;
    r = 0;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> h;
        h2 += h;
        cin >> h;
        h2 += h;
        cin >> h;
        h2 += h;
        if(h2 > 1)
            r++;
        h2 = 0;
    }
    cout << r << endl;
    return 0;
}