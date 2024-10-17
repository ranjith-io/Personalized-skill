import math
import os
import sys

class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width


class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * (self.radius ** 2)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    
    q = int(raw_input())  # Use raw_input() to match the original code (for Python 2)

    queries = []
    for _ in xrange(q):  # Use xrange() for Python 2
        args = raw_input().split()  # Using raw_input() for Python 2
        shape_name, params = args[0], map(int, args[1:])  # Use map to convert to int
        
        if shape_name == "rectangle":
            a, b = params[0], params[1]
            shape = Rectangle(a, b)
        elif shape_name == "circle":
            r = params[0]
            shape = Circle(r)
        else:
            raise ValueError("invalid shape type")
        
        fptr.write("%.2f\n" % shape.area())  # Write the area result to the file

    fptr.close()
