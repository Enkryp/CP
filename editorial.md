Let sum of the array is s;
If the final array is of length m with all equal elements. Then we need to make m subarrays each of size s/m, each having same sum.
 

Categorise each possible final sequence by its length.


Now, iterate over the array indices, call sumT the sum till that index. This sumT contributes to all the sequences categorised by the multiples of s/gcd(sumT,s).


Maintain a count array, now increase the count of s /(gcd(sumT,sum)) and all its multiples till s by 1, first addtion can be done inplace the latter can be clubbed.

For the latter iterate in reverse from n to 1 with iterator i, add to all multiples of i till n the current count of that i.

If count of i th index is i, sequence of length i can be formed. Take minimum of the removals required over all the eligible candidates.

Time complexity :  O (n(log(n)+ log(a)))
