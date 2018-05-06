#include <iostream>
using namespace std;
int
main(){
	ios::sync_with_stdio(false);
  int f,h,m;
  cin >> f;
  char a;
  cin >> h >> a >> m;
  if(f == 12){
    while(h > f)
      h -= 10;
    if(h == 0)
      h += 10;
  }
  if(f == 24){
    while(h >= f)
      h -= 10;
  } 
  while(m >= 60)
    m -= 10;
  if(h < 10)
    cout << '0';
  cout << h << a;
  if(m < 10)
    cout << '0';
  cout << m << endl;
  return 0;
}