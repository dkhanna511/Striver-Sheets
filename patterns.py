

## PATTERN ##
'''
*********
 *******
  *****
   ***
    *

'''


# N = int(input())
N = 5

for i in range(N, 0, -1):
    # print(i)
    print(" "* (N-i) + "*" * (2 * i - 1))


'''
    *
   ***
  *****
 *******
*********      

'''

# N = int(input())
N = 5
for i in range(0, N):
    # print(i)
    print(" "* (N-i) + "*" * (2 * i + 1))




'''
    *
   ***
  *****
 *******
*********      
 *******
  *****
   ***
    *

'''


N = int(input())

for i in range(0, N):
    # print(i)
    print(" "* (N-i) + "*" * (2 * i + 1))


for i in range(0, N):
    print(" "* (i+1)  + "*" * (2 * (N-i) -1))


'''

*
**
*** 
****
*****
******  
*****
****
***    
**
*

'''


# N = 5
for i in range(0, N):
    print("*" * (i + 1))

for i in range(0, N):
    print("*"* (N -i- 1))




'''
1

01

101

0101

10101
'''

# N = int(input())

N = 5
for i in range(0, N):
    for j in range(i + 1):
        if (i+j)%2 ==0 :
            print('1', end = "")
        else:
            print('0', end = "")
    print("\n")




'''
1        1
12      21
123    321
1234  4321
1234554321

'''


# N = 5
for i in range(0, N):
    for j in range(i+1):
        # print((j+1) + " " * (2*N - 2*i - 2)
        print(j+1, end = "")
        
    print(" " * (2*N - 2*i - 2), end = "")
    
    for j in range(i+1, 0, -1):
        print(j, end = "")
    print()


'''
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
'''

N = int(input())

count = 1
for i in range(N):
    for j in range(i+1):
        print(count, end= " ")
        count = count + 1
    print()




'''
A
AB
ABC
ABCD
ABCDE
'''

N = int(input())

for i in range(N):
    for j in range(65, 65 + i+1):
        print(chr(j), end = "")
    print()
        


'''
ABCDE
ABCD
ABC
AB
A
'''



N = int(input())

for i in range(N, 0, -1):
    for j in range(65, 65 + i):
        print(chr(j), end = "")
    print()
        


'''
A
BB
CCC
DDDD
EEEEE
'''


N = int(input())

for i in range(N):
    for j in range(i+1):
        print(chr(i + 65), end = "")
    print()
        




'''
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
'''


N = int(input())

for i in range(0, N):
    print(" "  * (N - i - 1), end = "")
    
    for j in range(i+1):
        # print(chr(i + 65), end =)
        print(chr(j  + 65), end = "")
    # print()
    
    for j in range(i, 0 ,-1):
        print(chr(j + 64), end = "")
    
    # for j in range(N, i, -1):
        
    print()


'''
E
DE
CDE
BCDE
ABCDE
'''

N = int(input())

for i in range(0, N):
    for j in range(i+1):
        print(  chr(j + N -i + 64) , end = "")
    print()




'''
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
'''


N = int(input())

for i in range(N, 0, -1):
    print("*"*i + " "* 2 * (N - i ) + "*" * i)

for i in range(1, N+1):
    print("*" * i + " "*(N -i)*2 + "*" *i)
    


'''
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
'''


N = int(input())

for i in range(1, N+1):
    print("*" * i + " "*(N -i)*2 + "*" *i)
    

for i in range(N, 0, -1):
    print("*"*i + " "* 2 * (N - i ) + "*" * i)




'''
*****
*   *
*   *
*   *
*****
'''
N = int(input())

for i in range(N):
    if i == 0 or i == (N -1):
        print("*" * N)
    else:
        print("*" + " "*(N-2) + "*")
    
