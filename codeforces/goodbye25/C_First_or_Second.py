import sys

def solve():
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    
    total = 0
    min_abs = float('inf')
    
    for x in a:
        total += abs(x)
        min_abs = min(min_abs, abs(x))
    
    print(total - min_abs)

def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
