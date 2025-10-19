import math

nilai = input().split()

if len(nilai) == 1:
    a = float(nilai[0])
    b = float(input())
else:
    a, b = map(float, nilai)

alas = (pow(b, 2) - pow(a, 2)) ** 0.5
tinggi = a
keliling = a + b + alas
luas = 0.5 * alas * a

print(f"\nAlas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")