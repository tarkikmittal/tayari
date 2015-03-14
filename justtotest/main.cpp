//
//  main.cpp
//  justtotest
//
//  Created by TARKIK MITTAL on 14/03/15.
//  Copyright (c) 2015 TARKIK MITTAL. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
 
    cin >> n;
    
    return 0;
}

int long long sum(int arr[],int l,int r,int k)
{
    int long long total = 0;
    
    while(l<=r)
    {
        total += arr[l];
        l += k;
        
    }
    
    return total;
    
}