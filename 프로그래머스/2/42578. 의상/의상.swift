import Foundation

func solution(_ clothes:[[String]]) -> Int {
    var clothing: [String: Int] = [:]
    
    for item in clothes {
        clothing[item[1], default:0] += 1
    }
    
    var result = 1
    
    for (key, value) in clothing {
        result *= value + 1
    }
    
    return result - 1
}