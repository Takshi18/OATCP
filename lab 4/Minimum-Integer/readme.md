# Find Minimum Integer

## Description

This code finds the minimum integer that can be obtained by removing `k` digits from the given string `s`. The resulting integer should have the smallest possible value.

## Approach

- **Greedy Algorithm**:
  - The code uses a greedy approach to construct the minimum integer.
  - It iterates through each character in the string `s`.
  - For each character `c`, it compares `c` with the last character in the constructed result `ans`.
  - If `ans` is not empty, and there are still remaining digits to be removed (`k > 0`), and the last character in `ans` is greater than `c`, it removes the last character from `ans` and decrements `k`.
  - If `ans` is empty or `c` is not `'0'`, it appends `c` to `ans`.
  - After iterating through all characters in `s`, if there are remaining digits to be removed (`k > 0`), it removes the last character from `ans` until `k` becomes zero.

- **Return Result**:
  - Finally, the constructed result `ans` is returned as the minimum integer.
