class Student:
    roll = 34
    age = 23

    def __init__(self):
        print("hi")

    def __init__(self, name, roll, age):
        self.name = name
        self.roll = roll
        self.age = age

    def deaitals(self):
        print(f"name: {self.name}, roll: {self.roll}, age: {self.age}")
        
tapa = Student("tapan", 22, 23)
tapa.deaitals()