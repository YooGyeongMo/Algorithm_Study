import Foundation

func solution(_ array:[Int], _ commands:[[Int]]) -> [Int] {
    
    var result: [Int] = []
    
    for item in commands {
        let i = item[0]
        let j = item[1]
        let k = item[2]
        
        let arr = array[i-1...j-1].sorted()
        
        result.append(arr[k-1])
    }
    
    
    return result
}