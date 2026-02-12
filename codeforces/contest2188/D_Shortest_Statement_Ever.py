import sys

def solve():
    try:
        line = sys.stdin.readline()
        if not line: return
        t = int(line.strip())
    except ValueError:
        return

    for _ in range(t):
        x, y = map(int, sys.stdin.readline().split())
        
        common = x & y
        if common == 0:
            print(f"{x} {y}")
            continue
            
        # Strategy 1: p keeps all, q loses common bits
        p1, q1 = x, y ^ common
        dist1 = abs(x - p1) + abs(y - q1)
        
        # Strategy 2: q keeps all, p loses common bits
        p2, q2 = x ^ common, y
        dist2 = abs(x - p2) + abs(y - q2)
        
        best_p, best_q, min_dist = p1, q1, dist1
        if dist2 < min_dist:
            min_dist = dist2
            best_p, best_q = p2, q2
            
        # Strategy 3: Look at the lowest common bit and "round up"
        # We only need to check the lowest common bit to potentially jump higher
        lb = common & -common
        
        # Try "carrying" the bit in p
        p3 = (x // (lb * 2) + 1) * (lb * 2)
        q3 = y & ~p3
        if abs(x - p3) + abs(y - q3) < min_dist:
            min_dist = abs(x - p3) + abs(y - q3)
            best_p, best_q = p3, q3
            
        # Try "carrying" the bit in q
        q4 = (y // (lb * 2) + 1) * (lb * 2)
        p4 = x & ~q4
        if abs(x - p4) + abs(y - q4) < min_dist:
            min_dist = abs(x - p4) + abs(y - q4)
            best_p, best_q = p4, q4
            
        print(f"{best_p} {best_q}")

solve()