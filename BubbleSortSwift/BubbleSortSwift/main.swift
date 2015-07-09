//
//  main.swift
//  BubbleSortSwift
//
//  Created by 林东杰 on 15/7/9.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

import Foundation

struct student {
    var name = "sdf"
    var score = 0
}

var dic = ["H1":8,"H2":4,"H3":9,"H4":22,"H5":1]

var arr = [8,3,5,6,9,7]
var temp = 0
for var i=0;i<=arr.count-1;i++ {
    for var j=0;j<=arr.count-i-2;j++ {
        if arr[j]<arr[j+1] {
            temp = arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp
        }
    }
}
println(arr)

println("Hello, Joey!")

