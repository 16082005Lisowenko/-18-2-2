#include <iostream>
using namespace std;
int main() {
 int i , j , sum , arr[3][3];
  cout<<"enter array 3x3 "<<endl;
    for(i=0; i<3 ; i++)
  {
    for(j=0 ; j<3 ; j++)
    {
      cout << "Введiть елемент " << i + 1 << "-го рядка " << j + 1 << "-го стовпця: ";
			cin >> arr[i][j];
    }
    }
  cout<<" "<<endl;
  cout<<"ваша матриця 3х3"<<endl;
 for(i=0; i<3; i++)
{
 for(j=0; j<3; j++) cout << arr[i][j] << "\t";
 cout << endl;
}
  cout<<" "<<endl;
  sum=arr[0][0]*arr[1][1]*arr[2][2]+arr[0][2]*arr[1][0]*arr[2][1]+arr[0][1]*arr[1][2]*arr[2][0];
  cout<<"ответ "<< sum;
  }
