#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int n, p, h;
    int points = 1;
    int i = 0;
    cin >> n >> p ;
    for( i ; i < n; i++){
        cin >> h;
        if(h < points){
            cout << i << endl;
            return 0;
        }
        if(i == p-1)
            points = h;
    }
    cout << i << endl;
    return 0; 
}
