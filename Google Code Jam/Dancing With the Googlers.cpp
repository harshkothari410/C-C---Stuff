/*You're watching a show where Googlers (employees of Google) dance, and then each dancer is given a triplet of scores by three judges. Each triplet of scores consists of three integer scores from 0 to 10 inclusive. The judges have very similar standards, so it's surprising if a triplet of scores contains two scores that are 2 apart. No triplet of scores contains scores that are more than 2 apart.

For example: (8, 8, 8) and (7, 8, 7) are not surprising. (6, 7, 8) and (6, 8, 8) are surprising. (7, 6, 9) will never happen.

The total points for a Googler is the sum of the three scores in that Googler's triplet of scores. The best result for a Googler is the maximum of the three scores in that Googler's triplet of scores. Given the total points for each Googler, as well as the number of surprising triplets of scores, what is the maximum number of Googlers that could have had a best result of at least p?

For example, suppose there were 6 Googlers, and they had the following total points: 29, 20, 8, 18, 18, 21. You remember that there were 2 surprising triplets of scores, and you want to know how many Googlers could have gotten a best result of 8 or better.

With those total points, and knowing that two of the triplets were surprising, the triplets of scores could have been:

10 9 10
6 6 8 (*)
2 3 3
6 6 6
6 6 6
6 7 8 (*)
The cases marked with a (*) are the surprising cases. This gives us 3 Googlers who got at least one score of 8 or better. There's no series of triplets of scores that would give us a higher number than 3, so the answer is 3.
Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of a single line containing integers separated by single spaces. The first integer will be N, the number of Googlers, and the second integer will be S, the number of surprising triplets of scores. The third integer will be p, as described above. Next will be N integers ti: the total points of the Googlers.

Output

For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is the maximum number of Googlers who could have had a best result of greater than or equal to p.

Limits

1 = T = 100.
0 = S = N.
0 = p = 10.
0 = ti = 30.
At least S of the ti values will be between 2 and 28, inclusive.
Small dataset

1 = N = 3.
Large dataset

1 = N = 100.

Sample

Input 

4
3 1 5 15 13 11
3 0 8 23 22 21
2 1 1 8 0
6 2 8 29 20 8 18 18 21

OUTPUT

Case #1: 3
Case #2: 2
Case #3: 1
Case #4: 3
*/


#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <list>

#include "Integer.h"
#include "Rational.h"

using namespace std;


int bestSurprising(int total) {
  if (total <= 2) return total;
  int k = (total-2)/3;
  return k+2;
}

int bestUnsurprising(int total) {
  if (total <= 1) return total;
  int k = (total-1)/3;
  return k+1;
}

int main(void) {
  int iTest, nTests; cin >> nTests;

  for (iTest = 1; iTest <= nTests; ++iTest) {
    cerr << iTest << "/" << nTests << "\n";

    cout << "Case #" << iTest << ": ";

    int i, n, surprises, p;
    cin >> n >> surprises >> p;

    int total;
    int nGood = 0, nGoodOnlyIfSurprising = 0;
    for (i = 0; i < n; ++i) {
      cin >> total;
      if (bestUnsurprising(total) >= p)
	++nGood;
      else if (bestSurprising(total) >= p)
	++nGoodOnlyIfSurprising;
    }

    if (nGoodOnlyIfSurprising > surprises) nGoodOnlyIfSurprising = surprises;

    cout << nGood + nGoodOnlyIfSurprising;
    

    cout << "\n";
  }

  return 0;
}
