import Foundation

func solution(_ my_string:String, _ n:Int) -> String {
    
    let starting: Int = my_string.count - n
    
    let newString = my_string.index(my_string.startIndex, offsetBy: starting)
    
    return String(my_string[newString...])
}