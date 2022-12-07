#include <iostream>
using namespace std;
int main()
{
  int n, m, a[1000], temp, sum;
  cin >> n;
  while (n--){
    cin >> m;
    sum = 0;
    for (int i=0; i<m; i++)
      cin >> a[i];
    for (int i=0; i<m; i++)
      for (int j=0; j<m-i-1; j++)
        if ( a[j] > a[j+1] ){
          temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
          sum++; 
        }
    printf("Optimal train swapping takes %d swaps.\n", sum);
  }
return 0;
} 
