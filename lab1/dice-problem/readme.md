# Dice Problem Solution using Dynamic Programming


Given a standard six-sided dice, this algorithm aims to find the number of ways to achieve a sum of 'n' by rolling the dice.

## Approach
- We use dynamic programming to efficiently compute the number of ways to get each sum from 0 to 'n'.
- An array DP of size MAXN is used to store the number of ways to get each sum.
- We initialize DP[0] to 1, as there's one way to get a sum of 0 (by not rolling the dice at all).
- The compute() function recursively calculates the number of ways to get a sum 'left'. It uses memoization to avoid redundant calculations.
- We iterate through all possible rolls of the dice (from 1 to 6) and recursively compute the number of ways to get the remaining sum after subtracting the roll.
- The modulo operation (% MOD) is applied after adding each computed value to prevent integer overflow.
- In the main() function, we input the value of 'n', reset the DP array, compute the number of ways to get the sum 'n', and output the result.
