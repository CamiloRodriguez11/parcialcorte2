i=0
n = int(input("Ingrese el total de productos a registrar: "))
list= [[0]*2 for _ in range(n)]
for i in range (n):
    cantidad = int(input(f"Ingrese la cantidad de inventario del producto {i+1}: "))
    list[i] = cantidad

for fila in (list):
    print (fila)
