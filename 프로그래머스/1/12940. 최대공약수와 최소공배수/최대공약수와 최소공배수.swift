func solution(_ n:Int, _ m:Int) -> [Int] {
    
    func gcd(_ a: Int, _ b: Int) -> Int {
        return b == 0 ? a : gcd(b,a%b)
    }
    
    var a = gcd(n,m)
    var b = (n*m)/a
    
    return [a,b]
}