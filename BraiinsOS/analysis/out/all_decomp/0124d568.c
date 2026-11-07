// FUN_0124d568 @ 0124d568 size=148 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0124d568(int param_1,char *param_2)

{
  undefined4 uVar1;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = 1;
  if (*param_2 == '\x03') {
    (**(code **)(param_1 + 0x1c))
              (&local_1c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (local_1c < -0x7ffffffe) {
      if (local_1c != -0x7fffffff) {
        return 0;
      }
      FUN_012411a0(local_18);
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x18))(local_18,local_14);
      if (local_1c == 0) {
        return uVar1;
      }
    }
    thunk_FUN_016d3fb4(local_18);
  }
  return uVar1;
}

