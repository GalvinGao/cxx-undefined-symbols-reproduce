#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn httpbin_hello() -> String;
    }
}

pub fn httpbin_hello() -> String {
    reqwest::blocking::get("https://httpbin.org/get")
        .unwrap()
        .text()
        .unwrap()
}
