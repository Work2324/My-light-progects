import pygame
import sys

pygame.init()
clock = pygame.time.Clock()
background = pygame.image.load('bg.jpg')
windowWidth = 550
windowHeight = 364
screen = pygame.display.set_mode((windowWidth,windowHeight)) # Главное окно
width = 40 # Ширина персонажа
height = 50 # Высота персонажа
x = 0 # Начальная координата х персонажа
y = windowHeight-height # Начальная координата у персонажа
speed = 3 # Скорость перемещения персонажа
isJump = False # Прыгает ли персонаж в данный момент
memB = False
mem = 0
jumpH = 10 # Высота прыжка
look = 'right' # Начальное направления взгляда персонажа

class bullet():
    def __init__(self,x,y,color,radius,speed,vector):
        self.x = x
        self.y = y
        self.color = color
        self.radius = radius
        if vector == 'right': # Если смотрит направо, то пуля будет двигаться вправо, соответственно к х будем прибавлять
            self.speed = speed
        else:
            self.speed = -speed # При движении влево от х вычитаем
    def draw(self,win):
        pygame.draw.circle(win,self.color,(self.x,self.y),self.radius,0)

def updateWindow():
    screen.blit(background, (0, 0))
    pygame.draw.rect(screen, (255, 0, 0), (x, y, width, height))
    for i in bullets:
        if (i.x + i.speed <= windowWidth+i.radius) and (i.x + i.speed >= -i.radius):
            i.draw(screen)
            i.x += i.speed
        else:
            bullets.remove(i)
    pygame.display.update()
bullets = []
while True:
    clock.tick(30) # Количество кадров в секунду
    for event in pygame.event.get():
        if event.type == pygame.QUIT: # Выход из программы
            pygame.quit()
            sys.exit()
        if event.type == pygame.MOUSEBUTTONUP:
            if event.button == 1:
                if len(bullets) < 3:
                    pulya = bullet(x, y, (0, 255, 0), 10, speed * 2, look)
                    bullets.append(pulya)
    keys = pygame.key.get_pressed() # При нажатии какой-либо кнопки она добавляется в этот массив
    # if pygame.MOUSEBUTTONDOWN:

    if keys[pygame.K_a]:
        look = "left" # То, куда "смотрит" персонаж. Нужно для выстрела
        if (x-speed)>=0:  # Проверка границы, в остальных движениях также
            x -= speed
        else:
            pass
    if keys[pygame.K_d]:
        look = 'right'
        if (x+speed)<=(windowWidth-width):
            x += speed
        else:
            pass
    if not(isJump): # Чтобы во время прыжка нельзя было передвигаться вверх или вниз
        if keys[pygame.K_w]:
            if (y-speed)>=0:
                y -= speed
        if keys[pygame.K_s]:
            if (y+speed)<=(windowHeight-height):
                y += speed
        if keys[pygame.K_SPACE]:
            isJump = True
    else:
        if jumpH >= -10:
            if jumpH < 0:
                if not memB:
                    y += (jumpH ** 2) / 2
                    jumpH -= 1
                else:
                    if (jumpH - mem) > 10:
                        y += (jumpH ** 2) / 2
                        jumpH -= 1
                    else:
                        pass
            else:
                if (y - (jumpH ** 2) / 2) < 0 and not memB:
                    y = 0
                    mem = jumpH
                    memB = True
                    jumpH -= 1
                if (y - (jumpH ** 2) / 2) < 0 and memB:
                    y = 0
                    jumpH -= 1
                else:
                    y -= (jumpH ** 2) / 2
                    jumpH -= 1
        else:
            isJump = False
            jumpH = 10


    updateWindow()
