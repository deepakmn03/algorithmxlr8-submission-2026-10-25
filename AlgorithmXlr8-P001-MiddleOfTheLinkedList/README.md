<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Middle of the Linked List

**Difficulty:** `Easy`

## Problem

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

For a list with n nodes numbered from 1, the middle node is node number floor(n / 2) + 1. So a list of 5 nodes returns node 3, and a list of 6 nodes returns node 4. Returning a node means returning the rest of the list starting at that node.

Input format: the first line contains an integer n, the number of nodes. The second line contains the n node values in order from head to tail, separated by spaces.

Output format: print the values of the list starting from the middle node through the end of the list, on one line, separated by single spaces.

## Examples

### Example 1

**Input**
```
head = [1,2,3,4,5]
```
**Output**
```
[3,4,5]
```

**Explanation:** The middle node of the list is node 3, so the list printed from there is 3 4 5.

### Example 2

**Input**
```
head = [1,2,3,4,5,6]
```
**Output**
```
[4,5,6]
```

**Explanation:** Since the list has two middle nodes with values 3 and 4, we return the second one, so the list printed from there is 4 5 6.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/middle-of-the-linked-list).