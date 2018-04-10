#include <iostream>
using namespace std;
int
main(){
    	ios::sync_with_stdio(false);
    	int n;
		int k;
    	cin >> n;
    	k = n & 1;
    	if(k || (n <= 2))
	    	cout << "NO";
    	else
	    	cout << "YES";
    	return 0;
}
