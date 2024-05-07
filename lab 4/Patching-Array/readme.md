# Count Patches

## Description

This code calculates the minimum number of patches required to make the sum of given numbers in the vector `nums` greater than or equal to `n`. A patch is an additional number that can be added to the vector to increase its sum.

## Approach

- **Iterative Approach**:
  - The code iterates through each element of the vector `nums`.
  - It compares each element with the current sum `reach + 1`.
  - If the current element `nums[i]` is less than or equal to `reach + 1`, it updates the current sum `reach` by adding `nums[i]` to it.
  - If the current element `nums[i]` is greater than `reach + 1`, it means a patch is needed. In this case, it increments the count `cnt` and updates the current sum `reach` by adding `(reach + 1)` to it.
  -  i. If the current element of `nums` (`nums[i]`) is less than or equal to `reach + 1`, it means that the next element in `nums` can be covered using the current patches. So, it updates `reach` to include `nums[i]` and increments `i` to move to the next element.
 
 ii. If the current element of `nums` is greater than `reach + 1`, it means there's a gap in the coverage. To cover this gap, it adds `reach + 1` to `reach` and increments `cnt` to count the added patch.

  - This process continues until the current sum `reach` becomes greater than or equal to `n`.

- **Final Adjustment**:
  - After iterating through all elements of the vector `nums`, if the current sum `reach` is still less than `n`, it means additional patches are required.
  - In the while loop, it continues adding patches until the current sum `reach` becomes greater than or equal to `n`.

- **Return Count**:
  - Finally, the code returns the count `cnt`, which represents the minimum number of patches required to make the sum of elements in `nums` greater than or equal to `n`.


