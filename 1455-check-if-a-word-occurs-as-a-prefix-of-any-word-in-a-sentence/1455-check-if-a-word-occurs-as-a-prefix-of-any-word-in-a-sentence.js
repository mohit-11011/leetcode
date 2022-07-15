/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function(sentence, searchWord) {
    let x=sentence.indexOf(searchWord);
    if(x===0)
        {
            return 1;
        }
    else
        {
            x=sentence.indexOf(` ${searchWord}`);
                if(x===-1)
        {
            return -1;
        }
            let count=1;
            for(let i=0;i<=x;i++)
                {
                    if(sentence[i]===' ')
                        {
                            count++;
                        }
                }
            return count;
            
        }
};