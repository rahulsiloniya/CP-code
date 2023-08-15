n = int(input())
s = input()
q = int(input())

arr = list(s)
caps = 0
ops = []
last_index = -1
for i in range(q):
    t, x, c = map(str, input().split())
    ops.append([t, x, c])
    if t == '2' or t == '3': last_index = i

for i in range(last_index + 1):
    if ops[i][0] == '1':
        arr[int(ops[i][1]) - 1] = ops[i][2]

    if ops[i][0] == '2':
        caps = -1

    if ops[i][0] == '3':
        caps = 1

if caps > 0:
    for i in range(n):
        arr[i] = arr[i].upper()
if caps < 0:
    for i in range(n):
        arr[i] = arr[i].lower()

for i in range(last_index + 1, q):
    if ops[i][0] == '1':
        arr[int(ops[i][1]) - 1] = ops[i][2]

print(''.join(arr))
