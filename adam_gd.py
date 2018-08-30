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
with open("adam_data.csv") as fl:
	for line in fl:
		if(first_line):
			first_line = False
			continue
		v = line.split(",")
		X.append(float(v[0]))
		Y.append(float(v[1]))
		
max_iterations = 100
alpha = 0.01
w = 1
b = 1
beta1 = 0.9
beta2 = 0.99
m_w = 0
m_b = 0
v_w = 0
v_b = 0
epsilon = 1e-8
for i in range(max_iterations):
	m_w = (beta1*m_w) + ((1-beta1) * grad_w(w,b,X,Y))
	m_b = (beta1*m_b) + ((1-beta1) * grad_b(w,b,X,Y))
	
	v_w = (beta2*v_w) + ((1-beta2)*((grad_w(w,b,X,Y))**2))
	v_b = (beta2*v_w) + ((1-beta2)*((grad_b(w,b,X,Y))**2))
	
	m_w = m_w/(1-(beta1**(i+1)))
	m_b = m_b/(1-(beta1**(i+1)))
	
	v_w = v_w/(1-(beta2**(i+1)))
	v_b = v_b/(1-(beta2**(i+1)))
	
	w = w - ((alpha * m_w)/((v_w + epsilon) ** 0.5))
	b = b - ((alpha * m_b)/((v_b + epsilon) ** 0.5))
	
	l = loss(w,b,X,Y)
	print l