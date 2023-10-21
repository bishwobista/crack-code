#Q: Given a sequence of matrices, you are required to determine the most efficient way to multiply them. 
#The cost of multiplying two matrices is the sum of the products of their dimensions. The goal is to minimize the total cost of the multiplications.


#Soltuion:

def matrix_chain_multiplication(dimensions):
    n = len(dimensions) - 1  # Number of matrices
    # Create a table to store the minimum number of scalar multiplications for each subproblem
    # Initialize all entries with 0
    m = [[0] * n for _ in range(n)]

    # `s` is used to record the split positions that give the optimal solution
    s = [[0] * n for _ in range(n)]

    # `l` is the chain length
    for l in range(2, n + 1):
        for i in range(n - l + 1):
            j = i + l - 1
            m[i][j] = float('inf')  # Initialize to infinity

            # Try all possible splits to find the minimum number of multiplications
            for k in range(i, j):
                cost = m[i][k] + m[k + 1][j] + dimensions[i] * dimensions[k + 1] * dimensions[j + 1]
                if cost < m[i][j]:
                    m[i][j] = cost
                    s[i][j] = k

    # `s` now contains the optimal split positions

    # Function to print the optimal parenthesization of the matrices
    def print_optimal_parentheses(s, i, j):
        if i == j:
            print(f'M{str(i)}', end='')
        else:
            print("(", end='')
            print_optimal_parentheses(s, i, s[i][j])
            print_optimal_parentheses(s, s[i][j] + 1, j)
            print(")", end='')

    print("Optimal Parenthesization: ", end='')
    print_optimal_parentheses(s, 0, n - 1)
    print()
    
    # Return the minimum number of scalar multiplications needed
    return m[0][n - 1]

# Get matrix dimensions from the user
dimensions = []
n = int(input("Enter the number of matrices: "))
for i in range(n + 1):
    dim = int(input(f"Enter the dimension of matrix {i}: "))
    dimensions.append(dim)

min_scalar_multiplications = matrix_chain_multiplication(dimensions)
print("Minimum Scalar Multiplications:", min_scalar_multiplications)


