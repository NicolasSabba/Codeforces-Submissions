#include <iostream>
using namespace std;
int
main(){
	ios::sync_with_stdio(false);
  int p, c;
  int i = 0;
  int help = 1;
  cin >> p >> c;
  while(help != 0){
    i++;
    help = (p * i) % 10;
    if(help == c)
      break;
  }
  cout << i << endl;
  return 0;
}