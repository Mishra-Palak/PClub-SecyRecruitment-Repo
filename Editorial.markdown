## ***Least With One Less Digit*** Editorial
By *Palak Mishra*
***

**Hint -** Analyse the problem for the following three cases individually:</br>
1. $-10^{18} ≤ n ≤ -10$
2. $-9 ≤ n ≤ 9$
3. $10 ≤ n ≤ 10^{18}$

Did you find a pattern in each case?
***

**Tutorial -**

Consider the following three cases:

1. $-10^{18} ≤ n ≤ -10$</br>
Here, $n < 0$. This means dropping its least digit will be most beneficial. $p$ is obtained by reverse sorting (i.e., sorting in descending order) the remaining digits.

2. $-9 ≤ n ≤ 9$</br>
As $n$ is a single-digit integer, removing a digit from $n$ will make it disappear. Hence, for any integer $n$ lying between $-9$ and $9$ (both the limits included) will output `"NULL"`.

3. $10 ≤ n ≤ 10^{18}$</br>
Here, $n > 0$. This means dropping the largest digit of $n$ will allow us to find the smallest integer. $p$ is obtained by sorting (in ascending order) the remaining digits.

Time Complexity: $O(klogk)$ per testcase ( $k$ - no. of digits of $n$).

***
