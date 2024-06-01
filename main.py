import numpy as np

# Векторы
v1 = np.array([1, 2, 3])
v2 = np.array([4, 5, 6])

# Длина векторов
length1 = np.linalg.norm(v1)
length2 = np.linalg.norm(v2)
print(f"Длина первого вектора: {length1}")
print(f"Длина второго вектора: {length2}")

# Угол между векторами
angle = np.arccos(np.dot(v1, v2) / (length1 * length2)) * 180 / np.pi
print(f"Угол между векторами: {angle} градусов")

# Сумма векторов
sum_vectors = v1 + v2
print(f"Сумма векторов: {sum_vectors}")

# Разность векторов
diff_vectors = v1 - v2
print(f"Разность векторов: {diff_vectors}")

# Векторное произведение
cross_product = np.cross(v1, v2)
print(f"Векторное произведение: {cross_product}")
