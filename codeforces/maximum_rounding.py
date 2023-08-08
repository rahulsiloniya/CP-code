for _ in range(int(input())):
    n = input()
    arr = [0] + list(map(int, n))

    # print(arr)

    i = len(arr) - 1
    prev = i + 1
    while i > 0:
        if arr[i] >= 5:
            arr[i] = 0
            while i > 0 and arr[i - 1] == 9:
                arr[i] = 0
                i -= 1
            # print('after 9s: ', ''.join(arr))
            # arr[i - 1] = str(int(arr[i - 1]) + 1)
            arr[i - 1] = arr[i - 1] + 1
            j = i
            while j < prev:
                arr[j] = 0
                j += 1
            prev = i + 1
            # print('after: 0s', ''.join(arr))
            # arr[i] = str(int(arr[i]) + 1)
        
        i -= 1
    
    result = ''
    if arr[0] != 0:
        # result = ''.join(arr)
        for i in arr:
            print(i, end='')
        print()
    
    else:
        # result = ''.join(arr[1:])
        for i in range(1, len(arr)):
            print(arr[i], end='')
        print()
    # print(result)