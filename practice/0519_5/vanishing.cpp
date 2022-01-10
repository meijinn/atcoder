#include <bits/stdc++.h>

int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int v = ri();
	int t = ri();
	int s = ri();
	int d = ri();
	puts(d < v * t || d > v * s ? "Yes" : "No");
	
	return 0;
}

//分からなかった問題