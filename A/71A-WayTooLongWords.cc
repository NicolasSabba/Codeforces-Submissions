#include <iostream>
#include <algorithm>

using namespace std;

int
main(){
    	ios::sync_with_stdio(false);
        int words;
        int i = 0;
        cin >> words;
        string w[words];
        for(i=0; i < words; i++){
            cin >> w[i];
        }
        for(i=0; i < words; i++){
            if(w[i].size() <= 10){
                cout << w[i] << endl;
            }
            else{
                cout << w[i][0] << w[i].size()-2 << w[i][w[i].size()-1] << endl;
            }
        }    
        return 0;
}