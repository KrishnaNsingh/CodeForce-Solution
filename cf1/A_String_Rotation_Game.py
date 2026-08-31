from collections import Counter
import sys

input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1

for _ in range(t):
    n = int(data[index])
    index += 1
    s = data[index]
    index += 1
    
    # Compute max blocks over all rotations
    max_score = 0
    for start in range(n):
        blocks = 1
        prev = s[start]
        pos = (start + 1) % n
        while pos != start:
            curr = s[pos]
            if curr != prev:
                blocks += 1
                prev = curr
            pos = (pos + 1) % n
        if blocks > max_score:
            max_score = blocks
    
    print(max_score)
