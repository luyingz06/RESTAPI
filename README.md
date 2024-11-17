# RESTAPI

## The REST API is supposed to have following functions:

a. one POST mission endpoint which accepts json

b. one GET mission endpoint which retrieves json from the POST endpoint

## ROS2 node 1 (rn1)

a. Uses the GET API endpoint to check for new data at least every second

b. Processes json from the REST API into a ROS action

c. Hosts an Action Client, which sends the ROS action to the Action Server

## ROS2 node 2 (rn2)

a. Hosts an Action Server

b. Execute callback simply prints the ROS action 
