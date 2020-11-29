use std::{fs, io, path::Path};

const USER: &str = "user/";

fn user_dir() {
    if Path::new(USER).exists() {
        println!("user/ already exists");
    } else {
        fs::create_dir(USER).expect("Error: user/ already exists");
        fs::File::create("user/lastLogin.txt");
    }
}

fn main() {
    user_dir();
}
