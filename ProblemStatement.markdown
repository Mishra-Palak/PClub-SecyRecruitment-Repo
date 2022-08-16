## **One Digit Less Least**
***

*time limit per test : 1 second</br>
memory limit per test : 256 megabytes</br>
input : standard input</br>
output : standard output*

***
</br>

You are given an integer $n$.

Find the smallest integer $p$ that can be formed using the digits of $n$, having number of digits one less than the total number of digits of $n$.

The choice of the dropped digit (the digit of $n$ that is not included in the formation of the smallest integer) should be such that the smallest *possible* integer is recorded. 

$n$ may be *positive*, *negative* or *zero*. 

**Input**

Each test contains multiple test cases. The first line contains the number of test cases $t$ $(1 ≤ t ≤ 100)$. Description of the test cases follows.

The only line of each test case contains a single integer $n$ $(-10^{18} ≤ n ≤ 10^{18})$.

**Output**

For each test case, output a single integer $p$.</br>
If no such integer $p$ is possible, output `"NULL"`.

**Example**
***
***input:</br>***
3</br>
2</br>
1562401</br>
-1668
***
***output:</br>***
NULL</br>
101245</br>
-866
***