import Foundation

func solution(_ record: [String]) -> [String] {
    
    var nickName: [String: String] = [:]
    var logs: [(command: String, id: String)] = []
    
    var result: [String] = []
    
    for item in record {
        let part = item.split(separator: " ").map{ String($0) }
        
        let cmd = part[0]
        let uID = part[1]
        
        if cmd == "Enter" {
            let name = part[2]
            nickName[uID] = name
            logs.append((cmd, uID))
        }
        else if cmd == "Leave" {
            logs.append((cmd, uID))
        }
        else {
            let name = part[2]
            nickName[uID] = name
        }
    }
    
    for item in logs {
        
        if item.command == "Enter" {
            result.append("\(nickName[item.id]!)님이 들어왔습니다.")
        }
        else {
            result.append("\(nickName[item.id]!)님이 나갔습니다.")
        }
    }
    
    return result
}