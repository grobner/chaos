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
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
//isPrime
//modpow modinv
//getDigit
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
double logisic_map(double a, double x){
  double res;
  res = a * x * (1 - x);
  return res;
}
int main() {
  cout << fixed << setprecision(10);
  string filename;
  int steps;
  double a,x_0,x;
  ostringstream sout;

  cout << "Specify the steps" << endl;
  cin >> steps;
  cout << "Specify the value of a" << endl;
  cin >> a;
  x_0 = 0.04;
  sout << a << ".dat";
  filename = sout.str();
  ofstream ofs(filename);
  x = x_0;
  ofs << 0 << " " << x << endl;
  rep(i,steps){
    x = logisic_map(a,x);
    ofs << i+1 << " " << x << endl;
  }
}
