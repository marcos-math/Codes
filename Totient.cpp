/// Phi de todos os números em O(nloglog) - Tested!
/// n = sum {d|n} {phi(d)};
/// Ex: 6 = phi(1)+phi(2)+phi(3)+phi(6);
#define MAXN 112345
int phi[MAXN + 2];

void totient(){
    for(int i = 1 ; i <= MAXN; i++) phi[i] = i;
    for(int i = 2 ; i <= MAXN; i += 2) phi[i] >>= 1;
    for(int j = 3 ; j <= MAXN; j += 2) {
        if(phi[j] == j){ 
        	phi[j]--;
            for(int i = j + j; i <= MAXN; i += j) phi[i] = phi[i] / j * (j-1);
		}
	}
}