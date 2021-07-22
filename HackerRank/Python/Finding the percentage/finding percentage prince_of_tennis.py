n = int(input())
student_records = {}
for _ in range(n):
    s = input().split(" ")
    student_records[s[0]] = [int(s[1]),int(s[2]),int(s[3])]
query_name = input()

avg = 0
for i in student_records[query_name]:
    avg += i
print("{:0.2f}".format(avg/3))
