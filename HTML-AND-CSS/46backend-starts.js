// console.log("Hello World");
const http = require('node:http');
const hostname = '127.0.0.1';
const port = 3000;
const server = http.createServer((req, res) => {
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    // res.end('Hello World This is Nischal Shrestha');
    res.end(`<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>box shadow and text shadow</title>
    <style>
        .container {
            display: flex;
        }

        .card {
            padding: 23px 12px;
            /*above make the text to the center with respect to the box*/
            margin: 23px 12px;
            /* border: 2px solid red; */
            background-color: aqua;

            /* box-shadow: offset-x offset-y color(red green blue) */
            /* box-shadow:10px 13px green */

            box-shadow: 7px 9px 5px 10px red;
            /*(when values are positive)*/
            /* box-shadow: -9px -11px 10px deeppink; */
            /* (when values are negative and the third 10px help to show the blor color) */
            /* fourth 10px help to increase and change the darkness of the color */
            /*above writing syntax is vertical then horizontal and color*/
            /* if shadow is to be printed in the lower part then box-shadow value should be placed positive and
            if shadow is to be printed in the upper part then box-shadow value should be placed negative. */

            .card h2 {
                text-shadow: 3px 4px red;
            }
        }
    </style>

</head>

<body>
    <div class="container">
        <div class="card" id="card-1">
            <h2>This is C++ Course.</h2>
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Amet quis nam, enim eos quos praesentium
                explicabo maiores facilis nihil earum, beatae cum dolorem itaque delectus expedita. Incidunt consequatur
                nostrum quo!</p>
        </div>
        <div class="card" id="card-2">
            <h2>This is HTML Course.</h2>
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Deserunt, dolores culpa recusandae fugiat nihil
                amet doloribus delectus rem, ad quia, ullam inventore numquam voluptatem tempore aspernatur est eveniet
                earum reiciendis.</p>
        </div>
        <div class="card" id="card-3">
            <h2>I will complete the Web devlopment course. </h2>
        </div>
        <div class="card" id="card-4">
            <h3>Card4</h3>
        </div>
    </div>
</body>

</html>`);
});
server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});