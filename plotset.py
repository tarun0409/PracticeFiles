import matplotlib.pyplot as plt

x = []
y = []
with open("dataset.txt") as f:
	for line in f:
		v = line.split()
		x.append(float(v[0]))
		y.append(float(v[1]))

x1 = x[:500]
x2 = x[500:]
y1 = y[:500]
y2 = y[500:]
plt.plot(x1,y1,"o")
plt.plot(x2,y2,"x");
plt.show()
