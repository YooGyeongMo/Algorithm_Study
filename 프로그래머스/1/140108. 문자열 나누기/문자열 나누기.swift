import Foundation

func solution(_ s:String) -> Int {
    
    var strArr = Array(s)
    
    var result = 0
    var same = 0
    var diff = 0
    var first = s.first
    
    for i in 0..<strArr.count {
        
        if same == diff {
            result += 1
            same = 0
            diff = 0
            first = strArr[i]
        }
        
        
        if strArr[i] == first {
            same += 1
        }
        else {
            diff += 1
        }
    }
    
    return result
}