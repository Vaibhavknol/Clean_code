#include<iostream>
#include<algorithm>
using namespace std;
int main() {
 int array[] = {5,10,40,30,20};
 int sizeofarray=sizeof(array)/sizeof(array[0]);//It gives the size
 int tempArray[] = {5,10,40,30,20};
std::sort(tempArray, tempArray + sizeofarray);//It sort the array in ascending order
for(int index1=0; index1<sizeofarray; index1++){
for(int index2 =0;index2<sizeofarray;index2++) {
if (array[index1]==tempArray[index2])//It is use to compare the array[] and tempArray[]
array[index1]=index2;
}
}
for(int index1=0; index1<sizeofarray; index1++){
 cout<<array[index1]<<" ";//It is use to give the output
 }
 }

