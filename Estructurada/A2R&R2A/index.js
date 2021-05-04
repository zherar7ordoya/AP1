/**
 * @title Conversor de número romano a número arábigo (decimal).
 * @author Gerardo Tordoya
 * @date NOV-2020
 *
 * @description La presente solución se basa en un conversor directo desde un
 * número romano a arábigo. Y luego se hace la comprobación enviando este
 * número arábigo (decimal) para ser reconvertido a romano. Luego se compara
 * este resultado con la cadena enviada originalmente. De coincidir, se muestra
 * el resultado de la conversión. Caso contrario, se emite un mensaje de error.
 *
 * @see https://stackoverflow.com/questions/49091379/how-to-debug-an-interactive-node-js-app-in-vs-code
 */

const arabigoEnRomano = require('./arabigoEnRomano.js');
const romanoEnArabigo = require('./romanoEnArabigo.js');

const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout,
}); // *-----------------------------------------=> LLAMADO AL MÓDULO DE CONSOLA

console.clear();
console.log("\x1b[36m%s\x1b[0m", "\nCONVERSOR DE ROMANO A ARÁBIGO (DECIMAL)\n");

readline.question("\tIngrese número romano:\t", (caracteres) => {
    let arabigo = romanoEnArabigo(caracteres); // *--------=> CONVERSIÓN DIRECTA
    let comprobacion = arabigoEnRomano(arabigo); // *------=> CONVERSIÓN INVERSA
    // *---------------------------------------------------------=> COMPROBACIÓN
    if (caracteres == comprobacion) {
        console.log("\tDecimal:\t\t", arabigo);
    } else {
        console.log("\tSímbolo o formato incorrecto.");
    }

    console.log("\x1b[36m%s\x1b[0m", "\nFIN DEL PROGRAMA\n");
    readline.close();
});
