from flask import Flask, request, jsonify

app = Flask(__name__)
missions = []  # Store posted missions

@app.route('/mission', methods=['POST'])
def post_mission():
    data = request.json
    missions.append(data)
    return jsonify({"status": "Mission received"}), 200

@app.route('/mission', methods=['GET'])
def get_missions():
    return jsonify(missions), 200

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)

