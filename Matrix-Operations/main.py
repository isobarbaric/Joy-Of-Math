
import numpy as np

class Matrix:

    def __init__(self, grid):
        self.grid = grid
        self.T = Matrix.transpose(grid)

    def transpose(grid):
        transposed = []
        for col in range(len(grid[0])):
            transposed.append([])
            for row in range(len(grid)):
                transposed[-1].append(grid[row][col])
        return transposed

    # only matrices for these
    def dot(x, y):
        assert len(x) == len(y)
        result = 0
        for i in range(len(x)):
            result += x[i]*y[i]
        return result
    
    # rn, works for Matrix + Matrix, not overloaded yet for scalars 
    def __add__(x, y):
        # check rows first and then check cols next
        if not (len(x.grid) == len(y.grid) and len(x.grid[0]) == len(y.grid[0])):
            return None
        resultant = []
        for row in range(len(x.grid)):
            resultant.append([])
            for col in range(len(x.grid[0])):
                resultant[-1].append(x.grid[row][col] + y.grid[row][col])
        return resultant

    def __mul__(x, y):
        if not ():
            return None

    # subtraction needs multiplication to work properly
    # def __subr__(x, y):


# tranposed matrix
# a = Matrix([[2, 5], [4, 3]])
# print(a.T)
# b = np.array([[2, 5], [4, 3]])
# print(b.T)

# matrix addition
# a = Matrix([[3, 4], [-3, 2]])
# b = Matrix([[-2, 9], [5, 2]])
# print(a + b)

# next steps: 
# - add scalar support for __add__ and __mul__, then implement __sub__
# - look up dot product and cross product for matrices