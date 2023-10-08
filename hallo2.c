#include <stdio.h>

int main() {
	int m,n,r;
	printf("Masukan nilai M : ");
	scanf("%d",&m);
	printf("Masukan nilai N : ");
	scanf("%d",&n);

	while (n != 0) {
		//printf("Proses ke : %d\n",i);
		r = m%n;
		//printf("hasil dari M modulus N : %d\n",r);
		m=n;
		//printf("nilai M yang baru : %d\n",m);
		n=r;
		//printf("nilai N yang baru : %d\n",n); 
		//i+=1;
	}
	printf("Nilai GCD nya adalah : %d\n",m);
}