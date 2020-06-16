import os
while(True):
	print("Enter Array : ",end="")
	a = input()
	if(a=='x'):
		os.system('clear')
		print("Finished Code")
		break
	else:
		a = a.strip().split(' ')
		while(True):
			print("Enter the indices : ",end="")
			p = input()
			if(p == 'x'):
				os.system('clear')
				break
			else:
				p = [(int(i)-1) for i in p.strip().split(' ')]
				if(len(p) != 3):
					print("Wrong Number of Inputs!")
				elif(len(set(p))!=3):
					print("Not All Unique!")
				else:
					v0 = a[p[0]]
					v1 = a[p[1]]
					v2 = a[p[2]]
					a[p[1]]=v0
					a[p[2]]=v1
					a[p[0]]=v2
					print(a)

