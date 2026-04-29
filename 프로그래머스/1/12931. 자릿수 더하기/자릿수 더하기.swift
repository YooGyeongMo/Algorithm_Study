import Foundation

func solution(_ n:Int) -> Int
{
    var str = String(n)
    
    return str.reduce(0) { $0 + $1.wholeNumberValue! }
}