#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    long long int x, y, a;
    cin >> x >> y >> a;
    long long int h = x / a + (x % a != 0);
    long long int w = y / a + (y % a != 0);
    w = w*h;
    cout << w << endl;
    return 0;
}
