#include <iostream>
using namespace std;
int main() {
  const int size = 5;
	double arr[size][size];
  
	int  i, j;
	for (i = 0; i < size; i++)
    {
		for (j = 0; j < size; j++)
		{
	///		cout << "Введiть елемент " << i + 1 << "-го рядка " << j + 1 << "-го стовпця: ";
			cin >> arr[i][j];
		}
}
  cout<<"     "<<endl;
  cout<<"     "<<endl;
  cout<<"     "<<endl;
  cout<<"ваша матрица 3х3"<<endl;
  cout<<" "<<endl;
 for(i=0; i<size; i++)
  {
 for(j=0; j<size; j++)
    {
cout << arr[i][j] << "\t";
   }
    cout << endl;
    }
  double vec[size]={0};
for(j=0; j<size; j++)  
 for(i=0; i<size; i++)   
        vec[j]+=arr[i][j]*arr[i][i];
    
  cout<<"Vector:"<<endl;
   for(i=0; i<size; i++)
  cout<<vec[i]<<endl;

  }
