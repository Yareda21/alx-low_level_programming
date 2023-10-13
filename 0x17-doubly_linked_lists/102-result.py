#!/user/bin/python3

largest_pal = 0

for i in range(0, 1000):
    for j in range(0, 1000):
        product = i * j
        if str(product) == str(product)[::-1] and product > largest_pal:
            largest_pal = product


# saving
with open("102-result", "w") as file:
    file.write(str(largest_pal))
