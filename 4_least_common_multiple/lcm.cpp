#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd_fast(int a, int b){

    if(b==0)
    {
        return a;
    }

    return gcd_fast(b,a% b);
}

ll  lcm_naive(ll a, ll b) {

  return  (a * b) / __gcd(a,b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
