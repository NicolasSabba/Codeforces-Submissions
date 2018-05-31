#include <iostream>
#include <cmath>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int m;
    int res = 0;
    for(int y=0; y < 5; y++){
        for(int x=0; x < 5; x ++){
            cin >> m;
            if(m){
                res= abs(2 - y) + abs(2 - x);
            } 
        }
    }
    cout << res << endl;
    return 0;
}