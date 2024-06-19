#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 1. To print "Welcome to ISTE Summer School":
  
  cout << "Welcome to ISTE Summer School" << endl;
  
  
  cout << endl ;
  // 2. To reverse a given number:
  
  int num,rev=0,ld;
  cout<<"Enter a number:";
  cin >> num;
  while(num!=0)
  {
  ld = num % 10;
  rev = rev*10 + ld;
  num = num / 10;
  }
  cout<<"Reversed number:"<<rev<<endl;
  
  cout << endl;
  // 3. To check a given number is prime or composite:
  
  cout<<"Enter a number:";
  cin >> num;
  int check = 0;
  if (num == 2){check = 1;}
  else if(num>2)
  {
  for (int i=2 ; i<num ; i++)
  {
  if (num%i == 0)
  {
  check = 0;
  break;
  }
  else{check = 1;}
  }
  }
  else if (num<1) {cout << "Invalid input"<<endl ;}
  
  if (check == 0) {cout << "Composite" << endl;}
  else if(check ==1) {cout << "Prime" << endl;}
  
  cout<<endl;
    // 4. Pattern printing:
    /*
     1
     2 3
     4 5 6
     7 8 9 10
     11 12 13 14 15
     */
    int Num = 1;
    for(int i=1 ; i<6 ;i++)
    {
        for(int j=0 ; j<i ;j++)
        {
            cout << Num << " ";
            Num++;
        }
        cout << endl;
    }
    
    cout << endl;
    // 5.Pattern printing:
    /*
     *
     ***
     *****
     *******
     *********
     */
    int m,n=1;
    for (int i=4 ; i>=0 ; i--)
    {
        m = i;
        while (m!=0)
        {
            cout << " ";
            m--;
        }
        for (int j=0 ; j<n ; j++)
        {
            cout << "*";
        }
        n+=2;
        cout << endl ;
    }
    
    cout << endl ;
    // 6. Find the largest element in an array:
    
        int ele;
     cout <<"Enter the number of elements in the array:";
     cin >> ele;
     int arr[ele];
     for(int i=0 ; i<ele ; i++)
     {
     cout<<"Enter "<<i+1<<"th element:";
     cin>>arr[i];
     }
     int lar = arr[0];
     for(int i=0 ; i<ele ; i++)
     {
     if(arr[i]>lar) {lar = arr[i];}
     }
     cout << "Largest element in the array: " << lar<<endl;
     
     cout << endl;
    
    // 7. i)initialize a vector , ii)input elements iii)sort and print the vector using inbuilt function
    // iv)reverse the sorted vector:
    
    vector <int> v ;
    int v_num;int temp;
    cout<<"Enter number of elements in a vector:";
    cin >> v_num;
    for(int i=0 ; i<v_num ; i++)
    {
        cout<<"Enter "<<i+1<<"th element:";
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<"Sorted vector: ";
    for (auto var : v)
    {
        cout<< var << " ";
    }
    cout << endl;
    auto len = v.size() / 2;
    for (int i=0 ; i<len ; i++)
    {
        temp = v[i];
        v[i] = v [v_num - (i+1)];
        v [v_num - (i+1)] = temp;
    }
    cout<<"Reversed vector: ";
    for (auto var : v)
    {
        cout<< var << " ";
    }
    cout<<endl;
    
    cout<<endl;
    // 8. Initialize a vector , use iterator to print each element , use reverse iterator to print elements in reverse order
    
    vector <int> v2 ;
    int v_num2;int temp2;
    cout<<"Enter number of elements in a vector:";
    cin >> v_num2;
    for(int i=0 ; i<v_num2 ; i++)
    {
        cout<<"Enter "<<i+1<<"th element:";
        cin >> temp2;
        v2.push_back(temp2);
    }
    auto it = v2.begin();
    cout << "Vector: ";
    for(it = v2.begin() ; it != v2.end() ; ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    auto it_rev = v2.end();
    cout << "Reversed Vector: ";
    for(it_rev = v2.end()-1 ; it_rev != v2.begin()-1; --it_rev)
    {
        cout << (*it_rev) << " ";
    }
    cout << endl;
}

