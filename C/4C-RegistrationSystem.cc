#include <iostream>
#include <map>
#include <string> 

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string h;
    std::map<string,int> k;
    for(int i=0; i < n; i++){
        cin >> h;
        if(k[h] == 0 )
            cout << "OK" << endl;
        else 
            cout << h << k[h] << endl;
        k[h]++;
    }
    return 0;
}