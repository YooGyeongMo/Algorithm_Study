import Foundation

func solution(_ n:Int) -> Int {
    
    var result = 0
    
    for index in stride (from: 2, to: n+1, by: 2) {
        result += index
    }
    
    return result
}