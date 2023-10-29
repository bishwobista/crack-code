num=abs(int(input("Enter integer :")))
i=2
l=[]
loop_ctr=int(num/2)
qt=num
if num%2!=0:
    loop_ctr=int((num+1)/2)

for i in range(2,loop_ctr):
    while(qt%i==0):
        qt=qt/i
        l.append(i)
    if qt==1:
        break
print("Prime factors are: ",l)
