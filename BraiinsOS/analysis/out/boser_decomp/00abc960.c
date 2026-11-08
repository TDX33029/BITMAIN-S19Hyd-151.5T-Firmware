// FUN_00abc960 @ 00abc960 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00abc960(uint *param_1)

{
  uint uVar1;
  
  if ((undefined1 *)param_1[0x18] == &DAT_3b9aca00) {
    return;
  }
  uVar1 = 0xf;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0x17) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  if (uVar1 != 0xf) {
    if (uVar1 != 0xe) {
      return;
    }
    param_1 = param_1 + 1;
  }
  FUN_00b9c308(param_1);
  return;
}

