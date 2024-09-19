from flask import Flask, request, render_template

import os

app = Flask(__name__)

@app.route('/')
def home():
    return 'Server is running'

@app.route('/process', methods=['POST'])
def process():
    input_text = request.form['input_text']
    return f'You entered: {input_text}'

if __name__ == '__main__':
    app.run(debug=True)



if __name__ == "__main__":
    port = int(os.environ.get("PORT", 5000))
    app.run(host="0.0.0.0", port=port)