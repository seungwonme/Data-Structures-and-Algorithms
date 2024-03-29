#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

// 2^n * 2^n 배열에서 (r, c)를 방문하는 순서를 반환하는 함수
int	func(int n, int r, int c)
{
	if (n == 0) return 0; // base condition
	int half = 1 << (n - 1);
	if (r < half && c < half) return func(n - 1, r, c);
	if (r < half && c >= half) return half * half + func(n - 1, r, c - half);
	if (r >= half && c < half) return 2 * half * half + func(n - 1, r - half, c);
	return 3 * half * half + func(n - 1, r - half, c - half);
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, r, c; cin >> n >> r >> c;
	cout << func(n, r, c) << '\n';
	return 0;
}
