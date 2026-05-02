import Foundation

func solution(_ t:String, _ p:String) -> Int {
    
    var result = 0
    let start = t.count - p.count
    
    let pInt = Int(p)!
    let tArr = Array(t)
    
    for i in 0...start {
        let str = String(tArr[i..<i+p.count])
        
        if pInt >= Int(str)! {
            result += 1
        }
    }
    
    
    
    return result
}