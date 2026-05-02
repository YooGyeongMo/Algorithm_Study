func solution(_ x:Int, _ n:Int) -> [Int64] {
    
    let target = x * n
    var result: [Int64] = []
     
    if x==0 {
        for i in 1...n {
            result.append(0)
        }
        return result
    }
    
    for i in stride(from: x, through: target, by: x ) {
        result.append(Int64(i))
    }
    
    
    return result
}