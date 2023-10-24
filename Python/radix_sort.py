def radix_sort(arr: list):
    highest_place = len(str(max(arr)))

    for i in range(highest_place):
        p = 10 ** i
        new_arr = []
        for j in range(10):
            for num in arr:
                if num // p % 10 == j:
                    new_arr.append(num)
        arr = new_arr
    
    return arr


if __name__ == "__main__":
    print(radix_sort([23, 34523, 231, 543, 4321, 14341, 12, 1213, 1234, 532]))
