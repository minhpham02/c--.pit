#include <iostream> 
#include <cmath> 
using namespace std; 
#define modulo 1000000007 
int main() { 
	int t;
	cin >> t;
	while (t--) {
		long long n, x;
		cin >> n >> x; 
		long long a[2000]; 
		for (int i = 0; i < n; ++i) {
			cin >> a[i]; 
		} 
		long long o = 0; 
		for (int i = 0; i < n; ++i) { 
			long long s = 1;
			for (int j = n - i - 1; j > 0; --j) {
				s = (s * x) % modulo;
			} 
			o += a[i] * s;
			if (o > modulo) {
				o %= modulo;
				}
			} 
			cout << o << endl;
	} 
}
