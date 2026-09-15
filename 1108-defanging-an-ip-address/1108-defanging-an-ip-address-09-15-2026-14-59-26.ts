function defangIPaddr(address: string): string {
    let defang = "";
    for(let i=0; i<address.length; i++){
        if(address[i]=="."){
            defang += "[.]"; 
        }
        else{
            defang += address[i];
        }
    }
    return defang;
};