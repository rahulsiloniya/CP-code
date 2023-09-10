import math
s = input()

new = ''
for i in s:
    if i.islower():
        new += i.upper()

    else:
        new += i.lower()

# print(new)

caps = 0
lows = 0

for i in new:
    if i.isupper(): caps += ord(i)
    else: lows += ord(i)

# print(caps, lows)

def prime(n: int) -> int:
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True

if not prime(abs(caps - lows)):
    print(0)
else:
    print(1)
