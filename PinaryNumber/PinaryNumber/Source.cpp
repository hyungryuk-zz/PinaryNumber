#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf_s("%d", &n);
	long long int *arr = (long long int*)malloc(sizeof(long long int)*(n+1));
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%lld", arr[n]);

}