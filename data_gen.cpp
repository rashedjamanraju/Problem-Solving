#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream out("output.in");  // now writing to output.in
  srand(time(0));             // seed for randomness

  int sizes[] = {101, 102, 103, 104, 105};
  int t = 5;

  out << t << endl;

  for (int i = 0; i < t; i++) {
    int n = sizes[i];
    out << n << endl;

    for (int j = 0; j < n; j++) {
      int num = rand() % 1000;  // random integers (0–999)
      out << num << " ";
    }
    out << endl;
  }

  out.close();
  cout << "Dataset generated in output.in" << endl;

  return 0;
}