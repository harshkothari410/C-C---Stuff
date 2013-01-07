/*Problem

Do you ever become frustrated with television because you keep seeing the same things, recycled over and over again? Well I personally don't care about television, but I do sometimes feel that way about numbers.

Let's say a pair of distinct positive integers (n, m) is recycled if you can obtain m by moving some digits from the back of n to the front without changing their order. For example, (12345, 34512) is a recycled pair since you can obtain 34512 by moving 345 from the end of 12345 to the front. Note that n and m must have the same number of digits in order to be a recycled pair. Neither n nor m can have leading zeros.

Given integers A and B with the same number of digits and no leading zeros, how many distinct recycled pairs (n, m) are there with A = n < m = B?

Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of a single line containing the integers A and B.

Output

For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1), and y is the number of recycled pairs (n, m) with A = n < m = B.

Limits

1 = T = 50.
A and B have the same number of digits.

Small dataset

1 = A = B = 1000.

Large dataset

1 = A = B = 2000000.


Input 
  
4
1 9
10 40
100 500
1111 2222

Output 

Case #1: 0
Case #2: 3
Case #3: 156
Case #4: 287

*/

#include <algorithm>  
#include <iostream>  
#include <sstream>  
#include <string>  
#include <vector>  
#include <queue>  
#include <set>  
#include <map>  
#include <cstdio>  
#include <cstdlib>  
#include <cctype>  
#include <cmath>  
#include <list>  
#include <cassert>
#include <cstring>
using namespace std;  

#define PB push_back  
#define MP make_pair  
#define SZ(v) ((int)(v).size())  
#define FOR(i,a,b) for(int i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)  
#define REPE(i,n) FORE(i,0,n)  
#define FORSZ(i,a,v) FOR(i,a,SZ(v))  
#define REPSZ(i,v) REP(i,SZ(v))  
typedef long long ll;  

void run(int casenr) {
	int a,b; scanf("%d%d",&a,&b);
	ll ret=0;
	FORE(n,a,b) {
		int ndig=1,maxpower=1,curpower=10;
		for(int x=n/10;x>0;x/=10) ++ndig,maxpower*=10;
		vector<int> cur;
		FOR(i,1,ndig) {
			int m=(n%curpower)*(maxpower/curpower*10)+(n/curpower);
//			printf("%d shift %d = %d (%d+%d)\n",n,i,m,(n%curpower)*(maxpower/curpower),(n/curpower));
			if(a<=m&&m<n&&n<=b) cur.PB(m);
			curpower*=10;
		}
		sort(cur.begin(),cur.end()); cur.erase(unique(cur.begin(),cur.end()),cur.end());
		ret+=SZ(cur);
	}
	
	printf("Case #%d: %lld\n",casenr,ret);
}

int main() {
	int n; scanf("%d",&n); FORE(i,1,n) run(i);
	return 0;
}
