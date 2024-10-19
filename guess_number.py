# guess the number from 0 to 100
import random
num = int(random.random()*100)
print(num)
is_correct = False
print("========++++Guess Number From 0 To 100++++========")
while(not is_correct):
    guess = int(input("Enter A Number: "))
    if guess == num:
        print("You Answer is Correct")
        is_correct = True
    elif guess>num:
        print("too high")
    elif guess < num:
        print("too low")