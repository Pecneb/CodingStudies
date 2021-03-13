import numpy as np

def dimenziok():
    dimenzio = 3
    tomb1 = [0]*dimenzio
    tomb2 = [0]*dimenzio
    k = 0
    osszeg1 = 0
    osszeg2 = 0
    while k < 2:
        i = 0
        print(f"Adja meg a {k+1}. vektor: ")
        while i < dimenzio:
            if k==0:
                tomb1[i]=int(input(f"{i+1}. elemet: "))
                osszeg1+=tomb1[i]
            else:
                tomb2[i]=int(input(f"{i+1}. elemet: "))
                osszeg2+=tomb2[i]
            i+=1
        k+=1
    print(f"A ket tomb osszege: {osszeg1+osszeg2}")
    print(f"a ket tomb kulombsege: {osszeg1-osszeg2}")

dimenziok()