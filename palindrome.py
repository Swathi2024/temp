num=int(input("Enter a number:"))
temp=num
rev=0
for i in range(0,num):
  dig=num % 10
  rev = rev * 10 + dig
  num = num // 10
  if(temp == rev):
    print("Number is not palindrome")
  else:
    print("Number is Palindrome")
