/**
 * La conversión es directa, comparando el caracter actual con el anterior
 * evaluado. La inversión de la cadena obedece a que los errores de conversión
 * son significativamente menores si se evalúa desde las unidades a los miles.
 *
 * @param {string} caracteres
 */

module.exports = function romanoEnArabigo(caracteres) {
    const equivalencias = new Map([
        ["I", 1],
        ["V", 5],
        ["X", 10],
        ["L", 50],
        ["C", 100],
        ["D", 500],
        ["M", 1000],
    ]);

    let retorno = 0,
        actual,
        previo = 0;

    for (const caracter of caracteres.split("").reverse()) {
        actual = equivalencias.get(caracter); // ----------------=> YA INVERTIDO
        if (actual >= previo) {
            retorno += actual; // ----------------------------=> ACTUAL > PREVIO
        } else {
            retorno -= actual; // ----------------------------=> ACTUAL < PREVIO
        }
        previo = actual;
    }
    return retorno;
}

// *------------------------------------------------------------------=> PRUEBAS

// console.log(romanoEnArabigo("MCMM"));
