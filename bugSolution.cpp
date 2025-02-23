#include <iostream>
#include <vector>

int main() {
  // Avoid using std::vector<bool> when iterator stability is critical
  std::vector<char> boolVector; // Use std::vector<char> as a replacement
  boolVector.push_back(1); // Represents 'true'
  boolVector.push_back(0); // Represents 'false'

  // Safer alternative if bool is really needed, use std::vector<bool> cautiously:
  std::vector<bool> boolVector2;
  boolVector2.push_back(true);
  boolVector2.push_back(false);

  for (bool b : boolVector2) {
    std::cout << b << " ";
  }
  std::cout << std::endl;
  return 0;
} 