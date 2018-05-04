// Import dependencies
extern crate spongedown;

// Modules are other .rs source files
mod rspongedown;

// Export functions called by R
pub use rspongedown::spongedown_to_html;
