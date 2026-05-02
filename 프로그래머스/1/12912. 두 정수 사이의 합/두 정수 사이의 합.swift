func solution(_ a:Int, _ b:Int) -> Int64 {
    
    var result = 0
    var minA = min(a,b)
    var maxB = max(a,b)
    
    for i in minA...maxB {
        result += i
    }
    
    return Int64(result)
}