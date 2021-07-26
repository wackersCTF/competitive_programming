# https://www.hackerrank.com/challenges/nested-list/problem

import operator
if __name__ == '__main__':
    s_list = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        s_list.append([name, score])
    s_list = sorted(s_list, key=operator.itemgetter(1))
    output_list = []
    grade = list(set(i[1] for i in s_list))[1]
    
    for student in s_list:
        if(student[1]==grade):
            output_list.append(student[0])
    output_list.sort()
    for name in output_list:
        print(name)
