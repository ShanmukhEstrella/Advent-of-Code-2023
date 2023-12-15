a=input().split(",")
req=0
for i in a:
    s=i
    b=0
    for j in s:
        b=b+ord(j)
        b=b*17
        b=b%256
    req=req+b
print(req)
