def isLeap(year):
    
    leap = False
    
    if year%4==0 and year%100!=0:
        leap = True
    elif year%100==0 and year%400==0:
        leap = True
        
    return print("Leap Year" if leap else("Not Leap Year"))

year = int(input('Enter a year:\n'))
isLeap(year)