#!bin/bash/env python
import numpy

def Feladat1():
    print("Irjon be egy szamot: ")
    szam = int(input())
    print(szam*2)


def Feladat2():
    print("Irjon be ketto szamot: ")
    szam1 = int(input())
    szam2 = int(input())
    osszeg = szam1+szam2
    szmo = szam1*szam2-osszeg
    szor = szam1*szam2
    print("Ket szam osszege: " + str(osszeg))
    print("Ket szam szorzata: " + str(szor))
    print("Szorzat es z osszeg kulombsege: " + str(szmo))

def Feladat3():
    print("Irjon be egy szamot: ")
    szam = int(input())
    print("Abszolut erteke: " + str(abs(szam)))
    if szam%2==0:
        print(str(szam/2))
    else:
        print(str(szam%2))

def Feladat4():
    print("Adjon meg ket szamot: ")
    szam = int(input())
    szam2 = int(input())
    if szam == szam2:
        print("A ket szam egyenlo!")
    elif szam < szam2:
        print(szam2-szam)
    else: print(szam-szam2)
    if szam < 10 and szam2 < 10:
        print(szam*szam2)

def Feladat5():
    for i in range(1, 101):
        print(f"{i}")
    print("adjon meg egy N szamot: ")
    N = int(input())
    if N > 1:
        szum = 0
        for j in range(1, N+1):
            if j%2==0:
                print(j)
            szum += j
    print(f"Az osszes szam osszege: {szum}")

def Feladat6():
    print("Adja meg az N erteket: ")
    N = int(input())
    fakt = 1
    for k in range(1, N+1):
        fakt *= k
        print(f"{k}")
    print(fakt)
    for i in range(1, 101):
        if (i%3 != 0) and (i%5 != 0):
            print(i)
        elif i%5!=0:
            print("Fizz")
        elif i%3!=0: 
            print("Buzz")
        else:
            print("FizzBuzz")