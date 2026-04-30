func solution(_ n:Int, _ m:Int) -> [Int] {
    func gcd(_ a: Int, _ b: Int) -> Int {
        return b == 0 ? a : gcd(b,(a%b))
    }
    
    let gcd2 = gcd(n,m)
    
    return [gcd2, (n*m)/gcd2]
}