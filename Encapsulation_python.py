class student:
    def __init__(self,name,rank,points):
        self.name=name
        self.rank=rank
        self.points=points
    def demo_encapsulation(self):
        print("i'am "+self.name)
        print("i'got rank "+self.rank)
        
s1=student("student1","1","100")
s2=student("student2","2","99")
s3=student("student3","3","98")

s1.demo_encapsulation()
s2.demo_encapsulation()
s3.demo_encapsulation()
        
