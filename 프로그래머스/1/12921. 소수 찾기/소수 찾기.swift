func solution(_ n:Int) -> Int {
    
    guard n >= 2 else {
        return 0
    }
    
    var isPrime = Array(repeating: true, count: n+1)
    
    isPrime[0] = false
    isPrime[1] = false
    
    var i = 2
    
    while i * i <= n {
        if isPrime[i] {
            var j = i*i
            while j <= n {
                isPrime[j] = false
                j += i
            } 
        }
        i += 1
    }
    
    return isPrime.filter{$0}.count
}