import sys
import threading

def input():
    return sys.stdin.readline().strip()

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        max_val = max(a)
        a.remove(max_val)
        new_a = [abs(a[i+1] - a[i]) for i in range(len(a) - 1)]
        print(sum(new_a))


def main():
    solve()

if __name__ == "__main__":
    main()
