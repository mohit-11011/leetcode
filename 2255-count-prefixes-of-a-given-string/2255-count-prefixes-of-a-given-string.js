/**
 * @param {string[]} words
 * @param {string} s
 * @return {number}
 */
var countPrefixes = function(words, s) {
    let count=0;
    for(let word of words)
        {
            if(s.indexOf(word)===0)
                {
                    count++;
                }
        }
    return count;
};