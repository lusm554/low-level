"""
V = список вершин
E = список ребер
"""

from collections import defaultdict

d = defaultdict(list)

lst = [('laptop', 1), ('phone', 2), ('pc', 1), ('phone', 3), ('pc', 1),
('laptop', 2), ('laptop', 1)]

for k, v in lst:
    d[k].append(v)

print("Default dict from list")
print(d.items())


d = defaultdict(set)

lst = [('laptop', 1), ('phone', 2), ('pc', 1), ('phone', 3), ('pc', 1),
('laptop', 2), ('laptop', 1)]

for k, v in lst:
    d[k].add(v)

print("Default dict from set")
print(d.items())

