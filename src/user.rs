use std::{fs};

pub fn last_login() {
    fs::read("../user/lastLogin.txt");
}

pub fn login(last_user: bool) {
    if last_user == true {
        let user = last_login();
        println!("{:?}", user);
        // Login from the contents of user/lastLogin.txt
    } else {
        println!("Login");
        // Login stuff
    }
}
