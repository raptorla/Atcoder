N = int(input())
S = input()
Q = int(input())

S ="0" + S
S = list(S)

flip = False
for i in range(Q):
    T, A, B = map(int , input().split())
    if T == 1:
        if flip == False:
            S[A], S[B] = S[B], S[A]
        else:
            if A <= N:
                A += N
            else:
                A -= N
            if B <= N:
                B += N
            else:
                B -= N
            S[A], S[B] = S[B], S[A]
    else:
        if flip == True:
            flip = False
        else:
            flip = True

S_left = S[1:N+1]
S_right = S[N+1:]

if flip == False:
    ans = S_left + S_right
else:
    ans = S_right + S_left

print("".join(ans))