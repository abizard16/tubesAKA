* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

body {
    background: linear-gradient(to bottom, #74ebd5, #ACB6E5);
    color: #333;
    line-height: 1.6;
}

header {
    background: linear-gradient(to right, #FF5F6D, #FFC371);
    color: rgb(0, 0, 0);
    text-align: center;
    padding: 1.2rem;
    border-bottom-left-radius: 40px;
    border-bottom-right-radius: 40px;
    box-shadow: 0px 4px 8px rgba(0, 0, 0, 0.3);
}

h1, h2 {
    margin-bottom: 10px;
}

main {
    max-width: 900px;
    margin: 30px auto;
    padding: 20px;
    background: white;
    border-radius: 15px;
    box-shadow: 0px 4px 10px rgba(0, 0, 0, 0.2);
}

label {
    display: block;
    margin: 10px 0 5px;
    font-weight: bold;
    color: #555;
}

input, select, button {
    width: 100%;
    padding: 10px;
    margin-bottom: 15px;
    border: 1px solid #ccc;
    border-radius: 8px;
    font-size: 1rem;
}

button {
    background: linear-gradient(to right, #6A11CB, #2575FC);
    color: white;
    cursor: pointer;
    font-size: 1rem;
    border: none;
}

button:hover {
    background: linear-gradient(to right, #2575FC, #6A11CB);
    transform: scale(1.05);
}

.output-section p {
    font-size: 1.2rem;
    margin: 10px 0;
    font-weight: bold;
    color: #444;
}

.explanation {
    margin-top: 20px;
}

.box-penjelasan {
    background: #f4f4f9;
    border: 2px solid #6A11CB;
    border-radius: 8px;
    padding: 15px;
    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1);
    color: #333;
    font-size: 1rem;
}

footer {
    text-align: center;
    padding: 1rem;
    background: linear-gradient(to right, #6A11CB, #2575FC);
    color: white;
    border-top-left-radius: 30px;
    border-top-right-radius: 30px;
}
