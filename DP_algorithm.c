#include <stdio.h>
#include <windows.h>

int dp_C(int n, int k);

void main(){
	int n = 0, k = 0;
	int result = 0;

	printf("this is DP algorithm\ninput n-element set and k-combinations: ");
	scanf("%d %d", &n, &k);
	printf("input n: %d, input k: %d\n", n, k);
	
	result = dp_C(n,k);

	printf("result is : %d\n", result);

	system("PAUSE");
}

int dp_C(int n, int k){
	int array[n + 1][k + 1];
	int i = 0, j = 0;

	for(i = 0; i < n + 1; i++){
		for(j = 0; j < k + 1; j++){
			array[i][j] = 0;
		}
	}

	for(i = 1; i < n + 1; i++){
		for(j = 0; j <= i; j++){
			if(j > k) continue;
			else if(j == 0) array[i][j] = 1;
			else if(i == j) array[i][j] = 1;
			else array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
	}
	return array[n][k];
}
