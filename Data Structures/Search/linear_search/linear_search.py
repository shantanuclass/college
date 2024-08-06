array = [25 , 50 , 75 , 100]

target = int(input("Enter the Target : "))

for ele in range(0,len(array)):
    if array[ele] == target:
        print(f"target found at index {ele}")