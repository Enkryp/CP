# Leonardo and his Rooks

One fine day out of sheer boredom Leonardo started making a lot of pancakes. By the time he was done he noticed, he now had n trays full of pancakes each having some non-zero number of pancakes. Being an artist, he likes symmetry, so he starts in each turn, transfering contents of one tray into one of the adjacent trays and then removing the empty tray; continuing in this manner till all trays have equal number of pancakes.

```
example;

if the trays have [1,6,7,8,2,4] cakes he in one turn can take 3rd tray and remove it so it results in either [1,13,8,3,4] or [1,6,15,3,4] arrangement of trays respectively.

```

After he is done, he now wonders what was the most effective way to make the number in all trays equal. You being his best friend come to his aid.

For every initial arrangement find the minimum trays that need to be removed as shown above, so all trays are left with equal pancakes.

## Input 

t -- number of testcases; [0 <= t <= 1e5]
each test case contains :


1st line contains a single integer n. [ 3 <= n <= 2e5 ]

n integers follow;

i th integer is a[i] the number of pancakes in the i th tray initially. [1 <= a[i] <= 2e5 ] 

Sum of n over all cases doesn't exceed 3e5.


## Output

Print number of the minimum trays that need to be removed.


### TestCase

input

```
1
6
1 6 7 8 2 4
``` 

output

```
4
```

Explanation:

each line --> each turn

```
1 13 8 2 4
14 8 2 4
14 10 4
14 14
```


 
