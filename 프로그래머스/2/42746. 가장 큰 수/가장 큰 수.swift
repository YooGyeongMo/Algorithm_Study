import Foundation

func solution(_ numbers:[Int]) -> String {
    
    let result = numbers
        .map { String($0) }
        .sorted {$0+$1 > $1+$0}
        .joined()
    
    return result.first == "0" ? "0" : result
}