//
//  main.cpp
//  123456789
//
//  Created by s20181102931 on 2019/8/27.
//  Copyright © 2019 s20181102931. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n=10,m=0;
    int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++)
    {
        for(int j=0;j<n;j++)
      {
        if(a[j]>a[j+1])
        {
            m=a[j+1];
            a[j+1]=a[j];
            a[j]=m;
        }
      }
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<endl;
    }
}
