import sys
import pygame
import random
import math
#from Spites_class import *

WID = 1000
HEI = 704
FPS = 60
x = WID / 2
y = HEI / 2
pygame.init()
screen =  pygame.display.set_mode((WID, HEI))
pygame.display.set_caption("My Game2")
backgr = pygame.image.load('spc.jpg')
clock = pygame.time.Clock()

def rect():
    pygame.draw.rect(screen, (255, 0, 255), (x, y, 30, 40))
running = True
while running:
    screen.blit(backgr, (0, 0))
    clock.tick(FPS)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
















    pygame.display.flip()
pygame.quit()

'''rect()
    keys = pygame.key.get_pressed()
    keys2 = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        x -= 10
        if keys2[pygame.K_SPACE]:
            x -= 20
    if keys[pygame.K_RIGHT]:
        x += 10
        if keys2[pygame.K_SPACE]:
            x += 20
    if keys[pygame.K_UP]:
        y -= 10
        if keys2[pygame.K_SPACE]:
            y -= 20
    if keys[pygame.K_DOWN]:
        y += 10
        if keys2[pygame.K_SPACE]:
            y += 20'''

