import Foundation

func solution(_ numbers:[Int]) -> Int {
    
    let result = numbers.sorted(by:>)    
    
    return result[0] * result[1]
}