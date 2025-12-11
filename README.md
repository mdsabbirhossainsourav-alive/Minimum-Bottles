Minimum Bottles
There are N identical water bottles, each of which has a capacity of X liters.
The ith bottle initially contains Ai liters of water.

You want to go on a trip and want to carry all your water with you.
However, to not make packing a hassle, you also want to carry the least number of bottles with you.

You can transfer any amount of water from one bottle to another, provided there is no spillage and no bottle contains more than X liters. Water from one bottle can be transferred to different bottles if you wish to do that.

What is the minimum number of bottles that you can carry with you, while still having all your water?

## Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers N and X — the number of bottles and capacity of each bottle in liters, respectively.
The second line contains N space separated integers A1,A2,…,AN denoting the volume of water in liters filled in each bottle.
## Output Format
For each test case, output on a new line the minimum number of bottles that can be carried.
## Constraints
1 ≤ T ≤ 100

1 ≤ N ≤ 100

1 ≤ X ≤ 1000

1 ≤ Ai ≤ X
​
Sample 1:
## Input
2

3 10

1 2 3

4 2

1 2 2 1
## Output
1

3
## Explanation:
Test case 1: Transfer all the water from the second and third bottles into the first bottle.
The first bottle will now contain 6 liters of water (which is within its capacity of X=10), while the second and third bottles will be empty.
So, we only need to carry the first bottle with us.

Test case 2: Transfer one liter of water from the first bottle to the fourth bottle. The bottles now have [0,2,2,2] liters of water.
We'll take only the second, third, and fourth bottles - for three in total.
