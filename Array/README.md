# Algorithm-DataStructure

N-Sum(子集和数问题)
* 已知数组A[0…N-1]，给定某数值sum，找出  数组中的若干个数，使得这些数的和为sum。
* 数组A[0…N-1]的元素都大于0时:
*   考察向量x[0…N-1]，假定已经确定了前i个  值，现在要判定第i+1个值x[i]为0还是1。
*   假定由x[0…i-1]确定的A[0…i-1]的和为has；
*   A[i,i+1,…N-1]的和为residue(简记为r)；
*   has+a[i]≤sum并且has+r≥sum：x[i]可以为1；
*   has+(r-a[i])≥sum：x[i]可以为0；
* 数组A[0…N-1]的元素都小于0时:
*   has+a[i]+positive≥sum：x[i]可以为1；
*   has+negative≤sum并且has+positive≥sum：x[i]可以为0；

