#include<iostream>

using namespace std;

// linear search function.

int linearSearch(int arr[], int element){
int index ;
    for(int i =0 ; i <5;i++){

        if (arr[i]==element){
        index = i;
        break;
        } 
    }
    
cout<<" index ="<< index;
    
return -1;
}

// reverse array function.

int reversearray(int arr[],int size){

    int  end =size-1; 
    int start =0 ;

while (start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}
return 0;
}


// sum of all the elementt in the array 
void sumOfArray(int arr[], int size) {

int sum =0;
    for (int i = 0; i < size; i++)
    {
      sum =  sum + arr[i]  ;
    
    }
    
   cout << sum;
   
}


// product of all element inther aray;
void productOfArray(int arr[], int size) {

int sum =1;
    for (int i = 0; i < size; i++)
    {
      sum =  sum * arr[i]  ;
    
    }
    
   cout << sum;
   
}
// swap min and max

void swapMinMax( int arr[],int count){
    int min = 0;
    int max =0;

    for (int i = 0; i < count; i++)
    {
        if(arr[i]<arr[min]){
            min =i;
        }
    }
    
        for (int i = 0; i < count; i++)
    {
        if(arr[i]>arr[max]){
            max =i;
        }
    }
    swap(arr[min],arr[max]);
}


// function to find unique value 


void findUnique(int arr[],int count){

    int unique = 0;

    for (int i = 0; i < count; i++)
    {
       bool match_found = false; 
        
        for (int j = 0; j < count; j++)
        {
            if (arr[i]==arr[j] &&i!=j)
            {
                 match_found = true; 
                break;
            }
        }
                if (match_found == false){
                        cout << arr[i] << endl;
                }
            }
            
        }

// to find intersection 

int findInterSection(int arr[],int count1 ,int arr2[],int count2){

    for (int i = 0; i < count1; i++)
    {
        for (int j = 0; j < count2; j++)
        {
            if (arr[i]==arr2[j])
            {
                cout << arr[i]<<"";
                arr[j]=-1;
                break;
            }
            
        }
        
    }
    



}

        

// main function here. 
int main(){
    int arr;
             int marks[5] ={56,87,99,63,42};

             int data[5] ={1,2,2,4,1};

               int a[4] = {4,2,1,4};
               int b[3] = {2,5,4};

      findInterSection(a,4,b,3);
//               int samllest = marks[0];
// int index1;
//              for(int i =0; i<5; i++){
//                 if(marks[i]>samllest){
                
//                     samllest = marks[i];
//                  index1 = i ;
               
//                 }
//              }
//   cout<< samllest<< endl;



// reversearray(data,5);
// for(int i=0 ;i<5;i++){
// cout<< data[i]<<endl;
// }
//     return 0;



 


    // swapMinMax(data, 5);

    // for (int i = 0; i < 5; i++) {
    //     cout << data[i] << "";
    // }


  


    return 0;

}


