func solution(_ s:String) -> String {
    
    var str = s
    var strArr: [String] = []
    
    for i in str {
        strArr.append(String(i))
    }
    
    strArr.sort{ $0 > $1 }
    
    return strArr.joined()
}