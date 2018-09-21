//
// Created by maisum on 21.09.18.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
  vector<int> arr{1 , 2 , 4 , 6 , 11 , 3 , 1 , 0};
  auto maxElement = max_element (arr.begin () , arr.end ());
  cout << "Max element " << arr[ distance (arr.begin () , maxElement) ];

}

