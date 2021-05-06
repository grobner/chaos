#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1e9
#define PI 3.14159265359
#define MOD 1000000007
#define ALL(v) v.begin(),v.end()
#define ALLR(v) v.rbegin(),v.rend()
#define F first
#define S second
typedef long long ll;



double logisic_map(double a, double x){
  double res;
  res = a * x * (1 - x);
  return res;
}
int main() {
  int steps,n,igsteps;
  double x0,a,x;
  string filename = "test.dat";
  ofstream ofs(filename);
  cout << fixed << setprecision(10);
  cout << "Specify the ignore steps" << endl;
  cin >> igsteps;
  cout << "Specify the steps" << endl;
  cin >> steps;
  cout << "Specify intial value,  \"x_0\"" << endl;
  cin >> x0;
  n = 1001;

  vector<vector<double>> ans(n,vector<double>(steps));

  rep(i,n){
    a = 3.00 + (double)i/1000;
    //cout << a << endl;
    x = x0;
    rep(j,igsteps){
      x = logisic_map(a,x);
      ans[i][j] = x;
    }
    rep(j,steps){
      x = logisic_map(a,x);
      ans[i][j] = x;
    }
  }

  rep(i,n){
    a = 3.00 + (double)i/1000;
    rep(j,steps){
      ofs << a << " " << ans[i][j] << " " << endl;
    }
  }
}
