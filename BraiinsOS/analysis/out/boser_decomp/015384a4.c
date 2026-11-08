// FUN_015384a4 @ 015384a4 size=132 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015384a4(int param_1,char *param_2)

{
  undefined4 uVar1;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = 1;
  if (*param_2 == '\x03') {
    (**(code **)(param_1 + 0x1c))
              (&local_24,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (local_24 < -0x7ffffffe) {
      uVar1 = 0;
      if (local_24 == -0x7fffffff) {
        FUN_01538540(&local_24);
      }
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x18))(local_20,local_1c);
      FUN_019bb7e0(local_24,local_20);
    }
  }
  return uVar1;
}

