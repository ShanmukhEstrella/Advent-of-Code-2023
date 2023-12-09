p=0
lst=[]
num=[1]*196
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
    lst.append(req)
for i in range(195):
    for j in range(i+1,min(196,lst[i]+i+1)):
        num[j]=num[j]+(1*num[i])
hola=0
for i in num:
    hola=hola+i
print(hola)
