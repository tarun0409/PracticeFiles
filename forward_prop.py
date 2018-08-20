import numpy as np

def g(z):
	return 1/(1+np.exp(-z))

def softmax(a):
	s = 0
	t = np.exp(a)
	s = np.sum(t)
	f = []
	for i in a:
		f.append(np.exp(i)/s)
	return f


x = np.array([1.5,2.5,3])
b1 = np.array([0.1,0.2,0.3,0.4])
b2 = np.array([5.2,3.2,4.3])
b3 = np.array([0.2,0.45,0.75,0.55,0.95])
W1 = np.array([[0.05,0.05,0.05,0.05],[0.05,0.05,0.05,0.05],[0.05,0.05,0.05,0.05]])
W2 = np.array([[0.025,0.025,0.025],[0.025,0.025,0.025],[0.025,0.025,0.025],[0.025,0.025,0.025]])
W3 = np.array([[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1]])
a1 = np.dot(W1.T,x) + b1
h1 = g(a1)
a2 = np.dot(W2.T,h1) + b2
h2 = g(a2)
a3 = np.dot(W3.T,h2) + b3

print softmax(a3)


