def instruction(instr):
            file = open(instr, 'r')
            instr_func = file.read()
            file.close()
            print(instr_func)

instruction('Instruction_for_blond.txt')
