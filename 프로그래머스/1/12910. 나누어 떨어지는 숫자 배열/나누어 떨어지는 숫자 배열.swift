func solution(_ arr:[Int], _ divisor:Int) -> [Int] {
    
    var result: [Int] = []
    
    for item in arr {
        if item % divisor == 0 {
            result.append(item)
        }
    }
    
    result.sort{$0<$1}
    
    if result.isEmpty {
        result.append(-1)
    }
    
    return result
}