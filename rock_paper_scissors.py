# : Rock, Paper, Scissors

import random
choices = ["Rock","Paper","Scissors"]
play_again = False
print("######## Rock, Paper, Scissors ########")
while(not play_again):
    choice = int(random.random()*3)
    answer = input("Choose One from Rock, Paper, Scissors:")
    if choices[choice] == answer:
        print("Drawing ")
    elif answer == "Rock" and choices[choice] == "Scissors":
        print("You  winning")
    elif answer == "Rock" and choices[choice] == "Paper":
        print("Computer winning")
    elif answer == "Paper" and choices[choice] == "Rock":
        print("You  winning")
    elif answer == "Paper" and choices[choice] == "Scissors":
        print("Computer  winning")
    elif answer == "Scissors" and choices[choice] == "Paper":
        print("You  winning")
    elif answer == "Scissors" and choices[choice] == "Rock":
        print("Computer  winning")
    re_play = input("Do you Want Play Again Yes/No? ")
    if re_play == "No":
        play_again = True
    
    