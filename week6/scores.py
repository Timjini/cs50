scores = []

for i in range(3):
    score = int(input("Score: "))
    scores += [score]

average = sum(scores) / len(scores)
print (average)