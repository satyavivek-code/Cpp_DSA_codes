#include<iostream>
#include<vector>
using namespace std;

int findmax(int arr[4][4], int n, int m){
	int row = -1;
	int i = 0;
	int j = m-1;

	while (i < n && j >= 0){
		if (arr[i][j]== 1){
			j--;
			row = i;
		}
		else if (arr[i][j] == 0){
			i++;
		}
	}
	return row;
}

int main(){
	int arr[4][4] = {
				 {0, 1, 1, 1},
          		 {0, 0, 1, 1},
          		 {1, 1, 1, 1},
          		 {0, 0, 0, 0}
				 };
	int n = 4;
	int m = 4;

	cout << "find row with max 1 is  : " << findmax(arr, n, m) << endl;
	return 0;
}	

