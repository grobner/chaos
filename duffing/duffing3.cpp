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
double K = 0.05;
double B = 7.5;

double f(double t, double x, double v){
  double ans;
  ans = -0.05 * v - (x * x * x) + 7.5 * cos(t);
  return ans;
}
double g(double t, double x, double v){
  return v;
}
int main() {
  cout << fixed << setprecision(10);
  double a,h;
  int n;
  double x,v,t;
  double k,k1,k2,k3,k4;
  double l,l1,l2,l3,l4;
  string filename = "duffing.dat";

  cout << "Specify the value of a" << endl;
  cin >> a;
  cout << "Specify the number of steps" << endl;
  cin >> n;
  cout << "Spefify the value of x_0" << endl;
  cin >> x;
  cout << "Specify the value of v_0" << endl;
  cin >> v;

  int m = 0;
  h = a/n;
  cout << h << endl;
  ofstream ofs(filename);
  rep(i,n+1){
    t = h * i;
    if(t>=m*PI){
      ofs << x << " " << v << endl;
      m++;
      cout << t << endl;
    }
    k1 = h * f(t,x,v);
    l1 = h * g(t,x,v);
    k2 = h * f(t+h/2,x+l1/2,v+k1/2);
    l2 = h * g(t+h/2,x+l1/2,v+k1/2);
    k3 = h * f(t+h/2,x+l2/2,v+k2/2);
    l3 = h * g(t+h/2,x+l2/2,v+k2/2);
    k4 = h * f(t+h,x+l3,v+k3);
    l4 = h * g(t+h,x+l3,v+k3);

    k = (k1 + 2*k2 + 2*k3 + k4)/6;
    l = (l1 + 2*l2 + 2*l3 + l4)/6;
    v = v + k;
    x = x + l;
  }
}
