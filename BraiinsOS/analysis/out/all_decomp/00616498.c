// FUN_00616498 @ 00616498 size=64 calls_out=1 calls_in=1
// strings: .debug_rnglists.dwo

void FUN_00616498(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0062d74c(param_2,param_3,".debug_rnglists.dwo",0x13);
  if ((int)uVar1 == 0) {
    uVar1 = 1;
  }
  *param_1 = 0x4f;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}

