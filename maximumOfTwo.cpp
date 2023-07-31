#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_of_two(int a, int b) {
  // XOR the two numbers.
  int x = a ^ b;

  // Shift the result by 31 bits.
  x = x >> 31;

  // If the result is 0, then a was greater than or equal to b.
  // Otherwise, b was greater than a.



  int sum = a+b;
  int abss = abs(a-b);
  int avg = (sum+abss)/2;

  return(avg);
}

int main() {
  std::cout << max_of_two(10, 20) << std::endl;
  std::cout << max_of_two(-10, -20) << std::endl;
  return 0;
}
