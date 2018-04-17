#include <iostream>
using namespace std;
int
main(){
    	ios::sync_with_stdio(false);
        int n, k;
        char ch;
        int h, i;
        cin >> n >> k;
        h = 0;
        for(i=0; i < n; i++ ){
            ch = h + 97;
            cout << ch;
            if(h < k-1)
                h++;
            else 
                h = 0;
        }
        cout << endl;
        return 0;
}