import numpy as np

SZAMOKSZAMA = 10

def main():
    szamok = [0.0]*10
    osszeg = 0.0
    print("Irjon be 10 szamot: ")
    for i in range(0,10):
        szamok[i] = float(input(f"{i+1}. szam: "))
        osszeg+=szamok[i]
    for item in szamok:
        if item < osszeg/SZAMOKSZAMA:
            print(f"{item} az atlag alatt van.")

main()