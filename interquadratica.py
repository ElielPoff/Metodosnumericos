import numpy as np

# Pontos dados
x_points = np.array([0, 1, 2, 3, 4])
y_points = np.array([10, 15, 20, 10, 5])

def quadratic_interpolation(x_points, y_points, x_value):
    # Número de pontos
    n = len(x_points)
    result = 0

    # Interpolação Quadrática
    for i in range(n):
        # Termo de Lagrange
        term = y_points[i]
        for j in range(n):
            if i != j:
                term *= (x_value - x_points[j]) / (x_points[i] - x_points[j])
        result += term

    return result

# Exemplo de uso: Estimar altura no ponto x = 2.5
x_value = 2.5
y_estimated = quadratic_interpolation(x_points, y_points, x_value)

print(f"A altura estimada para x = {x_value} é aproximadamente: {y_estimated}")
