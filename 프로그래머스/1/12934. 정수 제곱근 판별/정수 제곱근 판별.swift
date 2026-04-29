func solution(_ n:Int64) -> Int64 {
    
    var i = 1
    
    while i*i <= n {
        if i*i == n {
            return Int64((i+1)*(i+1))
        }
        i += 1
    }
    
    return -1
}
