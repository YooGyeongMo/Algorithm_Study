func solution(_ n:Int) -> Int {
    if n < 2 { return 0 }
    
    var isPrime = Array(repeating: 0 , count: n+1)
    var cnt = 0 
    
    isPrime[0] = 1
    isPrime[1] = 1
    
    var i = 2
    
    while i*i <= n {
        if isPrime[i] == 0 {
            for j in stride(from: i*i, to: n+1, by: i) {
                isPrime[j] = 1
            }
        }
        
        i += 1
    }
    
    for j in 0...n {
        if isPrime[j] == 0 {
            cnt += 1
        }
    }
    
    return cnt
}