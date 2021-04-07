import numpy as np

def average():
    szam = 0.0
    ossz = 0.0
    atlag = 0.0
    print("Irjon be 10 szamot: ")
    for i in range(0,10):
        szam = float((input(f"{i+1}. szam: ")))
        ossz = ossz+szam
    atlag = ossz/10
    print(f"A beirt szamok atlaga: {atlag}")

average()