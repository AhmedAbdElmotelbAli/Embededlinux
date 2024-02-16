#*******************************************task1-1*****************************************************

#Write a Python program to count the number 4 in a given list.
print("*******************************************task1-1*****************************************************")
list1 = [1,4,6,7,4]
y=0
for i in list1 :
    if i == 4 :
        y +=1
    else:
        pass
print(y)
#*******************************************task1-2*****************************************************
print("*******************************************task1-2*****************************************************")
#Write a Python program to test whether a passed letter is a vowel or not.

chara = ['a','e','i','o','u']

y = input("Enter a Character:")


if y.lower() in chara:
	print(f"{y} is vowel")
else:
	print(f"{y} is not vowel")

#*******************************************task1-3*****************************************************
print("*******************************************task1-3*****************************************************")
import os

#for get variable
username = os.getenv('USERNAME')
print(f'Username: {username}')

#  environment variables
ALLENV = os.environ
print('All Environment Variables: ')
for key,value in ALLENV.items():
	print(f"{key} : {value}")
#*******************************************task3*****************************************************
print("*******************************************task3*****************************************************")
import math
radius = float(input("Enter radius: "))
if radius>0 :
    print(f"Area = {math.pi * radius * radius}")
else:
    print("err")
#*******************************************task4*****************************************************
print("*******************************************task4*****************************************************")
import calendar

month = int(input("Enter month: "))
year = int(input("Enter year: "))

print(calendar.month(year,month))
#*******************************************quick_task1*****************************************************
print("*******************************************quick_task1*****************************************************")
x = int(input("Please Enter first Number: "))
y = int(input("Please Enter second Number: "))
print(x+y)
print(x-y)
print(x*y)
print(x/y)
#*******************************************quick_task2*****************************************************
print("*******************************************quick_task2*****************************************************")
sign = {
	"Ahmed" : 1394,
	"Ali" : 6078,
	"Amr" : 9354
}

def check_enter(username, password):
	if username in sign:
		if int(password) == sign[username]:
			return True
		return False

username = input("Please enter your username\n").capitalize()
password = input("Please enter your password\n")

if check_enter(username, password):
    print(f"Welcome, {username}in site\n")
else:
    print("Incorrect username or password!\n")