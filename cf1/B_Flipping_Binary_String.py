import sys

def main():
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        s = data[index]
        index += 1
        
        count_ones = s.count('1')
        
        if count_ones % 2 == 1:
            print(-1)
        elif count_ones == 0:
            print(0)
        else:
            # Find one position i where s[i-1] == '1'
            for i in range(1, n + 1):
                if s[i-1] == '1':
                    print(1)
                    print(i)
                    break

if __name__ == "__main__":
    main()
