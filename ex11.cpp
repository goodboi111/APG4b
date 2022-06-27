#include <bits/stdc++.h>
using namespace std;
 
// EX11 - 電卓をつくろう2
int main() {
  int N, A;
  cin >> N >> A;
  int sum = A;
  
  for (int i = 0; i < N; i++) {

 	string op;
    int x;
    cin >> op >> x;
 
    if (op == "+") {      
      sum += x;
    }
    else if (op == "-") {      
      sum -= x;
    }
    else if (op == "*") {
      sum *= x;  
    }    
    else {
      if (x == 0) {
        cout << "error" << endl;
        break;
      } else {
        sum /= x;
      }
    }
  
    cout << i + 1 << ":" << sum << endl;
  }
}