console.log("debut")

let mbutton = null;

setTimeout(() => {
    mbutton = document.getElementsByClassName('btn btn-link ml-auto')[0];
    mbutton.addEventListener('click',()=>{
        console.log("j'ai appuyé")
    
        input2 = document.getElementById("newName");
        input2.value = "1pd";
        affiche()
    })
}, 2000)

let input2 = null;

let nbutton = null;

function affiche(){
    nbutton = document.getElementsByClassName('btn btn-disabled')[0];
    spammoi()
}

function spammoi(){

    setInterval(()=>{
        nbutton.click();
    }, 200)
    
}
console.log("fin")
