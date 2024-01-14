import random
topRange=input("Enter the number:")

if topRange.isdigit():
    topRange=int(topRange)


    if (topRange <= 0):
        print("Plz enter the number greater than 0 next time")
        # quit()
        else:
            print("plz enter the number next time")
            quit()

            randomNum=random.randint(0,topRange)
