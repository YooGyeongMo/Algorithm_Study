import Foundation

func solution(_ numbers:[Int]) -> Int {
    
    let nums = [1,2,3,4,5,6,7,8,9]
    
    return nums.filter{!numbers.contains($0)}.reduce(0,+)
}