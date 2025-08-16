import numpy as np

arrays=2



def arrayappend(i):
    rows=int(input("enter number of rows:"))
    cols=int(input("enter number of columns :"))
    print("------------------------"+"ENTER ELEMENTS OF ARRAY"+"------------------------")
    col=[]
    for k in range(rows):
        row=[]
        for l in range(cols):
            x=int(input("enter value to be entered at position:"+" "+str(k)+str(l)+": "))
            row.append(x)
        col.append(row)
    return np.array(col)






i=0
while(i<arrays):
    matrix1=arrayappend(i)
    print("------------------------"+"Matrix 1 is"+"------------------------")
    print(np.array(matrix1))

    
    matrix2=arrayappend(i+1)
    print("------------------------"+"Matrix 2 is"+"------------------------")
    print(np.array(matrix2))
    break;
    



if (matrix1.shape[1]==len(matrix2)):
    multiplication_matrix=np.dot(matrix1,matrix2)

    print("------------------------"+"Multiplied Matrix  is"+"------------------------")
    print(np.array(multiplication_matrix))
else:
    print("you entered size of array in correctly .please try again")
