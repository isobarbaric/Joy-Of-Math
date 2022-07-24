
import numpy as np

# note scalars are not supported 
class Matrix:

    def __init__(self, grid):
        self.grid = np.array(grid)
        self.T = Matrix.transpose(grid)

    def transpose(grid):
        transposed = []
        for col in range(len(grid[0])):
            transposed.append([])
            for row in range(len(grid)):
                transposed[-1].append(grid[row][col])
        return transposed

    def __dot__(x, y):
        assert len(x) == len(y)
        result = 0
        for i in range(len(x)):
            result += x[i]*y[i]
        return result
    
    def __add__(self, x):
        if not (len(self.grid) == len(x.grid) and len(self.grid[0]) == len(x.grid[0])):
            return None
        resultant = []
        for row in range(len(self.grid)):
            resultant.append([])
            for col in range(len(self.grid[0])):
                resultant[-1].append(self.grid[row][col] + x.grid[row][col])
        return resultant

    def __mul__(self, x):
        resultant = []
        for row in self.grid:
            resultant.append([])
            for col in x.T:
                resultant[-1].append(Matrix.__dot__(row, col))
        return resultant

    def __subr__(self, x):
        # can get rid of this method when scalars are supported globally
        def multiplyNegative():
            for row in x:
                for elem in row:
                    elem *= -1
        return self.__add__(multiplyNegative(x))

# tranposed matrix
# a = Matrix([[2, 5], [4, 3]])
# print(a.T)
# b = np.array([[2, 5], [4, 3]])
# print(b.T)

c = Matrix([[0, 5],[-3, 1],[-5, 1]])
d = Matrix([[-4, 4],[-2, -4]])
print(c * d)

e = np.array([
    [0, 5],
    [-3, 1],
    [-5, 1]
])

f = np.array([
    [-4, 4],
    [-2, -4]
])

print(e @ f)

# matrix addition
# a = Matrix([[3, 4], [-3, 2]])
# b = Matrix([[-2, 9], [5, 2]])
# print(a + b)

# next steps: 
# - add scalar support for __add__ and __mul__, then implement __sub__
# - look up dot product and cross product for matrices