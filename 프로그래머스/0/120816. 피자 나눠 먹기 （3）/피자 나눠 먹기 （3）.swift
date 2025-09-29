import Foundation

func solution(_ slice:Int, _ n:Int) -> Int {
    var pizza: Int
    
    pizza = Int(ceil(Double(n) / Double(slice)))
    
    return pizza
}