# RESTAPI

## The REST API has following functions:

a. one POST mission endpoint which accepts json

b. one GET mission endpoint which retrieves json from the POST endpoint

## ROS2 node 1 (rn1)

a. Uses the GET API endpoint to check for new data at least every second

b. Processes json from the REST API into a ROS action

c. Hosts an Action Client, which sends the ROS action to the Action Server

## ROS2 node 2 (rn2)

a. Hosts an Action Server

b. Execute callback simply prints the ROS action 

## How to run

Open a new terminal in /RESTAPI/api/, run following command to initialize the app:

```
python3 app.py
```
Open another terminal in /RESTAPI/ros2_ws/, tmux into three windows and run following commands:

First window (run rn1):
```
colcon build
source install/setup.bash
ros2 run rn1 client
```
Second window (run rn2):
```
colcon build
source install/setup.bash
ros2 run rn2 server
```
Third window (POST json files to assigned url or GET json file):

```
# The dictionary should contain "id", "action" and "order" in this case or you will see a warning says "Incomplete mission data received"
curl -X POST -H "Content-Type: application/json" -d '{"id": 1, "action": "scan", "order": 10}' http://127.0.0.1:5000/mission
```

```
curl -X GET http://127.0.0.1:5000/mission
```
## Expected results

You should see when rn1 starts, it checks the new data every second. When you send a json file, the REST API accepts it, rn1 processes json file into a ROS action and rn2 prints out the ROS action after "Mission completed" as the original json dictionary sent.
