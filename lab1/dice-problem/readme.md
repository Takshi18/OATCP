
This algorithm solves the dice problem using dynamic programming. Here's a brief explanation:

The problem is to find the number of ways to get a sum of 'n' using a standard six-sided dice.
We create an array DP of size MAXN to store the number of ways to get each sum from 0 to n.
We initialize DP[0] to 1 because there's one way to get a sum of 0 (by not rolling the dice at all).
We define a function compute() which recursively computes the number of ways to get the sum 'left'. If the value for 'left' is already computed, it returns it directly from DP[left]. Otherwise, it iterates through all possible rolls of the dice (from 1 to 6) and recursively computes the number of ways to get the remaining sum after subtracting the roll. It updates DP[left] with the sum of these computed values.
The modulo operation % MOD is applied after adding each computed value to prevent integer overflow.
Finally, in the main() function, we input the value of 'n', reset the DP array, compute the number of ways to get the sum 'n', and output the result.
