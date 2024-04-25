nome=input()
salario=float(input())
montanteDeVendas=float(input())
total = salario + (montanteDeVendas * 0.15)

print("TOTAL = R$","{0:.2F}".format(total))