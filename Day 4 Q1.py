p=0
for i in range(196):
    req=0
    s=input().split(':')
    s1=s[1]
    sone=s1.split('|')
    sone1=sone[0].split()
    sone2=sone[1].split()
    for j in sone2:
        for k in sone1:
            if(j==k):
                req = req + 1
                break
    if(req!=0):
        p=p+(2**(req-1))
print(p)
