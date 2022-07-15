/**
 * @param {string[]} words
 * @param {string} pref
 * @return {number}
 */
var prefixCount = function(words, pref) {
    let count=0;
    for(let word of words)
        {
            if(word.indexOf(pref)===0)
                {
                    count++;
                }
        }
    return count;
};