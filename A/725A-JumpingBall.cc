#include <iostream>
using namespace std;
int
main(){
	ios::sync_with_stdio(false);
  int n, i;
  int res = 0;
  int help = 0;
  int c = 0;
  cin >> n;
  char bump[n];
  cin >> bump;
  for(i=0; i < n; i++){
    if(bump[i] == '<' && help == 0)
      c++;
    else if(bump[i] == '<'){
      help = 1;
      res = -1;
    }
    else if(bump[i] == '>')
      help++;    
  }
  res += help + c;
  cout << res << endl;
  return 0;
}
