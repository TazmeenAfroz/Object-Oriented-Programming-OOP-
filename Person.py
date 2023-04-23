class Person:
    

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print("Name: ", self.name)
        print("Age: ", self.age)


class Student(Person):
    

    def __init__(self, rollno):
        self.rollno = rollno
        self.marks = 0

    def display(self):
        print("Roll no: ", self.rollno)
        print("Marks: ", self.marks)


class Teacher(Person):
    salary = 10000
    subject = ""
    student = None  # Store student object as an instance variable

    def __init__(self, subject):
        self.subject = subject

    def assignStudent(self, student):
        self.student = student

    def updateMarks(self, marks):
        if self.student is not None:
            self.student.marks = marks
        else:
            print("No student assigned to teacher.")

    def display(self):
        print("Salary: ", self.salary)
        print("Subject: ", self.subject)


# Driver code

print("-----LOGIN-----")
print("1. Student")
print("2. Teacher")
print("3. Exit")

while True:

    choice = int(input("Enter your choice: "))

    if choice == 1:
        rollno = int(input("Enter your roll no: "))
        s = Student(rollno)
        s.display()

    elif choice == 2:
        subject = input("Enter your subject: ")
        t = Teacher(subject)

        # Assign student to teacher
        rollno = int(input("Enter roll no: "))
        st = Student(rollno)
        t.assignStudent(st)

        m = int(input("Enter marks: "))
        t.updateMarks(m)  # Update marks through teacher
        t.display()

    elif choice == 3:
        break

    else:
        print("Invalid choice")



