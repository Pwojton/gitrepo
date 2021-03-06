#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
# 
#Oblicznie potęgi liczby naturalnej

def potega_it(a, n):
    wynik = 1
    
    for i in range(n):
        wynik = wynik * a
    return wynik

def potega_rek(a, n):
    if n == 0:
        return 1
    return potega_rek(a, n-1) * a




def main(args):
    a, n = int(input("Podaj 1 liczbe: ")), int(input("Podaj 2 liczbe: ")) # wilokrotne przypisanie 
    print("Podstawa {} do potęgi {} wynosi {}".
            format(a, n, potega_rek(a, n)))
    potega_rek(a, n) # wywołanie funkcji
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
