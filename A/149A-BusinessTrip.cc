#include <iostream>
#include <algorithm>

using namespace std;

int
main(){
	ios::sync_with_stdio(false);
    int max;
    int m[12];
    int res = 0;
    int i = 0;
    cin >> max;
    cin >> m[0] >> m[1] >> m[2] >> m[3] >> m[4] >> m[5] >> m[6] 
        >> m[7] >> m[8] >> m[9] >> m[10] >> m[11];
    if(max == 0) {
        cout << "0" << endl;
        return 0;
    }
    sort(m, m+12, std::greater<int>());
    while((i < 12) && (res < max)){
        res += m[i];
        i++;
    }
    if((i == 12) && (res < max)){
        cout << "-1" << endl;
    }
    else{
        cout << i << endl;
    }
    return 0;
}