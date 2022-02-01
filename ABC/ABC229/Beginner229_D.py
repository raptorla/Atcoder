S = input()
S1 = S
S2 = S
flag = False
Slength = int(len(S))
S1 = "a" * Slength + S1

for i in range (Slength//2, 0):
    if(S1 == S1[::-1]):
        flag = True
        break
        
    else:
        S1 = S1.lstrip("a")


for i in range (Slength//2, Slength + 1):
    if(S2 == S2[::-1]):
        flag = True
        break
        
    else:
        S2 = "a" + S2

if(flag):
    print("Yes")
    
else:
    print("No")
