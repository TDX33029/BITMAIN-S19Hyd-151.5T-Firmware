// FUN_00abba78 @ 00abba78 size=196 calls_out=3 calls_in=2
// strings: 

void FUN_00abba78(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *local_20;
  uint local_1c;
  undefined8 local_18;
  
  FUN_0094f574(&local_20);
  if ((char)local_20 != '\x01') {
    uVar1 = (uint)local_20 >> 8 & 0xff;
    if (uVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if (uVar1 == 1) {
      FUN_00947370(&local_20,param_2);
      if (local_20 == (undefined1 *)0x1) {
        param_1[2] = local_1c;
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
        *(undefined8 *)(param_1 + 2) = local_18;
      }
      *param_1 = uVar2;
      param_1[1] = 0;
      return;
    }
    local_20 = &DAT_80000004;
    local_1c = uVar1;
    local_1c = FUN_0073696c(&local_20);
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = local_1c;
  return;
}

