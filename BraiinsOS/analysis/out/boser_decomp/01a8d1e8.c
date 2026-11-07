// FUN_01a8d1e8 @ 01a8d1e8 size=56 calls_out=1 calls_in=5
// strings: 

void FUN_01a8d1e8(undefined4 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_80000005) {
    return;
  }
  uVar2 = 2;
  if ((int)puVar1 < 0) {
    uVar2 = (uint)puVar1 ^ 0x80000000;
  }
  switch(uVar2) {
  default:
    param_1 = param_1 + 1;
    break;
  case 2:
    break;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

