class Person :
    def __init__(self,name,age):
      self.name= name
      self.age = age
 
class Student(Person):
    def __init__(self, name, age, rollNo ,gpa = 0):
        super().__init__(name, age)
        self.rollNo = rollNo
        self.gpa = gpa

    def display(self):
        print("Name: ",self.name)
        print("Age: ",self.age)
        print("Roll No: ",self.rollNo)
        print("GPA: ",self.gpa)

class Teacher (Person):
    def __init__(self,name,age,subject):
        super().__init__(name,age)
        self.subject = subject

    def display(self):
        print("Name: ",self.name)
        print("Age: ",self.age)
        print("Subject: ",self.subject)

    def updateGPA(self,Student,gpa):
        Student.gpa = gpa    

#  main

students = []
teachers = []
while True:

    print("1. Add Student")
    print("2. Add Teacher")
   
    print("3. Display Student")
    print("4. Display Teacher")
    print("5. Exit")

    choice =int(input("Enter your choice: "))
    if choice == 1:
        sname = input("Enter name: ")
        sage = int(input("Enter age: "))
        srollNo = int(input("Enter roll no: "))
        
        s = Student(sname,sage,srollNo)
        students.append(s)

    elif choice == 2:
        tname = input("Enter name: ")
        tage = int(input("Enter age: "))
        tsubject = input("Enter subject: ")
        t = Teacher(tname,tage,tsubject)
        teachers.append(t)

        print(" Update GPA")
        rollNo = int(input("enter roll no: "))
        
        for s in students:
            if s.rollNo == rollNo:
                gpa = float(input("Enter GPA: "))
                s.gpa = gpa
                break
        else:
            print("Student not found")

    elif choice == 3:

        rollNo = int(input("enter roll no: "))
        
        for s in students:
            if s.rollNo == rollNo:
                s.display()
                break
        else:
            print("Student not found")

    elif choice == 4:
            
            subject = input("enter subject: ")
            
            for t in teachers:
                if t.subject == subject:
                    t.display()
                    break
            else:
                print("Teacher not found")

    elif choice == 5:
        break





