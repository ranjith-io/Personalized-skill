def vowelcount(a):
    string=a
    vcount=0
    vowels="aeiouAEIOU"
    for i in string:
        if i in vowels:
            vcount+=1
    print(vcount)
def main():
    a=input()
    vowelcount(a)
main()