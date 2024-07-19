weight=int(input("weight : "))
units=input("(k)g or (L)bs : ")
if units.upper()=='K':
    converted=weight/0.450
    print("weight in Lbs : " + str(converted))
else :
    converted=weight*0.45
    print("weight in Kgs : " + str(converted))