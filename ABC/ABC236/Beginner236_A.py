S = input()
A, B = map(int, input().split())
ans = S[:A-1] + S[B-1] + S[A:B-1] +S[A-1]+ S[B:]
print(ans)