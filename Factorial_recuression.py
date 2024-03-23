#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan 18 16:55:58 2023

@author: newton
"""


def find_arrangements(n, start=2, factors=[1]):
    if n == 1:
        print(factors)
    for i in range(start, n + 1):
        if n % i == 0:
            factors.append(i)
            find_arrangements(n // i, i, factors)
            factors.pop()

find_arrangements(12)

def fun(n,p,s):
    if n== 1:
        #print(i)
        #i=i+1
        print(s)
    else:
        for x in range(p,n+1):
            if n%x==0:
                s=s+str(x)+" "
                fun(int(n/x),int(x),s)
z="1 "   
n=int(input())          
fun(n,2,z)