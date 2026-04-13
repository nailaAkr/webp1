function reverseNumber() {
            let n = parseInt(document.getElementById("num").value);
            let reversed = 0;

            while (n > 0) {
                let digit = n % 10;
                reversed = reversed * 10 + digit;
                n = Math.floor(n / 10);
            }

            document.getElementById("result").innerHTML = "Reversed Number: " + reversed;
        }