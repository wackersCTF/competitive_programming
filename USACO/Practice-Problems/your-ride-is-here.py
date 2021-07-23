#USACO Your Ride is Here
# https://train.usaco.org/usacoprob2?a=hL4ACvk2xxi&S=ride

comet = input()
ufo = input()
comet_num = 1
ufo_num = 1

for i in comet:
    comet_num*= (int(ord(i))-64)
    
for i in ufo:
    ufo_num *= (int(ord(i))-64)

if(comet_num %47 == ufo_num %47):
    print("GO")
else:
    print("STAY")

# one-liner option, credits to Nolan Clement

print("GO" if len(set(map(lambda s: reduce(lambda x, y: x*y, [ord(c)-64 for c in s]) % 47, [x,y])))==1 else "STAY")
