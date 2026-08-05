import Foundation

func solution(_ my_string:String) -> String {
    
    let result = my_string.reversed()
    
    return result.map { String($0)}.joined()
}