import random

obj = input("Mention the shape (rock/paper/scissor):\n").lower()
r = ['rock', 'paper', 'scissor']
guess = random.choice(r)

print(f"Computer chose: {guess}")

if obj == guess:
    print("It's a tie!")
elif (obj == 'rock' and guess == 'scissor') or (obj == 'paper' and guess == 'rock') or (obj == 'scissor' and guess == 'paper'):
    print("User wins!")
else:
    print("Computer wins!")


