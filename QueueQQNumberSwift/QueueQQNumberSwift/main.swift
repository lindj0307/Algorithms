//
//  main.swift
//  QueueQQNumberSwift
//
//  Created by 林东杰 on 15/7/14.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

import Foundation

var head,tail : Int
var q = [0,6,3,1,7,5,8,9,2,4,0,0,0,0,0,0,0,0,0,0]
head=1
tail=10
while (head < tail) {
    println("\(q[head])")
    head++
    q[tail] = q[head]
    tail++
    head++
}
//println(q)
println("Hello, World!")

