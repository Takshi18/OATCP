Note : .txt file has both input and output

# Largest Number

## Approach:

### Step 1: Convert Integers to Strings
- Convert the given integer elements to strings and store them in a new string vector. This facilitates concatenation and comparison of numbers as strings.

### Step 2: Sort the String Vector
- Sort the newly generated string vector using a custom comparator operator (lambda function). This ensures the strings are sorted in the desired order, maximizing the resulting concatenation's numerical value.

### Step 3: Concatenate Strings
- After sorting, concatenate the string vector elements into a single string variable. This represents the largest possible number that can be formed.

### Step 4: Remove Leading Zeros
- Check for the presence of any leading zeros in the resulting string. If found, remove them to ensure the number is in its most concise and meaningful form.

### Step 5: Return Result
- Return the resulting string variable, representing the largest possible number formed by concatenating the integers from the input vector.

