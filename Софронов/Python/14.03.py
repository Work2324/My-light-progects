def plos():
    a=int(input("a="))
    b=int(input("b="))
    print("S=", a*b)
def plos2():
    m=int(input("m="))
    n=int(input("n="))
    k=int(input("k="))
    print("P=", m+n+k)
def plos3():
    r=int(input("r="))
    print("L=", 2*3,14*r)

    
y=int(input("1-S прямоугольника\n2-P треугольника\n3-L окружности\n"))
if y==1:
    plos()
elif y==2:
    plos2()
elif y==3:
    plos3()
else:
    print("такого варианта нет")

