import Foundation

func solution(_ s:String) -> Bool
{   
    var stack: [String] = []
    
    for char in s {
        if char == "(" {
            stack.append("(")
        }
        
        if stack.isEmpty {
            if char == ")" {
                return false
            }
        }
        else {
            if char == ")" {
                stack.removeLast()
            }
        }
    }
    
    if !stack.isEmpty {
        return false
    }
    
    return true
}