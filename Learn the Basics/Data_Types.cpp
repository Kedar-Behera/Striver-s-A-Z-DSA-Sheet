int dataTypes(string type) {
	// Write your code here
    if(type == "Integer" || type == "Float"){
        return 4;
    }
    else if(type == "Long" || type == "Double"){
        return 8;
    }
    else{
        return 1;
    }
    return -1;
    

}
