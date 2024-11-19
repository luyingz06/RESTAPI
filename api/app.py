from flask import Flask, request, jsonify

app = Flask(__name__)
missions = []  # In-memory store for posted missions

@app.route('/mission', methods=['POST'])
def post_mission():
    """
    Endpoint to receive a mission (JSON payload) and add it to the mission list.
    """
    try:
        data = request.get_json()  # Parse incoming JSON data
        if not data:
            return jsonify({"error": "Invalid JSON or no data provided"}), 400
        
        # Validate required fields in the payload
        required_keys = {"id", "order", "action"}
        if not required_keys.issubset(data.keys()):
            return jsonify({"error": f"Missing one or more required fields: {required_keys}"}), 400
        
        missions.append(data)  # Add the mission to the in-memory store
        return jsonify({"status": "Mission received", "mission": data}), 200

    except Exception as e:
        return jsonify({"error": str(e)}), 500

@app.route('/mission', methods=['GET'])
def get_missions():
    """
    Endpoint to retrieve all stored missions as a JSON response.
    """
    try:
        return jsonify({"missions": missions}), 200
    except Exception as e:
        return jsonify({"error": str(e)}), 500

if __name__ == '__main__':
    # Run the Flask app, accessible on all network interfaces
    app.run(host='0.0.0.0', port=5001, debug=True)
