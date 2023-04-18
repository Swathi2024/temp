a , b , c = map(int,input("Enter three numbers seperated with space : ").split())
if a>b and a>c :
  print("a = %d is big" %a)
elif b>a and b>c :
  print("b = %d is big" %b)
else :
  print("c = %d is big" %c)
  
