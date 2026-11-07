// FUN_0094fefc @ 0094fefc size=348 calls_out=5 calls_in=1
// strings: 

void FUN_0094fefc(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r3;
  uint uVar3;
  undefined4 extraout_r12;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2[1] == 0) {
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  uVar3 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_0094f574(&local_28,uVar3);
  if ((char)local_28 != '\x01') {
    uVar1 = (uint)local_28 >> 8 & 0xff;
    if (uVar1 == 0) {
      local_14 = 0;
      uVar2 = 0;
      local_18 = extraout_r1;
      local_20 = extraout_r3;
      local_1c = extraout_r12;
LAB_0094ffdc:
      *param_1 = uVar2;
      param_1[1] = 0;
      param_1[2] = local_20;
      param_1[3] = local_1c;
      param_1[4] = local_18;
      param_1[5] = local_14;
      param_1[6] = uVar3;
      return;
    }
    if (uVar1 == 1) {
      local_2c = 2;
      local_30 = uVar3;
      FUN_0094e544(&local_28,&local_30);
      uVar3 = local_24;
      if (local_28 != (undefined1 *)0x2) {
        if (((uint)local_28 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          if (local_2c != 0) {
            FUN_009c9b04(&local_28,local_30);
            if (local_28 == (undefined1 *)0x0) {
              uVar2 = 1;
              goto LAB_0094ffdc;
            }
            goto LAB_0095000c;
          }
          uVar2 = 1;
        }
        local_24 = FUN_00a9d070(uVar2,&DAT_01c0c3b8,&DAT_01d064b8);
      }
    }
    else {
      local_28 = &DAT_80000004;
      local_24 = uVar1;
      local_24 = FUN_0073696c(&local_28);
    }
  }
LAB_0095000c:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_24;
  return;
}

