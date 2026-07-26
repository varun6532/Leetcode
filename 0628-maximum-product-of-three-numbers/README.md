# LeetCode 628 - Maximum Product of Three Numbers

## Problem

Given an integer array `nums`, find the maximum product that can be obtained by multiplying any three numbers.

**LeetCode Difficulty:** Easy

---

## Approach

At first, it seems like multiplying the three largest numbers should always produce the maximum product.

However, this is not always true because two negative numbers produce a positive product.

For example:

```
[-10, -10, 5, 2]
```

- Three largest numbers:
  ```
  5 × 2 × (-10) = -100
  ```

- Largest number with two smallest numbers:
  ```
  5 × (-10) × (-10) = 500
  ```

Therefore, the answer must be one of the following:

1. Product of the three largest numbers.
2. Product of the largest number and the two smallest numbers.

Instead of sorting the array (`O(n log n)`), we traverse the array only once while keeping track of:

- Largest number (`max1`)
- Second largest (`max2`)
- Third largest (`max3`)
- Smallest number (`min1`)
- Second smallest (`min2`)

Finally, we compute both possible products and return the larger one.

---

## Algorithm

1. Initialize:
   - `max1`, `max2`, `max3` to `INT_MIN`
   - `min1`, `min2` to `INT_MAX`

2. Traverse the array once.
   - Update the three largest values.
   - Update the two smallest values.

3. Compute:
   - `max1 × max2 × max3`
   - `max1 × min1 × min2`

4. Return the larger product.

---

## Complexity Analysis

**Time Complexity:** `O(n)`

Only one traversal of the array is required.

**Space Complexity:** `O(1)`

Only five integer variables are used.

---

## Key Learning

- The maximum product does **not** always come from the three largest numbers.
- Two negative numbers can produce a larger positive product.
- When only a few extreme values are needed, sorting the entire array is unnecessary.
- `INT_MIN` and `INT_MAX` are useful sentinel values for initialization.

---

## Pattern

**Track multiple extreme values in one traversal.**

This pattern is useful when only the largest/smallest `k` elements are required without sorting the entire array.

---

## My Mistake

Initially, I assumed the answer would always be the product of the three largest numbers.

After considering negative numbers, I realized that the largest product can also come from the largest positive number and the two smallest (most negative) numbers.

---