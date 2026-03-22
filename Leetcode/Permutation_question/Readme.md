# Permutation Sequence (LeetCode #60)

## Problem
Given n and k, return the kth permutation sequence of [1, 2, 3, ..., n].

```
Input: n = 3, k = 3
Output: "213"
```

---

## Questions to solve before the main problem

### Level 1 - Basics

Q1. Print 1 to n
```
Input:  n = 5
Output: 1 2 3 4 5
```

Q2. Build string "123...n"
```
Input:  n = 4
Output: "1234"
```

Q3. Reverse a string
```
Input:  "1234"
Output: "4321"
```

---

### Level 2 - next_permutation

Q4. Print all permutations of "123"
```
Input:  "123"
Output: 123, 132, 213, 231, 312, 321
```

Q5. Find kth permutation using next_permutation
```
Input:  n = 3, k = 4
Output: "231"
```

Q6. What does prev_permutation do? Try it and observe.
```
Input:  "213"
Output: "132"
```

---

### Level 3 - Factorial

Q7. Factorial using recursion
```
Input:  n = 4
Output: 24
```

Q8. Factorial using loop
```
Input:  n = 5
Output: 120
```

Q9. How many permutations exist for n = 3? List all manually.
```
Output: 123, 132, 213, 231, 312, 321 → count = 6 = 3!
```

---

### Level 4 - Core Logic

Q10. Write all permutations for n = 3 and find how many start with each digit.
```
k=1 → 123
k=2 → 132
k=3 → 213
k=4 → 231
k=5 → 312
k=6 → 321
```
How many permutations start with 1? with 2? with 3?

Q11. Find first digit using factorial
```
Input:  n = 3, k = 3
Output: first digit = 2
Hint:   index = (k-1) / (n-1)!
```

Q12. Build full answer digit by digit
```
Input:  n = 3, k = 3
Output: "213"
Hint:   after picking each digit, remove it and update k
```

---

### Final Problem
```
Input:  n = 4, k = 9
Output: "2314"
```
https://leetcode.com/problems/permutation-sequence/

---

## Progress

- [ ] Q1
- [ ] Q2
- [ ] Q3
- [ ] Q4
- [ ] Q5
- [ ] Q6
- [ ] Q7
- [ ] Q8
- [ ] Q9
- [ ] Q10
- [ ] Q11
- [ ] Q12
- [ ] Final