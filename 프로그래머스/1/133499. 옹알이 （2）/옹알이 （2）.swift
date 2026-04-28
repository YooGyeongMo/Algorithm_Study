import Foundation

func solution(_ babbling: [String]) -> Int {
    let words = [("aya", "1"), ("ye", "2"), ("woo", "3"), ("ma", "4")]
    var count = 0
    
    for babble in babbling {
        var temp = babble
        
        for (word, number) in words {
            temp = temp.replacingOccurrences(of: word, with: number)
        }
        
        if temp.contains("11") || temp.contains("22") || temp.contains("33") || temp.contains("44") {
            continue
        }
        
        if temp.allSatisfy({ "1234".contains($0) }) {
            count += 1
        }
    }
    
    return count
}