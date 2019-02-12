import time
#input: the array and item we are searching for. output: an unsuccessful search
def binary_search(array, item):
    left = 0; right = len(array) - 1
    while left <= right:
        index = (left + right) // 2
        if array[index] < item: left = index + 1
        elif array[index] > item: right = index - 1
        else: return index
    raise ValueError('search was unsuccessful')

array = [0] * 2097152

start = time.time()
for _ in range(10000000):
    try:
        binary_search(array,1)
    except ValueError:
        pass
end = time.time() - start
print(end*1000)
