#include <iostream>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int n, m, s;
    cin >> n >> m >> s;
    int col[n][m];
    int fil[n][m];
    int colAns = 0;
    int filAns = 0;
    char c;
    for(int a=0; a < n; a++){
        for(int l=0; l < m; l++){
            cin >> c;
            if(c == '.'){
                col[a][l] = 1;
                fil[a][l] = 1;
                if(a > 0)
                    col[a][l] += col[a-1][l];
                if(col[a][l]>=s && s!=1)
                    colAns++;
                if(l > 0)
                    fil[a][l] += fil[a][l-1];
                if(fil[a][l]>=s)
                    filAns++;
            }
            else{
                col[a][l] = 0;
                fil[a][l] = 0;
            }
        }
    }
    cout << colAns+filAns << endl;
    return 0;
}