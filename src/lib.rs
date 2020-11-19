use std::io::{stdin, stdout, Write};

pub fn main_loop() {
    println!("Enter your message");

    let user_name = "User Name";

    let mut user_message= String::new();
    print!("{} ", user_name);

    let _ = stdout().flush();
    stdin().read_line(&mut user_message).expect("No message entered");
    if let Some('\n') = user_message.chars().next_back() {
        user_message.pop();
    }
    if let Some('\r') = user_message.chars().next_back() {
        user_message.pop();
    }

    println!("{} '{}'", user_name, user_message);
}

fn main() -> !{
    println!("C-secure\nThe secure chat app\n");
    loop { main_loop(); }
}
