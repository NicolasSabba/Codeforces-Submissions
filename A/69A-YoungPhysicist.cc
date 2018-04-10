#include <iostream>
using namespace std;
int
main(){
    	ios::sync_with_stdio(false);
        int lines, i, x = 0, a, y = 0, b, z = 0, c;
        cin >> lines;
        for(i = 0; i < lines; i++){
            cin >>  a >> b >> c;
	    x += a;
	    y += b;
	    z += c;
	}
	if(x||y||z)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
