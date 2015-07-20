//
//  main.swift
//  EnumerateSwift
//  奥数题目:口口口+口口口=口口口,将数字1~9分别填入9个口中,每个数字只能使用一次使等式成立.
//  173+286=459与286+173=259算同一组合,请问一共有多少组合?
//  Created by 林东杰 on 15/7/20.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

import Foundation

var i,total,sum :Int
total=0
var a = [Int]()
var book = [Int]()
//初始化数组
for var m=0;m<11;m++ {
    a.insert(0, atIndex: 0)
    book.insert(0, atIndex: 0)
}

for(a[1]=1;a[1]<=9;a[1]++){
    for(a[2]=1;a[2]<=9;a[2]++){
        for(a[3]=1;a[3]<=9;a[3]++){
            for(a[4]=1;a[4]<=9;a[4]++){
                for(a[5]=1;a[5]<=9;a[5]++){
                    for(a[6]=1;a[6]<=9;a[6]++){
                        for(a[7]=1;a[7]<=9;a[7]++){
                            for(a[8]=1;a[8]<=9;a[8]++){
                                for(a[9]=1;a[9]<=9;a[9]++){
                                    for(i=1;i<=9;i++){
                                        book[i] = 0
                                    }
                                    for (i=1;i<=9;i++){
                                        book[a[i]]=1
                                    }
                                    sum = 0;
                                    for(i=1;i<=9;i++){
                                        sum += book[i]
                                    }
                                    if(sum == 9){
                                        if (a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]==a[7]*100+a[8]*10+a[9]) {
                                            total++;
                                            println("\(a[1])\(a[2])\(a[3])+\(a[4])\(a[5])\(a[6])=\(a[7])\(a[8])\(a[9])")
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
println("Total=\(total/2)");

println("Hello, World!")

