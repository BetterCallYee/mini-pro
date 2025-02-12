import matplotlib.pyplot as plt
import math
sum1=0
number_list=[]
number=int(input("ป้อนค่าตัวเลข"))
for i in range(number):
    mean=float(input(f"ตัวเลขที่{i+1}:"))
    number_list.append(mean)
    max1=max(number_list)
    min1=min(number_list)
    range1=max1-min1
    sum1+=mean/number
print(f"ค่าmean = {sum1}")
print("ค่าrange = ",range1)

mid_index=len(number_list)//2
if len(number_list)%2==0:
    median=(number_list[mid_index -1]+number_list[mid_index])/2
else:
    median=number_list[mid_index]
print("ค่าmedian = ",median)

variane=[(j - sum1)**2 for j in number_list]
sum1=sum(variane)/number
print("ค่าvariane = ",sum1)
sd=[math.sqrt(sum1)]
print("ค่าsd = ",sd)