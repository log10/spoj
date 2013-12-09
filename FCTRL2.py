/*   just find the factorial of given number */

t=int(input())
while t>0:
	t=t-1
	temp=int(input())
	num=temp
	while temp>1:
		temp=temp-1
		num=num*temp
	print(num)