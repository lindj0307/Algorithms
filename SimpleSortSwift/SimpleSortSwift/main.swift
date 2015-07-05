//
//  main.swift
//  SimpleSortSwift
//
//  Created by 林东杰 on 15/7/3.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

import Foundation

/*
一、数组
格式一：
    var 变量: 类型[]＝[变量值,变量值,...]
格式二：
    var 变量 ＝ [变量值,变量值,...]

ex.
    var arr1 = ["Hi","Joey"]
    var arr2 : [String] = ["Hi","Swift"]
    println ("arr1 =\(arr1),arr2=\(arr2)")

Swift 替代scanf()的方法:
    let sin = NSFileHandle.fileHandleWithStandardInput()
    let cx = NSString(data: sin.availableData, encoding: NSTF8StringEncoding)!
    let arr = cx.compoentsSeparatedByString(" ")

    var a=(arr[0] as NSString).integerValue
    var b=(arr[1] as NSString).integerValue
    println(a)
    println(b)
    println(a+b)

*/



//定义一个数组并初始化
var arrBook = [0,0]
for var m=2;m<11;m++ {
    arrBook.append(0)
}

var arrB = [8,6,4,5,7,8]

for var n=0; n<=5;n++ {
    arrBook[arrB[n]]++
}

for var i=0;i<10;i++ {
    for var j=1;j<=arrBook[i];j++ {
        println(i)
    }
}

println("Joey!")