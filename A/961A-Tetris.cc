#include <iostream>
using namespace std;
int
main(){
    	ios::sync_with_stdio(false);
        int n, m;
        cin >> n >> m;
        int column[n] = {0};
        int i = 0;
        int help = 0;
        for(i=0; i < m; i++){
            cin >> help;
            column[help - 1] += 1;
        }
        help = column[0];
        for(i=1; i < n; i++)
            if(help > column[i])
                help = column[i];
        cout << help << endl;
        return 0;
}