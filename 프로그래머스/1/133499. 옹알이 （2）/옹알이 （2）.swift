import Foundation

func solution(_ babbling: [String]) -> Int {
    
    let words = ["aya", "ye", "woo", "ma"]
    var result = 0
    
    for babble in babbling {
        var word = babble
        for i in 0..<words.count {
            word = word.replacingOccurrences(of: words[i], with: String(i+1))
        }
        
        if Int(word) != nil && !word.contains("11") && !word.contains("22") && !word.contains("33") && !word.contains("44") {
            result += 1
        }
    }
    
    return result
}