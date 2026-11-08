// FUN_01705710 @ 01705710 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01705710(undefined4 *param_1)

{
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_01705794(*param_1,param_1[1]);
    FUN_017058e4(param_1 + 2);
    return;
  }
  if (*(char *)(param_1 + 9) == '\x03') {
    FUN_01705794(param_1[4],param_1[5]);
    FUN_017058e4(param_1 + 3);
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    return;
  }
  return;
}

