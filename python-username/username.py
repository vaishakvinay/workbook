#validate username
#1.username should beless than 12 char.
#2.username should not contain any spaces
#3.username should not contain any digits

user_name=input("enter a username :")

if len(user_name) > 12 :
   
    print("username should contain only 12 characters")
   
elif " " in user_name:
    
    print("username should not have white spaces in between them")

    
elif not user_name.isalpha():
    
    print("username should not contain any digits")
    
else:
    
    print(F"your username is {user_name}")
