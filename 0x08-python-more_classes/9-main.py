#!/usr/bin/python3
Rectangle = __import__('9-rectangle').Rectangle

my_square = Rectangle.square("5")
print(type(my_square))
#print("Area: {} - Perimeter: {}".format(my_square.area(), my_square.perimeter()))
print(my_square.height)
#print(my_square)
