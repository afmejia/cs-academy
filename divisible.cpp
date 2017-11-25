#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N;
  int element;

  // Read vector size
  cin >> N;

  // Count frequency of numbers whose have modulo 3 equals to 0, 1 or 2
  long long v[3] = {0, 0, 0};
  for (int i = 0; i < N; i++)
  {
    cin >> element;
    v[element % 3]++;
  }

  // Print numbers of pairs that have the sum divisible by 3
  cout << v[0] * (v[0] - 1) / 2 + v[1] * v[2] << endl;
  return 0;
}
