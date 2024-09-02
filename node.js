

function addition(a, b) {
    return a + b;
}

function subtraction(a, b) {
    return a - b;
}

function multiplication(a, b) {
    return a * b;
}

function division(a, b) {
    return a / b;
}

function modulus(a, b) {
    return a % b;
}

function power(a, b) {
    return Math.pow(a, b);
}

function main(){
    let a = parseInt(prompt("first number: "));
    let b = parseInt(prompt("second number: "));
    let operator = prompt("operator: ");

    if (operator == "1") {
        console.log(addition(a, b));
    } else if (operator == "2") {
        console.log(subtraction(a, b));
    } else if (operator == "3") {
        console.log(multiplication(a, b));
    } else if (operator == "4") {
        console.log(division(a, b));
    } else if (operator == "5") {
        console.log(modulus(a, b));
    } else if (operator == "6") {
        console.log(power(a, b));
    } else {
        console.log("invalid operator");
    }
}
