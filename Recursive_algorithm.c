#include <stdio.h>
#include <windows.h>

int re_C(int n, int k);

void main(){
	int n = 0, k = 0;
	int result = 0;

	printf("this is recursion algorithm\ninput n-element set and k-combinations: ");
	scanf("%d %d", &n, &k);
	printf("input n: %d, input k: %d\n", n, k);
	
	result = re_C(n,k);

	printf("result is : %d\n", result);

	system("PAUSE");
}

int re_C(int n, int k){
	if(k == 0 || k == n)
		return 1;
	else
		return (re_C(n - 1, k - 1) + re_C(n - 1, k));
}
