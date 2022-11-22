#include "bits/stdc++.h"
using namespace std;

int32_t main() {
int n, m;
int target; 
cout<<"Enter number to be searched ";
cin >> target;
cout<<"Enter number of rows and coloumns of matrix " 
cin >> n >> m;
int mat[n][m];
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
cin >> mat[i][j];
}
}
bool found = false;
int r = 0, c = n - 1;

while (r < m && c >= 0) {
if (mat[r][c] == target) {
found = true;
}
mat[r][c] > target ? c-- : r++;
}

if (found)
{
            cout<<"The number " <<target << " is found at row "<<r<<" and coloumn "<<c<<endl;
}
else{
 cout<<"The number " <<target << " not exist in given matrix"<<endl;
}
}           