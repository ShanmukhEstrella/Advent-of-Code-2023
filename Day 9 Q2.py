req=0
for i in range(200):
    s=input().split()
    n=len(s)
    s1=[0]*n
    while(s!=s1):
        req=req+(int(s[0]))
        s2=[0]*(n-1)
        for i in range(n-1):
            s2[i]=int(s[i])-int(s[i+1])
        s=s2
        s1=[0]*(n-1)
        n=len(s)
print(req)

