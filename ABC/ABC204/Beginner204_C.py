from collections import deque

N, M = map(int, input().split())

connect = [[] for i in range(N + 1)]

for i in range (M):
    A, B = map(int, input().split())
    connect[A].append(B)

def BFS(start):
    visited = [False] * (N + 1)
    visited[start] = True
    count = 1
    que = deque()
    que.append(start)

    while 0 < len(que):
        now_city = que.popleft()
        for to_city in connect[now_city]:
            if visited[to_city] == False:
                visited[to_city] = True
                count += 1
                que.append(to_city)
    return count
ans = 0

for i in range(1, N + 1):
    ans += BFS(i)

print(ans)