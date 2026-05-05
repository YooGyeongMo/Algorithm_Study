func solution(_ n:Int) -> Int {
    var isPrime = Array(repeating: true, count: n+1)
    isPrime[0] = false
    isPrime[1] = false
    
    var i = 2
    
    while i*i <= n {
        if isPrime[i] {
            for j in stride(from: i*i, through: n, by: i) {
                isPrime[j] = false
            }
        }
        i += 1
    }
    
    return isPrime.filter{ $0 }.count
}