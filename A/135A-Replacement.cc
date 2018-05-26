#include <iostream>
#include <algorithm>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    if (a[n-1] != 1)
        cout << 1 << ' ';
    for(int i=0; i<n-1; i++)
        cout << a[i] << ' ';
    if(a[n-1] == 1)
        cout << 2;
    cout << endl;
    return 0;
}
    