//
//  main.swift
//  QuickSortSwift
//
//  Created by 林东杰 on 15/7/9.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

import Foundation

var arr = [Int]()
//生成不重复的10个随机数
while(arr.count<10){
    var randomInt = Int(arc4random_uniform(100))
    var b = false
    for n in arr {
        if (n == randomInt) {
            b = true
        }
    }
    if(!b) {
        arr.append(randomInt)
    }
}
print(arr)

func quickSort(iLeft: Int,iRight:Int) {
    var i,j,t,temp :Int
    if(iLeft>iRight){return}
    //以第一个为基数
    temp = arr[iLeft]
    i=iLeft
    j=iRight
    if(i>j) { return }
    while(i != j){
        while(i<j && arr[j]>=temp){ j-- }
        while(i<j && arr[i]<=temp){ i++ }
        //交换位置
        if(i<j){
            t=arr[i]
            arr[i] = arr[j]
            arr[j] = t
        }
    }
    //循环结束后与基数交换位置
    arr[iLeft] = arr[i]
    arr[i] = temp
    quickSort(iLeft, i-1)
    quickSort(i+1, iRight)
}

quickSort(0, 9)
println(arr)
println("Hello,QucikSort!")

