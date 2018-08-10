import math
def f(w,x,b):
	return (1/(1+(math.exp(-1*((w*x)+b)))))

def loss(w,b,X,Y):
	err = 0
	for i in range(len(X)):
		x = X[i]
		y = Y[i]
		err+= (0.5)*((f(w,x,b) - y)**2) 
	return err

def grad_w(w,b,X,Y):
	dw = 0
	for i in range(len(X)):
		x = X[i]
		y = Y[i]
		fx = f(w,x,b)
		dw+= (fx - y)*(fx)*(1-fx)*x
	return dw

def grad_b(w,b,X,Y):
	db = 0
	for i in range(len(X)):
		x = X[i]
		y = Y[i]
		fx = f(w,x,b)
		db+= (fx -y)*(fx)*(1-fx)
	return db


X = []
Y = []
first_line = True
with open("grad_descent_dataset.csv") as fl:
	for line in fl:
		if(first_line):
			first_line = False
			continue
		v = line.split(",")
		X.append(float(v[0]))
		Y.append(float(v[1]))

max_iterations = 200
w = 1
b = 1
alpha = 0.01

for i in range(max_iterations):
	dw = grad_w(w,b,X,Y)
	db = grad_b(w,b,X,Y)
	w = w-(alpha*dw)
	b = b-(alpha*db)
	l = loss(w,b,X,Y)
	print l
		 


