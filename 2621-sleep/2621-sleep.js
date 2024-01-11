/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    const ans = await new Promise(function(e){
        setTimeout(e,millis);
    })
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */