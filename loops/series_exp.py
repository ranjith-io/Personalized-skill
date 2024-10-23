import math
a=int(input())
exp=int(input())
sum=a
print(a,"+ ",end="")

for i in range (1,exp):
    if i==1:
        ex=a*10
        eq=ex+a
        sum+=eq
        print(eq,"+ ",end="")
        
    else:
        ex=eq*10
        eq=ex+a
        sum+=eq
        if i==exp-1:
            print(eq)
        else:
            print(eq,"+ ",end="")
        
print(sum)
    
    