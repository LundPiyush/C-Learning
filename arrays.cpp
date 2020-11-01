#include<iostream>
#include<array>

using namespace std;
int main()
{
    array <int,5> data_array={11,22,33,44,55};
    //array <object_type,array_size> array_name
    cout<<data_array.at(2)<<endl;
    //at - finds the element at a parricular index
    cout<<data_array[2]<<endl;
    //front-returns first element of array
    cout<<data_array.front()<<endl;
    //back-returns last element of array
    cout<<data_array.back()<<endl;
    //fill -it fills one value in the whole array
    data_array.fill(52);
    for(int i=0;i<=4;i++)
        cout<<data_array[i]<<" ";
    //a1.swap(a2)-it swaps the data between these 2 arrays
    //size- return the size of array
    cout<<endl<<data_array.size();
    return 0;

}
