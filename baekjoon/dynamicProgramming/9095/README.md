# [9095](https://www.acmicpc.net/problem/9095)
solved on: 2023-12-28

## Solutions

1. 테이블 정의하기
	- `d[i]` : `i`를 1, 2, 3의 합으로 나타내는 방법의 수
2. 점화식 찾기
  - d[4] = ?
  - 1 + 1 + 1 $+ 1$, 2 + 1 $+ 1$, 1 + 2 $+ 1$, 3 $+ 1$ => d[3]
  - 1 + 1 $+ 2$, 2 $+ 2$ => d[2]
  - 1 $+ 3$ => d[1]
3. 초기값 설정하기
  - d[1] = 1
  - d[2] = 2
  - d[3] = 4
## References
