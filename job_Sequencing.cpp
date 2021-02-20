// Pseudo code

Algorithm job_seq(d, l, n)
{
  d [0] = 0; JS [1] = 1; i = 1;
  for j = 2 to n do;
  {
    k = i;
    while ((d[JS[k] > d[j]]) and (d[JS[k]]! = k)) k = k - 1;
    if ((d[JS[k] < > d[j]]) and (d[j] > k)) then
    {
      for (m=i; m<(k+1); m--)
      {
        JS[m+1] = JS[m];
        JS[K+1] = j;
        i = i+1;
    }
}
