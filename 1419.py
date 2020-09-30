n = int(input())
a = list(map(int,input().split()))
a.sort()
if n<3:
    print(0)
    for i in range(n) :print(a[i],end=' ')
    print()
else:
    print((n-1)//2)
    x=0
    if n%2==1:
        n-=1
        x=-1
    for i in range(1,n,2):
        print(a[i],a[i-1],end=' ')
    if x==-1:
        print(a[n])
    else:
        print()
