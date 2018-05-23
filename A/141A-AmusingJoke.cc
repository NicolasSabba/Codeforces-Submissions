#include <iostream>
#include <algorithm>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    string name1, name2, le;
    cin >> name1;
    cin >> name2;
    cin >> le;
    name1 += name2;
    sort(name1.begin(), name1.end());
    sort(le.begin(), le.end());
    if(le == name1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}