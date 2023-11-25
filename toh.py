# Use recursion to solve the tower of hanoi mathematical problem, in python

def TowerOfHanoi(n , source, destination, auxiliary):
	if n==1:
		print ("Move disk 1 from ",source,"to ",destination)
		return
	TowerOfHanoi(n-1, source, auxiliary, destination)
	print ("Move disk",n,"from ",source,"to ",destination)
	TowerOfHanoi(n-1, auxiliary, destination, source)
		
# Driver code: basically int main but in python
n = 3
TowerOfHanoi(n,'A','B','C') 
# A, C, B are the name of rods, for the disks to be placed on

