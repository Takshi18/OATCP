## Algorithm Explanation

This program uses a recursive algorithm to generate all unique subsequences of lengths 1 to 4 for each input string.

### 1. Input

The program starts by receiving an integer `n` representing the number of strings to process. It then reads `n` strings from the user.

### 2. Subsequence Generation

For each input string:
- Initialize an empty list to store unique subsequences.
- Iterate over lengths from 1 to 4:
  - Generate all possible subsequences of the current length using the `genSubs` function.
  - Add each unique subsequence to the list.
  - Ensure uniqueness by using a set data structure.

### 3. Recursive Subsequence Generation Function

The `genSubs` function:
- Takes a string `s`, current subsequence `cur`, current index `idx`, and desired length `len`.
- Base cases:
  - If `len` becomes 0, the current subsequence is added to the result list.
  - If `idx` reaches the end of the string, return.
- Recursive steps:
  - Include the current character at index `idx` in the subsequence and recursively call `genSubs` with `len - 1`.
  - Exclude the current character at index `idx` and recursively call `genSubs` with the same length.

### 4. Output

Once all unique subsequences are generated for each input string, they are printed to the console.
