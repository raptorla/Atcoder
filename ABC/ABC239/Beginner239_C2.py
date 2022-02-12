def manacher(S):
    C = []
    for a in S:
        C.append(a)
        C.append(0)
    C.pop()

    L = len(C)

    R = [0]*L

    i = j = 0
    while i < L:
        while j <= i < L-j and C[i-j] == C[i+j]:
            j += 1
        R[i] = j
        k = 1
        while j-R[i-k] > k <= i < L-k:
            R[i+k] = R[i-k]
            k += 1
        i += k; j -= k
    return R
str1 = input()
ans = manacher(str1)
print(ans)
