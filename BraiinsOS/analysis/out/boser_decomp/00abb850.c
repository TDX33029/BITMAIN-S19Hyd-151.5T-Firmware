// FUN_00abb850 @ 00abb850 size=200 calls_out=4 calls_in=1
// strings: 

void FUN_00abb850(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 extraout_r1;
  short local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined1 *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0094f574(&local_20);
  if ((char)local_20 != '\x01') {
    uVar2 = (uint)local_20 >> 8 & 0xff;
    if (uVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00abb8f4;
    }
    if (uVar2 == 1) {
      FUN_009c98e8(&local_20,param_2);
      if (local_20 != (undefined1 *)0x1) {
        FUN_00736b58(&local_28,extraout_r1,local_18,local_14);
        if (local_28 != 1) {
          param_1[2] = local_26;
          param_1[1] = 1;
          uVar1 = 0;
          goto LAB_00abb8f4;
        }
        local_1c = local_24;
      }
    }
    else {
      local_20 = &DAT_80000004;
      local_1c = uVar2;
      local_1c = FUN_0073696c(&local_20);
    }
  }
  *(uint *)(param_1 + 2) = local_1c;
  uVar1 = 1;
LAB_00abb8f4:
  *param_1 = uVar1;
  return;
}

