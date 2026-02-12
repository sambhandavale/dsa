import sys

def solve():
    n = int(sys.stdin.readline())
    s = sys.stdin.readline().strip()
    
    ones = [i for i, char in enumerate(s) if char == '1']
    
    if not ones:
        print((n + 2) // 3)
        return

    total = len(ones)
    
    total += ones[0] // 3
    total += (n - 1 - ones[-1]) // 3
    
    for i in range(len(ones) - 1):
        gap = ones[i+1] - ones[i] - 1
        if gap >= 3:
            total += (gap - 1) // 3
            
    print(total)

line = sys.stdin.readline()
if line:
    t = int(line)
    for _ in range(t):
        solve()
