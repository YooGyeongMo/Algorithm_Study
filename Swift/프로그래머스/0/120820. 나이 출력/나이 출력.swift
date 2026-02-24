import Foundation

func solution(_ age:Int) -> Int {
    
    var age1 = age
    var standard = 2022
    
    while (age1 > 1) {
        age1 -= 1
        standard -= 1
    }
    
    return standard
}