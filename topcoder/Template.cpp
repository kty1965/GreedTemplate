//Template created by topcoder00

//headers

# include <list>
# include <deque>
# include <bitset>
# include <algorithm>
# include <functional>
# include <numeric>
# include <utility>
# include <sstream>
# include <iostream>
# include <iomanip>
# include <cstdio>
# include <cmath>
# include <cstdlib>
# include <ctime>
# include <set>
# include <map>
# include <cmath>
# include <queue>
# include <limits>
# include <stack>
# include <vector>
# include <cstring>
# include <cstdio>
# include <fstream>
using namespace std;

//functions

int pel(string s){string t;t=s;reverse(t.begin(),t.end());if(s==t)return 1;return 0;}
string toString(int n){ostringstream ost;ost<<n;ost.flush();return ost.str();}
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
bool isprime(int m){if(m<2) return 0;for( int i=2; i*i<=m ; i++)if(m%i==0)return 0; return 1;return 0;}

//Defines

# define __(array,w)   memset(array,w,sizeof array)
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define REP(i, a) FOR(i,0,a)
# define all(c) (c).begin(), (c).end()
# define sz(x) x.size()
# define pb push_back
# define MP make_pair
# define SBS(s,a,b) (s).substr(a,b)
# define UNQ(s) {sort(all(s));(s).erase(unique(all(s)),s.end());}
# define rive(s) reverse(s.begin(),s.end())
# define VI vector<int>
# define VS vector<string>
# define VC vector<char>
# define out(a) cout<<#a<<"= "<<a<<endl;

class ${ClassName} {
  public:
    ${Method.ReturnType} ${Method.Name}(${Method.Params}) {
      return ${Method.ReturnType;ZeroValue};
    }
};


${TestCode}