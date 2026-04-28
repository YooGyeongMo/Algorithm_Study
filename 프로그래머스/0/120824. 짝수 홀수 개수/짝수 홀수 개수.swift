import Foundation

func solution(_ num_list:[Int]) -> [Int] {
    
    var result: [Int] = [0,0]
    
    for num in num_list {
        if (num%2 == 0) {
            result[0] += 1
        }
        else {
            result[1] += 1
        }
    }
    
    return result
}

