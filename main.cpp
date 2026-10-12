#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl; 

// Homework 7 — Your Name
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;
  int values[N];
  int even[N];
  int odd[N];
  int evennum = 0;
  int oddnum = 0;

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }

  for (int i = 0; i < N; ++i) {
    cout <<"[" << i << "] " << values [i] << endl;
  
if (values[i] / 2 * 2 == values[i] ) {
  even[evennum] = values [i];
  ++evennum;
}
else {
  odd[oddnum] = values [i];
  ++oddnum;

}
}


cout << "Even: " << endl;
for (int i = 0; i < evennum; ++i) {
cout << even[i] << endl;
}
cout << "Odd: " << endl;
for (int i = 0; i < oddnum; ++i){
  cout << odd[i] << endl;
}





  

  return 0;
}
