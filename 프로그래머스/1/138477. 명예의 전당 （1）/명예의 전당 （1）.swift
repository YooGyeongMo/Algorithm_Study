import Foundation

func solution(_ k: Int, _ score: [Int]) -> [Int] {
    var arr: [Int] = []
    var result: [Int] = []
    
    for num in score {
        arr.append(num)
        arr.sort { $0 > $1 }
        
        if arr.count > k {
            arr.removeLast()
        }
        
        result.append(arr.last!)
    }
    
    return result
}