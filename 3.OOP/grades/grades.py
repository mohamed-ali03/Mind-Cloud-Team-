student = []
average = []
max_avg = 0
class student_t:
    def __init__(self ,name ,first_deg,second_deg,third_deg,fourth_deg,fifth_deg) :
        self.name = name
        self.first_deg = first_deg
        self.second_deg = second_deg
        self.third_deg = third_deg
        self.fourth_deg = fourth_deg
        self.fifth_deg = fifth_deg

with open("input.txt","r") as file :
    x = file.read()
    info = x.replace(',',' ')
    info = info.split()


for i in range(0,len(info),6):
    if(i%6 == 0):
        temp = student_t(info[i],info[i+1],info[i+2],info[i+3],info[i+4],info[i+5])
        avg = (int(info[i+1])+int(info[i+2])+int(info[i+3])+int(info[i+4])+int(info[i+5]))/4
        average.append(avg)
        student.append(temp)


max_avg = max(average)
top_student = average.index(max_avg)

with open("output.txt","w") as file :
    file.write(f"Top Student:{student[top_student].name} with an average grade of {max_avg}\n")

    for i in range(len(student)):
        file.write(f"{student[i].name}: Grades = [{student[i].first_deg},{student[i].second_deg},{student[i].third_deg},{student[i].fourth_deg},{student[i].fifth_deg}], Average = {str(average[i])}\n")












    
