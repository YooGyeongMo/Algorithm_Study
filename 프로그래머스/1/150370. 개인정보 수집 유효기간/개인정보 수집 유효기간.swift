import Foundation

func solution(_ today:String, _ terms:[String], _ privacies:[String]) -> [Int] {
    
    func toDate (_ date: String) -> Int {
        let part = date.split(separator: ".").map{ Int($0)! }
        
        return part[0] * 12 * 28 + part[1] * 28 + part[2]
    }
    
    var todayByDay = toDate(today)
    var dict: [String : Int] = [:]
    
    for item in terms {
        let part = item.split(separator: " ").map { String($0) }
        
        dict[part[0]] = Int(part[1])
    }
    
    var result: [Int] = []
    
    for i in 0..<privacies.count {
        let part = privacies[i].split(separator: " ").map{ String($0) }
        
        let termDay = dict[part[1]]! * 28
        let expiredDate = toDate(part[0]) + termDay
        
        if expiredDate <= todayByDay {
            result.append(i+1)
        }
        
    }
    
    return result
    
}