capacidad = 5
reservas = []

def hay_cupo(reservas, capacidad):
    while True:
        print(f"Cupos disponibles: {capacidad}")
        nombre = str(input("Nombre o salir: "))
        if nombre == "Salir":
            break
        elif capacidad == 0:
            print("Sin cupos disponibles")
        else:
            reservas += [f"{nombre}"]
            capacidad -=1

    return reservas, capacidad

            

def mostrar_resumen(reservas, capacidad):
    print("=== Resumen ===")
    print(f"Reservas aceptadas: {5 - capacidad}")
    for nombre in reservas:
        print(nombre)
    return reservas, capacidad


reservas, capacidad = hay_cupo(reservas,capacidad)
mostrar_resumen(reservas, capacidad) 