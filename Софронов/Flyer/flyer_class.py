class flyer:
    def __init__(self, x, y, dist, fuel, fuel_cons, fuel_tank, instruction):
        self.x = x
        self.y = y
        self.dist = dist
        self.fuel = fuel
        self.fuel_cons = fuel_cons
        self.fuel_tank = fuel_tank
        self.instruction = instruction

    def flying(self, up, d):
        if abs(d) + 2 * up <= self.fuel_cons * self.fuel:
            # self.y += up
            self.x += d
            self.fuel -= (abs(d) + 2 * up) / self.fuel_cons
            self.dist += (abs(d) + 2 * up)
            return True
        else:
            if d >= 0:
                self.x += self.fuel_cons * self.fuel - 2 * up
            else:
                self.x -= self.fuel_cons * self.fuel - 2 * up
            self.dist += (self.fuel_cons * self.fuel + 2 * up)
            self.fuel = 0
            return False

    def refill(self, f):
        if f >= 0:
            if self.fuel_tank - self.fuel >= f:
                self.fuel += f
                return 1
            else:
                self.fuel = self.fuel_tank
                return 2
        else:
            return 3

    def getx(self):
        return self.x

    def gety(self):
        return self.y

    def getfuel(self):
        return self.fuel

    def print_instr(self):
        file = open(self.instruction, 'r')
        instr_func = file.read()
        file.close()
        print(instr_func)


fly_car = flyer(0, 0, 0, 0, 0, 0, "Instruction_for_blond.txt")
fly_car.print_instr()
fly_car.refill(5)
print("\n\"...\"\n")
