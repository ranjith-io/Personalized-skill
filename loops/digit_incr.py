def dinc(a):
    result=0
    place=1
    while a>0:
        res=a%10
        di=(res+1)%10
        result+=(di*place)
        place*=10
        a//=10
    print(result)    
def main():
    a=int(input())
    dinc(a)
main()