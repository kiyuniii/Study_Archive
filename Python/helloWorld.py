print("Hello, World!")

x = 10 + 5
print(x)

# python의 주석형태 (한 줄)
'''
ㅇㅇ (여러 줄)
ㅇㅇ
'''
"""
ㅇㅇㅇ
ㅇㅇㅇ
"""

print(10+5)
text = "this is text"
print(text)
print(type(text))
print(type(123))

print("nice" + " to meet you")
print("nice" * 3) #nicenicenice

""" name = input("Enter String: ")
print("안녕하세요, " + name + "!")
 """

text = "Hello, Python!"
print(text.upper()) #대문자 변환
print(text.lower()) #소문자 변환
print("python" in text) #특정 문자열 포함여부(bool)

""" while True:
    value = int(input("Enter a number: "))
    if value == 10: 
        print("value is 10")
    elif value > 5:
        print("value is greater than 5")
    else:
        print("value is less than 5")
 """

numbers = {1, 2, 3, 4, 5}
for num1 in numbers:
    print(num1, end=' ')

print("\n")
for num in numbers:
    print(num)


count = 0
while count < 5:
    print(count)
    count += 1

# Dictionary : key-value pair
dict = {"name":"kiyun", "age":20}
print(dict["name"])
print(dict["age"])
for key, value in dict.items():
    print(key, ":", value)


# Chap 5. 함수
def add_(x, y):
    return x + y

def greet(name):
    return "Hello, " + name
def greet_default(name="World"):
    return "Hello, " + name

#greet()
greet("Alice")
greet_default()
greet_default("Paul")

def add(*args):
    return sum(args)
print(add(1, 2, 3, 4, 5))

def square(x):
    return x * x

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
print("factorial(5): " + str(factorial(5)))


# Lambda Function
square = lambda x: x * x                # 람다함수 = 짧은 익명 함수
print("square(5): " + str(square(5)))   # 25

# File I/O
# write / read
f = open("test.txt", "w")
f.write("Hello, World!")
f.close()

f = open("test.txt", "r")
text = f.read()
f.close()
print(text)

# Exception Handler
# try-except-finally
try:
    x = int(input("Enter a number: "))
    print(10/x)
except ZeroDivisionError:
    print("Can't divide by zero!")
except ValueError:
    print("Please enter a number!")
finally:
    print("Goodbye!")   #예외 발생 여부와 상관 없이 실행(종료할 때)


# ValueError
try:
    x = int("abc")
except ValueError as e: #예외의 세부 정보 확인
    print(e)


# raise
def check_positive(x):
    if x < 0:
        raise ValueError("x must be positive") #사용자 정의 예외
    return x



# Chap 7. Module
import math
print(math.pi)              # 3.141592...
print(math.sin(math.pi/2))  # sin(pi/2) = 1

import random
print(random.random())      # rand: 0 ~ 1 
print(random.randint(1, 10))# rand: 1 ~ 10

from datetime import datetime
now = datetime.now()
print(now)
print(type(now))

# external module
import requests
r = requests.get("http://www.google.com")
print(r.status_code) # 200: OK


# Chap 8. Class
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def greeting(self):
        print("Hello, my name is " + self.name + " and I'm " + str(self.age) + " years old.")

p1 = Person("John", 30)
p1.greeting()

class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id

    def greeting(self):
        print("Hello, my name is " + self.name + " and I'm " + str(self.age) + " years old. My student id is " + str(self.student_id) + ".")

s1 = Student("Jane", 20, 12345)
s1.greeting()

class Teacher(Person):
    def __init__(self, name, age, subject):
        super().__init__(name, age)
        self.subject = subject

    def greeting(self):
        print("Hello, my name is " + self.name + " and I'm " + str(self.age) + " years old. I teach " + self.subject + ".")

t1 = Teacher("Bob", 40, "Math")
t1.greeting()


# Chap 9. Object-Oriented Programming

# Encapsulation

# Abstraction

# Polymorphism

# Inheritance

# Composition

# Decorator

# Metaclass

# Metaprogramming

# Dynamic Programming

# Functional Programming

# Imperative Programming

# Procedural Programming

# Refactoring

# Test-Driven Development

# Unit Testing

# Integration Testing

# End-to-End Testing

# Acceptance Testing

# Regression Testing

# White-Box Testing

# Black-Box Testing

# Code Coverage

# Code Quality

# Code Refactoring

# Continuous Integration

# Continuous Delivery

# Continuous Deployment

# DevOps

# DevSecOps

# DevOps vs. DevSecOps
