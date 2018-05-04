use std::ffi::CStr;
use std::os::raw::c_char;
use std::fs::File;
use std::io::Write;
use spongedown;

#[no_mangle]
pub extern fn spongedown_to_html(text: *const c_char, htmlfile: *const c_char){
  unsafe {
    let input = CStr::from_ptr(text);
    let output = CStr::from_ptr(htmlfile);
    let html = spongedown::parse(input.to_str().unwrap()).unwrap();
    let mut file = File::create(output.to_str().unwrap()).unwrap();
    file.write_all(&html.as_bytes()).unwrap();
  }
}
