def fib(serice):
    if serice==0:
        return 0
    elif serice==1:
        return 1
    else:
        return fib(serice-1) + fib(serice-2)

how_many_numbers = int(input("Enter how many fibonacci numbers do you want: "))
for each in range(how_many_numbers):
    print("{}".format(fib(each)),end=" ")
