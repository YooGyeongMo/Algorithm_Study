import Foundation

func solution(_ new_id:String) -> String {
    
    var newId = new_id.lowercased()
    var secondLevelId = ""
    var thirdLevelId = ""
    
    for char in newId {
        if char.isLetter || char.isNumber || char == "-" || char == "_" || char == "." {
            secondLevelId += String(char)
        }
    }
    
    var check = false
    
    for char in secondLevelId {
        
        if char == "." {
            if !check {
                thirdLevelId.append(char)
            }
            check = true
        }
        else {
            thirdLevelId.append(char)
            check = false
        }
    }
    
    if thirdLevelId.last == "."  {
        thirdLevelId.removeLast()
    }
    if thirdLevelId.first == "." {
        thirdLevelId.removeFirst()
    }
    
    if thirdLevelId == "" {
        thirdLevelId += "a"
    }
    
    if thirdLevelId.count >= 16 {
        //thirdLevelId = String(thirdLevelId.prefix(15))
        let index = thirdLevelId.index(thirdLevelId.startIndex, offsetBy: 15)
        thirdLevelId = String(thirdLevelId[..<index])
    }
    
    if thirdLevelId.last == "." {
        thirdLevelId.removeLast()
    }
    
    while thirdLevelId.count < 3 {
        let last = thirdLevelId.last!
        thirdLevelId += String(last)
    }

    
    return thirdLevelId
}