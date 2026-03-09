function calculateResult() {
    let n = parseInt(document.getElementById("subjects").value);
    let total = 0;

    for (let i = 1; i <= n; i++) {
        let marks = parseFloat(prompt("Enter marks for Subject " + i));
        total = total + marks;
    }

    let average = total / n;

    let grade;
    let result;

    if (average >= 90) {
        grade = "A+";
    } 
    else if (average >= 75) {
        grade = "A";
    } 
    else if (average >= 65) {
        grade = "B";
    } 
    else {
        grade = "C";
    }

    result = "Average: " + average + " | Grade: " + grade;

    document.getElementById("result").innerText = result;
}