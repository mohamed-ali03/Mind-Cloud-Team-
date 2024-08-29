count = 0
emails = []

with open("mails.txt","r") as file_r :
    mail = file_r.read()
    mail = mail.split()

for i in range(len(mail)):
    if(mail[i] == "From"):
        emails.append(mail[i+1])
        count+=1



with open("emails.txt","w") as file_w:
    for i in range (len(emails)):
        file_w.write(emails[i])
        file_w.write("\n")
    file_w.write(str(count))




