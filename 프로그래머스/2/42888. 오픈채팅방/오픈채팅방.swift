import Foundation

func solution(_ record: [String]) -> [String] {
    
    var nickNameDict: [String: String] = [:]
    var log: [(command: String, uid: String)] = []
    
    for item in record {
        let part = item.split(separator: " ").map{String($0)}
        
        let cmd = part[0]
        let uid = part[1]
        
        if cmd == "Enter" {
            let nickName = part[2]
            nickNameDict[uid] = nickName
            log.append((cmd, uid))
        }
        else if cmd == "Leave" {
            log.append((cmd, uid))
        }
        else {
            let nickName = part[2]
            nickNameDict[uid] = nickName
        }
    }
    
    var result: [String] = []
    
    for item in log {
        let name = nickNameDict[item.uid]!
        
        if item.command == "Enter" {
            result.append("\(name)님이 들어왔습니다.")
        }
        else {
            result.append("\(name)님이 나갔습니다.")
        }
    }
    
    
    return result
}
