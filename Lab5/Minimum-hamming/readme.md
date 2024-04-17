# Sum of Hamming Distances

## Description

This code calculates the sum of Hamming distances between all pairs of integers in the given array `nums`. The Hamming distance between two integers is defined as the number of positions at which the corresponding bits are different.

## Approach

- **Nested Loops**:
  - The code uses two nested loops to iterate over all pairs of integers in the array `nums`.
  - The outer loop iterates over each integer in the array.
  - The inner loop iterates over all integers following the current integer in the array.

- **Bitwise XOR Operation**:
  - For each pair of integers `(nums[i], nums[j])`, the code calculates the bitwise XOR (`^`) of the two integers.
  - The XOR operation reveals the difference in bits between the two integers.

- **Population Count**:
  - The code then uses `__builtin_popcount` function to count the number of set bits (bits with value 1) in the result of the XOR operation.
  - `__builtin_popcount` efficiently counts the number of set bits in an integer.

- **Accumulation**:
  - The count of set bits in the result of the XOR operation for each pair of integers is added to the total count `cnt`.

- **Return Count**:
  - Finally, the total count of Hamming distances between all pairs of integers in the array `nums` is returned.
