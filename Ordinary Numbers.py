t=int(input())    
for i in range(t):
    n=int(input())
    ans=0
    if(n<=9):
        ans+=n
    elif(n==10):
        ans+=9
    else:
        x=len(str(n))
        t=0
        while(x>0):
            t=t*10+1
            x-=1
        ans+=n//t
        t=t//10
        while(t>0):
            ans+=9
            t=t//10
        
            
    print(ans)            
    
