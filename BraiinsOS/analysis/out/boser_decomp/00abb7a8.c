// FUN_00abb7a8 @ 00abb7a8 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_00abb7a8(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *local_28;
  uint local_24;
  undefined8 local_20;
  
  FUN_0094f574(&local_28);
  if ((char)local_28 != '\x01') {
    uVar1 = (uint)local_28 >> 8 & 0xff;
    if (uVar1 == 0) {
      uVar2 = 0;
      goto LAB_00abb834;
    }
    if (uVar1 == 1) {
      FUN_00947370(&local_28,param_2);
      if (local_28 != (undefined1 *)0x1) {
        uVar2 = 1;
        *(undefined8 *)(param_1 + 2) = local_20;
        goto LAB_00abb834;
      }
    }
    else {
      local_28 = &DAT_80000004;
      local_24 = uVar1;
      local_24 = FUN_0073696c(&local_28);
    }
  }
  param_1[2] = local_24;
  uVar2 = 2;
LAB_00abb834:
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

