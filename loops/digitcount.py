a =int(input())
count=0
if a==0:
    print("1")
else:
    if a<0:
        a*=-1
    while a!=0:
        
        ct=a%10
        count+=1
        a=a//10
    print(count)