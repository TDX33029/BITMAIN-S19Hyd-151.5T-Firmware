// FUN_0071a090 @ 0071a090 size=64 calls_out=1 calls_in=1
// strings: .debug_loc.dwo

void FUN_0071a090(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0072f260(param_2,param_3,".debug_loc.dwo",0xe);
  if ((int)uVar1 == 0) {
    uVar1 = 1;
  }
  *param_1 = 0x4f;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}

