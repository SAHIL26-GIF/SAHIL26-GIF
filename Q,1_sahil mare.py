if __name__ == '__main__':
    l1=[]
    min=0
    l2=[]
    i=0
    n = int(input())
    if(n<=0):
        print("Invalid Input")
    for i in range(0,n):
        l1.append(input())
    l1.sort(key=len)
    if (n > 0):
        print(l1)