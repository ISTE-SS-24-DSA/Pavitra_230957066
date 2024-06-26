#include <bits/stdc++.h>
using namespace std;

//function to print values from 1 to N.
void print(int &i , int &N)
{
    if (i == N){}
    else{
        cout<<i<<" ";
        i++;
        print(i,N);
    }
}

int main()
{
    
    // 1:
    
    //creating set-
    set <int> s;int n;
    
    //adding elements-
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0 ;i<n; i++)
    {
        int temp;
        cout<<"Enter "<<i+1<<"th entry:";
        cin>>temp;
        s.insert(temp);
    }
    
    //printing set-
    cout<<"set:";
    for(auto &value : s)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    
    //checking a certain element:
    int ele;
    cout<<"Enter entry to be found:"<<endl;
    cin>>ele;
    auto it = s.find(ele);
    if( it != s.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    
    // 2:
    unordered_map <int,int> m;
    int num;
    cout<<"Enter number of elements:";
    cin >> num;
    for (int i=0; i<num ; i++)
    {
        int temp;
        cout<<"Enter "<<i+1<<"th entry:";
        cin >> temp;
        m[temp]++;
    }
    for(auto value:m)
    {
        cout <<"Frequency of "<< value.first << " is:" << value.second << endl;
    }
    
    //3:
    int num1;
    cout<<"Enter number of elements:";
    cin>>num1;
    int arr[num1];string keys[num1];
    cout<<"Give input for keys:";
    for(int i=0 ; i<num1 ; i++)
    {
        string temp_s;
        cout<<"Enter "<<i+1<<"th entry:";
        cin>>temp_s;
        keys[i]=temp_s;
    }
    cout<<"Give input for values:"<<endl;
    for(int i=0 ; i<num1 ; i++)
    {
        int temp;
        cout<<"Enter "<<i+1<<"th entry:";
        cin>>temp;
        arr[i]=temp;
    }
    map <string,int> m1;
    for(int i=0 ; i<num1 ; i++)
    {
        m1[keys[i]]=arr[i];
    }
    string str;
    cout<<"Enter string to be found:"<<endl;
    cin>>str;
    int check = -1;
    for(int i=0 ; i<num1 ; i++)
    {
        if (keys[i]==str){
            auto it = m1.find(str);
            cout<<"string found, its value is:"<<it->second<<endl;
            check=1;
            break;
        }
    }
    if (check!=1){cout<<check<<endl;}
    
    // 4:print numbers from 1 to N:
    
    int num2;
    cout<<"Enter a number:";
    cin>>num2;
    num2++;
    int i=1;
    print(i,num2);
    return(0);
}
