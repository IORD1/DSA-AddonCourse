

def findLargestSquare(mat, m, n, maxsize):
    if m < 0 or n < 0:
        return 0, maxsize
 
    # find the largest square matrix ending at mat[m][n-1]
    left, maxsize = findLargestSquare(mat, m, n - 1, maxsize)
 
    # find the largest square matrix ending at mat[m-1][n]
    top, maxsize = findLargestSquare(mat, m - 1, n, maxsize)
 
    # find the largest square matrix ending at mat[m-1][n-1]
    diagonal, maxsize = findLargestSquare(mat, m - 1, n - 1, maxsize)
 
    '''
        The largest square matrix ending at mat[m][n] will be 1 plus
        minimum of largest square matrix ending at mat[m][n-1],
        mat[m-1][n] and mat[m-1][n-1]
    '''
 
    size = 1 + min(min(top, left), diagonal) if mat[m][n] else 0
 
    # return the size of the largest square matrix ending at mat[m][n] and
    # maximum size found so far
    return size, max(maxsize, size)
 
 
def findLargestSquareSubmatrix(mat) -> int:
 
    # base case
    if not mat or not len(mat):
        return 0
 
    # `M × N` matrix
    (M, N) = (len(mat), len(mat[0]))
 
    # `size` stores the size of the largest square submatrix of 1's
    maxsize = findLargestSquare(mat, M - 1, N - 1, 0)[1]
    return maxsize
 
 
if __name__ == '__main__':
    mat = [
        [0, 0, 1, 0, 1, 1],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 1, 1, 1, 1],
        [1, 1, 0, 1, 1, 1],
        [1, 1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1, 1],
        [1, 0, 1, 1, 1, 1],
        [1, 1, 1, 1, 1, 1]
    ]
 
    print("The size of the largest square submatrix of 1's is",
        findLargestSquareSubmatrix(mat))