macro = {"Ox": 1, 
        "Tiger": 2, 
        "Rabbit": 3, 
        "Dragon":4, 
        "Snake":5, 
        "Horse":6, 
        "Goat": 7, 
        "Monkey": 8, 
        "Rooster": 9, 
        "Dog": 10, 
        "Pig": 11, 
        "Rat": 12
    }

n = int(input())

soma = 0
cows_years = dict()
cows_diference = dict()
cows_position = dict()

resultado = 0
cows_years["Bessie"] = "Ox"
cows_diference["Bessie"] = 0
cows_position["Bessie"] = 0

for i in range(n):

    entrada = input().split()
    cows_years[entrada[0]] = entrada[4]
    
    if entrada[3] == "previous":
        diferenca = 12 - (macro[entrada[4]] - macro[cows_years[entrada[7]]])

        if entrada[7] != "Bessie":
            if cows_position[entrada[7]] == 1:
                cows_position[entrada[0]] = 1
            else:
                if diferenca > cows_diference[entrada[7]]:
                    cows_position[entrada[0]] = 1
                elif diferenca < cows_diference[entrada[7]]:
                    cows_position[entrada[0]] = -1
                else:
                    cows_position[entrada[0]] = 0
        else:
            cows_position[entrada[0]] = 1

        if cows_position[entrada[7]] == -1:
            cows_diference[entrada[0]] = diferenca - cows_diference[entrada[7]]
        else:
            cows_diference[entrada[0]] = diferenca + cows_diference[entrada[7]]
                
    if entrada[3] == "next":
        diferenca = macro[entrada[4]] - macro[cows_years[entrada[7]]]
        if diferenca < 0:
            diferenca += 12

        if entrada[7] != "Bessie":
            if cows_position[entrada[7]] == -1:
                cows_position[entrada[0]] = -1
            else:
                if diferenca > cows_diference[entrada[7]]:
                    cows_position[entrada[0]] = -1
                elif diferenca < cows_diference[entrada[7]]:
                    cows_position[entrada[0]] = 1
                else:
                    cows_position[entrada[0]] = 0
        else:
            cows_position[entrada[0]] = -1

        if cows_position[entrada[7]] == 1:
            cows_diference[entrada[0]] = cows_diference[entrada[7]] - diferenca
        else:
            cows_diference[entrada[0]] = diferenca + cows_diference[entrada[7]]

print(cows_diference["Elsie"])
