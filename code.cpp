#include <iostream>
using namespace std;
int main()
{
   int position, c, n;
   //cout<<"Enter number of elements in array\n"<<endl;
   cin>>n;
   char array[n], value;
   //cout<<"Enter elements\n"<<endl;
   for (c = 0; c < n; c++)
   {
   cin>>array[c];
    }
  // cout<<"Enter the location where you wish to insert an element\n"<<endl;
   cin>>position;
   //cout<<"Enter the value to insert\n"<<endl;
   cin>>value;
   for (c = n - 1; c >= position - 1; c--)
   {
  array[c+1] = array[c];
    }
	array[position-1] = value;
    //cout<<"Resultant array is\n"<<endl;
   for (c = 0; c <= n; c++)
   {
      cout<<array[c]<<'\t'; 
         }
   return 0;
}
