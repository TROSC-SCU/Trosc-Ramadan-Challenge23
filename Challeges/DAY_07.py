# funcation to check if th the input in  "Trosc" or not 

def TroscCheck():
    s = "Trosc"
    c = input()
    if c in s:
        return True
    else:
        return False

if TroscCheck():
    print("YES")
else:
    print("NO")

# what is the wrong in the code???

# 1. The if else statement was not correctly indented.
# 2. A colon was missed from the else statement.
# 3. The print statement was not correctly indented.
# 4. The second else statement missed a colon.

