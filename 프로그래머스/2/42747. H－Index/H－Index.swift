import Foundation

func solution(_ citations:[Int]) -> Int {
    
    var sortedArr = citations.sorted{$0 > $1}
    let arrCount = citations.count
    var result: [Int] = []
    
    for i in 0..<arrCount {
        
        if (sortedArr[i] >= i+1) {
            result.append(i+1)
        }
    }

    return result.isEmpty ? 0 : result.last!
}