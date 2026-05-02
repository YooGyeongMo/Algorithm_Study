import Foundation

func solution(_ my_string:String) -> String {
    
    var str = ""
    
    for char in my_string {
        if char.isUppercase {
            str += char.lowercased()
        }
        else {
            str += char.uppercased()
        }
    }
    
    return str
}