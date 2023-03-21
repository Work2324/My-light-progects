import pygame
import random
import math

WIDTH = 1000
HEIGHT = 704
FPS = 60
x = WIDTH / 2
y = HEIGHT / 2
x1 = 30
y1 = HEIGHT / 2
r = 20
i = 0

pygame.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("My Game")
background = pygame.image.load('spc.jpg')
clock = pygame.time.Clock()

def oval():
    pygame.draw.circle(screen, (0, 255, 0), (x1, y1), r, 0) 

def player():
    pygame.draw.rect(screen, (255, 0, 0), (x, y, 30, 40))

def check():
    return math.sqrt((x-x1)**2 + (y - y1)**2) <= r or math.sqrt((x - x1)**2 + ((y+40)-y1)**2) <= r or math.sqrt(((x+30)-x1)**2 + ((y - y1)**2)) <= r or math.sqrt(((x+30)-x1)**2 + ((y+40)-y1)**2) <= r


running = True
while running:
    screen.blit(background, (0, 0))
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    keys = pygame.key.get_pressed()
    if keys[pygame.K_UP]:
        y-=9
    if keys[pygame.K_DOWN]:
        y+=9
    if keys[pygame.K_LEFT]:
        x-=9
    if keys[pygame.K_RIGHT]:
        x+=9
    if x > WIDTH:
        x = 0
    if x+30 < 0:
        x = WIDTH
    if y > HEIGHT:
        y = 0
    if y+40 < 0:
        y = HEIGHT
    oval()
    player()
    if check():
        x1, y1 = random.randint(20, 980), random.randint(20, 684)
        i+=5


    
    pygame.display.flip()
pygame.quit()
    
