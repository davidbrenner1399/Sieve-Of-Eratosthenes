# Sieve-Of-Eratosthenes

A prime number p is an integer greater than 1 that is divisible only by 1 and p (itself). The algorithm begins by initializing a set container to contain all the integers in the range 2 to n. A loop makes multiple passes over the elements in the set, using successive integer key values 2, 3, 4, ... Each pass shakes free nonprime numbers and lets them filter through the sieve. At the end, only the prime numbers remain.

Begin with the integer m = 2, which is the smallest prime number. The pass scans the set and removes all multiples of 2, having the form 2 * k for k >= 2. The multiples cannot be prime numbers, because they are divisible by 2.

At the end of the pass, we have removed all even numbers except 2. Next, look at the integer m = 3, which is a prime number. As with value 2, remove all multiples of 3, having the form 3 * k for k >= 3. The multiples 12, 18, and so forth, are even numbers, so they have already been removed from the set.

The next key integer is m = 4, which is no longer in the set, because it was removed as a multiple of 2. The pass takes no action. The process continues until it removes all multiples of prime numbers. In other words, for integer m, remove all multiples of m, having the form m * k for k >= m. The numbers that remain in the sieve are the prime numbers in the range 2 to n.

The algorithm uses an optimization feature by looking at the key values for m <= sqrt(n). However, in your implementation, test all numbers m such that m * m <= n, rather than computing the square root of n.
