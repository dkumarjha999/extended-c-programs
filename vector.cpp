#include<bits/stdc++.h>
using namespace std;

int main()
{
// int *t we cant access element of iterator using pointer 


   vector<int>v;   // declaring vector of integer type with name v
   
   for(int i=0;i<10;i++)  
   v.push_back(i*5);        //  push_backaaaaaaaa() is a function used to insert element in last position of vector where its pointer is 
       
      vector<int>::iterator it;    // an integer type of iterator for accessing element of vector its necessary
      
       cout<<" printing using begin() and end() \n";  
      for(it=v.begin();it!=v.end();it++)    
      cout<<"  "<<*it;  // printing element 
     cout<<"\n\n";
   
   /*
   output looks like
    printing using begin() and end() 
  0  1  2  3  4  5  6  7  8  9


   
   */
   
   cout<<" printing using begin() and end() \n";  // begin() gives address of first element in vector and end() gives last element address
      for(it=v.end();it!=v.begin();it--)    
      cout<<"  "<<*it;  // printing element of vector of vector from last to end
     cout<<"\n\n";
     
     cout << "\nReference operator [v] : v[2] = " << v[2]<<"\n\n"; 
     
     cout<<v.at(3)<<" element at 4th position \n";   // at(position) gives element at given position
     
       cout << "\nback() fun to give last element : v.back() = " << v.back()<<"\n"; 
       
        cout << "\nfront() gives first element  : v.front() = " << v.front()<<"\n";
        
        // pointer to the first element 
    int* pos = v.data(); 
  
    cout << "\nThe first element is " << *pos<<"\n\n\n\n"; 
    
    
          // Assign vector 
    vector<int> v1; 
  
    // fill the array with 10 five times 
    v1.assign(5, 10); 
  
    cout << "The vector elements are: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    // inserts 15 to the last position 
    v.push_back(15); 
    int n = v1.size(); 
    
    cout<<" \nsize of v1 is = "<<n+1<<"\n\n";
    cout << "\nThe last element is: " << v1[n-1];     // check this line its not proper 
  
    // removes last element 
    v1.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    // inserts 5 at the beginning 
    v1.insert(v1.begin(), 5); 
  
    cout << "\nThe first element is: " << v1[0]; 
  
    // removes the first element 
    v1.erase(v1.begin()); 
  
    cout << "\nThe first element is: " << v1[0]; 
  
    // inserts at the beginning 
    v1.insert(v1.begin(), 5); 
    cout << "\nThe first element is: " << v1[0]; 
  
    // Inserts 20 at the end 
    v1.push_back(20); 
    n = v1.size(); 
    cout << "\nThe last element is: " << v1[n - 1]; 
  
    // erases the vector 
    v1.clear(); 
    cout << "\nVector size after erase(): " << v1.size(); 
  
    // two vector to perform swap 
    vector<int> v2, v3; 
    v2.push_back(1); 
    v2.push_back(2); 
    v3.push_back(3); 
    v3.push_back(4); 
  
    cout << "\n\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    cout << "\nVector 3: "; 
    for (int i = 0; i < v3.size(); i++) 
        cout << v3[i] << " "; 
  
    // Swaps v1 and v2 
    v2.swap(v3); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v3.size(); i++) 
        cout << v3[i] << " "; 
   
  cout<<"\n\n";

return 0;
}

/*
  
int main() 
{ 
    vector<int> v; 
    vector<int>::iterator it; 
  
    for (int i = 1; i <= 5; i++) 
        v.push_back(i); 
                                                this is also okk
    cout << "Output of begin and end: "; 
    for(it = v.begin(); it != v.end(); ++it) 
        cout << *it << " "; 
        
        cout<<"\n\n";
        
        return 0;
    }
    
  */  
