import Foundation

func solution(_ numbers:[Int]) -> [Int] {
    
    var arr:[Int] = []
    
    for i in 0..<numbers.count-1 {
        for j in i+1..<numbers.count {
            arr.append(numbers[i] + numbers[j])
        }
    }
    
    let result = Set(arr).sorted()
    
    return result
}