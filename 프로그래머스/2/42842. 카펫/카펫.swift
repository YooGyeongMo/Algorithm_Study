import Foundation

func solution(_ brown:Int, _ yellow:Int) -> [Int] {
    
    let square = brown + yellow
    var result: [(Int,Int)] = []
    
    var i = 1
    
    while i*i <= square {
        if square % i == 0 {
            result.append((max(i, square / i), min(i,square / i)))
        }
        
        i += 1
    }
    
    
    for item in result {
        let width = item.0 - 2
        let height = item.1 - 2
        
        if width * height == yellow {
            return [item.0, item.1]
        }
    }
    
    return []
}