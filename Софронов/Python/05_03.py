t=int(input("Введите возраст Тани-"))
m=int(input("Введите возраст Мити-"))
if t>m:
    u=t-((t-m)/2)
    tu=t-u
    mu=u-m
    print("Ответ:", u, tu, mu)
else:
    u=m-((m-t)/2)
    mu=m-u
    tu=u-t
    print("Ответ:", u, mu, tu)
