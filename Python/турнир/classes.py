import pygame

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