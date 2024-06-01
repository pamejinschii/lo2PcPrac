import numpy as np

# Коэффициенты уравнения эллипса (x/a)^2 + (y/b)^2 = 1
a = 5
b = 3

# Координаты точки
point = np.array([3, 2])

# Проверка принадлежности точки эллипсу
is_on_ellipse = (point[0] / a) ** 2 + (point[1] / b) ** 2 <= 1
print(f"Точка принадлежит эллипсу: {is_on_ellipse}")

# Фокусы эллипса
c = np.sqrt(a**2 - b**2)
foci1 = np.array([c, 0])
foci2 = np.array([-c, 0])
print(f"Фокусы эллипса: {foci1}, {foci2}")

# Длины полуосей эллипса
print(f"Длина большой полуоси: {a}")
print(f"Длина малой полуоси: {b}")

# Эксцентриситет эллипса
eccentricity = c / a
print(f"Эксцентриситет эллипса: {eccentricity}")

# Расстояние от точки до директрисы
directrix_distance = a / eccentricity - point[0]
print(f"Расстояние от директрисы до центра: {directrix_distance}")
