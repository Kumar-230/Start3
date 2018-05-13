Assume A to be an array having n elements
1. Read A
2. Repeat step 3 to 6 for i=0 to n-1
3. Set Min=A[i] and set Pos=i
4. Repeat step 5 for j=i+1 to n
5. If Min>A[j], then
                (a) Set Min=A[j]
                (b) Set Pos=j
                [End of if]
  [End of step 4 loop]
6. Interchange A[i] and A[Pos] using temporary variable
 [End of step 2 outer loop]
7. Exit
// -- 111117069
