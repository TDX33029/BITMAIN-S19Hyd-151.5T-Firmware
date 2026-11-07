// FUN_00719fec @ 00719fec size=64 calls_out=1 calls_in=1
// strings: .debug_str_offsets.dwo

void FUN_00719fec(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0072f260(param_2,param_3,".debug_str_offsets.dwo",0x16);
  if ((int)uVar1 == 0) {
    uVar1 = 1;
  }
  *param_1 = 0x4f;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}

