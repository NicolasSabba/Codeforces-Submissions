#include <iostream>
#include <string>

using namespace std;

int
main(){
    ios::sync_with_stdio(false);
    std::string s;
    cin >> s;
    cout << s;
    for ( std::string::iterator i=s.end()-1; i!=s.begin()-1; --i)
        std::cout << *i;
    std::cout << endl;
    return 0;
}
