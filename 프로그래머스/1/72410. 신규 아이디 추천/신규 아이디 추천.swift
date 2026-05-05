import Foundation

func solution(_ new_id:String) -> String {
    
    var id = new_id.lowercased()
    
    // 2단계
    id = id.filter {
        $0.isLowercase || $0.isNumber || $0 == "-" || $0 == "_" || $0 == "."
    }
    
    var temp = ""
    var isCheck = false
    
    // 3단계
    for char in id {
        if char == "." {
            if !isCheck {
                temp += String(char)
            }
            isCheck = true
        }
        else {
            temp += String(char)
            isCheck = false
        }   
    }
    id = temp
    
    // 4단계
    
    if id.last == "." {
        id.removeLast()
    }
    if id.first == "." {
        id.removeFirst()
    }
    
    // 5단계
    
    if id == "" {
        id += "a"
    }
    
    
    // 6단계
    
    if id.count >= 16 {
        id = String(id.prefix(15))
        if id.last! == "." {
            id.removeLast()
        }
    }
    
    
    // 7단계
    if id.count <= 2 {
        while id.count < 3 {
            id += String(id.last!)
        }
    }
    
    return id
}