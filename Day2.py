meal_cost = float(raw_input())
tip_percent = int(raw_input())
tax_percent = int(raw_input())

tip = (meal_cost *float(tip_percent)/100)
tax = (meal_cost *float(tax_percent)/100)

total_cost =  meal_cost + tax + tip

print "The total meal cost is" , int(round(total_cost)) ,"dollars."
