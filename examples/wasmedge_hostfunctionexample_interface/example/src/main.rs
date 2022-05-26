use wasmedge_hostfunctionexample_interface::*;

fn main() {
    set_class_id(123);
    set_class_name("WasmEdge");
    let mut num: u32 = add_student("Alice");
    println!("After adding Alice, num = {:?}", num);
    num = add_student("Fred");
    println!("After adding Fred, num = {:?}", num);
    num = add_student("Terry");
    println!("After adding Terry, num = {:?}", num);
    print();

    set_step_number(8);
    let res = start_climb_stairs();
    println!("After start climb stairs, res={:?}",res);
    climb_stairs_print();
}
