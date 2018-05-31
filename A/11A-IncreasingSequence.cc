#include <iostream>
#include <algorithm>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int n, d, h;
    int res = 0;
    cin >> n >> d;
    int sec[n];
    for(int i=0; i < n; i++){
        cin >> sec[i];
        if(i != 0){
            h = sec[i-1] - sec[i];
            if(h >= 0){
                h = (h / d) + 1;
                sec[i] += (d*h);
                res += h;
            }

        }
    }
    cout << res << endl;
    return 0;
}