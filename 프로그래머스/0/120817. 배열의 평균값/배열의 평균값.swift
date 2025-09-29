import Foundation

func solution(_ numbers:[Int]) -> Double {
    
    let sum: Int = numbers.reduce(0,+)
    let result: Double = Double(sum) / Double(numbers.count)
    
    return result
}