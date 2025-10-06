#include<iostream>
#include<conio.h>
#include <climits>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    system("cls");
    int size;
    cout<<"enter the size of array  : ";
    cin>>size;
    vector<int>aar(size);

    //inputs elements
    cout<<"Enter the elements 0 or 1 only : ";
    for (int i = 0; i < size; i++)
    {
        cin>>aar[i];
    }

    cout<<"Given Array -->";
    for (int i = 0; i < size; i++)
    {
        cout<<aar[i]<<" ";
    }
    cout<<endl;
    int i = 0,j = size - 1;
    while (i<j)
    {
        while (aar[i] == 0)
        {
            i++;
        }
        while (aar[j]==1)
        {
            j--;
        }
        if (aar[i] == 1 && aar[j] == 0 && i < j)
        {
            swap(aar[i],aar[j]);
            i++;
            j--;
        }
        
        
    }
        //output array of intersection 
        cout<<"the sorted element is :";
        for (int i = 0; i < aar.size(); i++)
        {
            cout<<aar[i]<<" ";
        }
}
