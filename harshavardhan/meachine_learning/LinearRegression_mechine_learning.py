#LinearRegression
import numpy as np
from sklearn.linear_model import LinearRegression
import pandas as pd
import matplotlib.pyplot as plt

toss = np.array([10,20,30,40,50,60,70]).reshape(-1,1)
heads=np.array([5,10,15,20,25,30,35])

model=LinearRegression()
model.fit(toss,heads)

num=340
predict_heads=model.predict([[num]])
print(predict_heads)

plt.scatter(toss,heads,color='black')
plt.plot(toss,model.predict(toss),color='red')
plt.title('Toss vs Heads')
plt.xlabel('Toss')
plt.ylabel('heads')
plt.show()
