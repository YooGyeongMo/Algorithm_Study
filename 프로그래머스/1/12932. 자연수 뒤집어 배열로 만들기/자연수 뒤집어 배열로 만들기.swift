import Foundation

func solution(_ n:Int64) -> [Int] {
    
    var result: [Int] = []
    var s = Int(n)
    
    while s > 0 {
        var digit = 0
        
        digit = s%10
        s /= 10
        
        result.append(digit)
    }
    
    return result
}
