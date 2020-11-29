// Crates
extern crate std;
use std::{env};

// Files
mod cmd;
use cmd::{cmd::start_cmd};

mod web;
use web::{web::start_web};

mod user;

/*
 * main.rs
 *
 * Starts main app
 *
 * By Nathan McMillan
 */

/* _____ */

fn cmd_app() {
    println!("Starting C-secure cmd app...");
    start_cmd();
}

fn web_app() {
    println!("Starting C-secure web app...");
    start_web();
}

fn main() {
    let mut start_args: Vec<String> = env::args().collect();
    let run_app = &start_args[1];
    println!("Running C-secure as {:?} app", start_args);
    if run_app == "cmd" {
        cmd_app();
    } else if run_app == "web" {
        web_app();
    } else {
        println!("{:?} invalid, defaulting to cmd app...", run_app);
        cmd_app();
    }
}
