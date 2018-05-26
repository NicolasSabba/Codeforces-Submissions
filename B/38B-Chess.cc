#include <iostream>
#include <algorithm>

using namespace std;

bool
c_eat(int tx, int ty, int x, int y){
    if((tx==x-2 && (ty==y+1 || ty==y-1)) ||
       (tx==x+2 && (ty==y+1 || ty==y-1)) ||
       (ty==y-2 && (tx==x+1 || tx==x-1)) ||
       (ty==y+2 && (tx==x+1 || tx==x-1)) ||
       (ty==y && tx==x)){
        return false;
    }
    return true;
}

int
main(){
    ios::sync_with_stdio(false);
    char t, c;
    int  xt, yt, xc, yc, x, y;
    int res = 0;
    cin >> t >> yt;
    cin >> c >> yc;
    xt = t - 97;
    xc = c - 97;
    yt -= 1;
    yc -= 1;
    for(y=0; y<8; y++){
        for(x=0; x<8; x++){
            if(x != xt && y != yt){
                if(c_eat(x, y, xc, yc)){
                    if(c_eat(xt, yt, x, y)){
                        res += 1;
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}