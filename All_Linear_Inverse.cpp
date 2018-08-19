//All Linear Modular Inverse - Tested!
#define MAXN 112345
typedef long long ll;
ll inv[MAXN];
void allInv(ll p){ //If mod isn't prime, some of them became 0!
	inv[1] = 1;
	for(int i = 2 ; i < p ; i++)
		inv[i] = (p - (p / i) * inv[p % i] % p) % p;
}
