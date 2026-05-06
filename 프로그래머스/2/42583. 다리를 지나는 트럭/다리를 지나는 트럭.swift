import Foundation

func solution(_ bridge_length:Int, _ weight:Int, _ truck_weights:[Int]) -> Int {
    
    var trucks = truck_weights
    var time = 0
    var bridge = Array(repeating: 0 , count: bridge_length)
    var truckIndex = 0
    var bridgeWeight = 0
    
    while truckIndex < truck_weights.count {
        time += 1
        
        let passTruck = bridge.removeFirst()
        let truck = truck_weights[truckIndex]
        bridgeWeight -= passTruck
        
        if bridgeWeight + truck <= weight {
            bridge.append(truck)
            bridgeWeight += truck
            truckIndex += 1
        }
        
        else {
            bridge.append(0)
        }
        
    }
    
    return time + bridge_length
}