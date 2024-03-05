class No:
    def __init__(self, info):
        self.info = info
        self.left = None
        self.right = None

h = None
found = False

def insert(h1, info):
    global h
    if not h1:
        h1 = No(info)
    elif h1.info > info:
        h1.left = insert(h1.left, info)
    else:
        h1.right = insert(h1.right, info)
    return h1

def rmv(h1, info):
    if not h1:
        return None
    
    global h
    aux = None
    ant = None

    if h1.info == info:
        if not h1.left and not h1.right:
            return None
        else:
            if h1.left and not h1.right:
                aux = h1.left
                return aux
            elif h1.right and not h1.left:
                aux = h1.right
                return aux
            else:
                aux = h1.left
                ant = None
                while aux.right:
                    ant = aux
                    aux = aux.right

                if ant:
                    ant.right = aux.left

                aux.right = h1.right
                if aux == h1.left:
                    aux.left = h1.left.left
                else:
                    aux.left = h1.left

                return aux
    elif h1.info > info:
        h1.left = rmv(h1.left, info)
    else:
        h1.right = rmv(h1.right, info)
    return h1

def pre(h1):
    if h1:
        print(' ' * passos, end='')
        print(h1.info, end='')
        pre(h1.left)
        pre(h1.right)

def inf(h1):
    if h1:
        inf(h1.left)
        print(' ' * passos, end='')
        print(h1.info, end='')
        inf(h1.right)

def pos(h1):
    if h1:
        pos(h1.left)
        pos(h1.right)
        print(' ' * passos, end='')
        print(h1.info, end='')

def search(h1, info):
    global found
    if h1:
        if h1.info == info:
            found = True
        elif h1.info > info:
            search(h1.left, info)
        else:
            search(h1.right, info)

testCase = 1
n = 0

while True:
    try:
        c = input()[0]
        if c == 'I':
            c = input()[0]
            if c == ' ':
                info = int(input())
                h = insert(h, info)
                n += 1
            else:
                s = input().split()
                passos = 0
                inf(h)
                print('n')
        elif c == 'P':
            c = input()[0]
            if c == ' ':
                info = int(input())
                print(info, end=' ')
                found = False
                search(h, info)
                if not found:
                    print("nao ", end="")
                print("existen")
            else:
                s = input().split()
                passos = 0
                if s[0] == "EFIXA":
                    pre(h)
                else:
                    pos(h)
                print('n')
        else:
            info = int(input())
            h = rmv(h, info)
            n -= 1
    except EOFError:
        break
