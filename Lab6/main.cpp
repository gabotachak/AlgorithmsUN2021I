#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;                                                    //1
  cin >> n;                                                 //1
  unsigned long long int maxNumber = 0LL;                   //1
  unsigned long long int maxSecondNumber = 0LL;             //1
  unsigned long long int aux = 0LL;                         //1

  for (int i = 0; i < n; ++i) {                             //n
    cin >> aux;                                             //1
    if(maxNumber < aux){                                    //1
      maxSecondNumber = maxNumber;                          //1
      maxNumber = aux;                                      //1
    } else if(maxSecondNumber < aux){                       //1
      maxSecondNumber = aux;                                //1
    }
  }

  unsigned long long int maxProductUltraFast = maxNumber * maxSecondNumber;                          //1
  cout << "Result using Ultra Fast method: " << maxProductUltraFast << endl;                         //1
  return 0;
}
