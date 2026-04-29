func solution(_ n:Int) -> Int {
    if n < 2 { return 0 }
    
    var isPrime = Array(repeating: 0, count: n+1)
    var cnt = 0
    
    
    for i in 2...n {
        if isPrime[i] == 0 {
            cnt += 1
            
            for j in stride(from: i , through: n , by: i) {
                isPrime[j] = 1
            }
        }
    }
    
    return cnt
}