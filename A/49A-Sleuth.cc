#include <iostream>
#include <string>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    for (string::iterator i=s.end()-1; i!=s.begin()-1; --i){
        if(*i == ' ' || *i == '?' || *i == '\n'){} //pass
        else if(*i == 'A' || *i == 'E' || *i == 'I' || *i == 'O' || *i == 'U'
               || *i == 'Y' || *i == 'a' || *i == 'e' || *i == 'i' || *i == 'o'
               || *i == 'u' || *i == 'y'){
                   cout << "YES" << endl;
                   return 0;
               }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    return 0;
}
