#include <iostream>
#include <algorithm>

using namespace std;

int
main(){
	ios::sync_with_stdio(false);
    int n, aw, i;
    int big =0;
    int h = 0;
    cin >> n >> aw;
    int theo[n];
    for(i=0; i < n; i++)
        cin >> theo[i];
    bool comp[n];
    int res[n] = {0};
    for(i=0; i < n; i++){
        cin >> comp[i];
        if(comp[i]){
            big += theo[i];
        } 
        else{
            res[i] += theo[i];
        }
        if(i-1 >= 0){
            res[i] += res[i-1];
        }
        if(i-aw >= 0 && !comp[i-aw]){
            res[i] -= theo[i-aw];
        }
    }
    sort(res, res+n, std::greater<int>());
    big += res[0];
    cout << big << endl;
    return 0;
} 