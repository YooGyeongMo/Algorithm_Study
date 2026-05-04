import Foundation

func solution(_ today:String, _ terms:[String], _ privacies:[String]) -> [Int] {
    
    func toDays(_ date: String) -> Int {
        let part = date.split(separator: ".").map{Int($0)!}
        let year = part[0]
        let month = part[1]
        let day = part[2]
        
        return year * 12 * 28 + month * 28 + day
    }
    
    let todayDays = toDays(today)
    
    var termsDict: [String: Int] = [:]
    var result: [Int] = []
    
    for term in terms {
        let part = term.split(separator: " ").map{String($0)}
        
        termsDict[part[0]] = Int(part[1])!
    }
    
    for i in 0..<privacies.count {
        let part = privacies[i].split(separator: " ").map{ String($0) }
        let date = part[0]
        let term = part[1]
        
        let privacyDays = toDays(date)
        let expiredDays = privacyDays + termsDict[term]! * 28
        
        if expiredDays <= todayDays {
            result.append(i+1)
        }
    }
    
    return result
}