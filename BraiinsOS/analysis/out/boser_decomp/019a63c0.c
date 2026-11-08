// FUN_019a63c0 @ 019a63c0 size=460 calls_out=8 calls_in=6
// strings: 

void FUN_019a63c0(uint *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 *local_1d0;
  undefined2 local_1cc;
  uint local_1c8;
  undefined4 *local_1c4;
  undefined1 *local_1bc;
  uint local_1b8 [97];
  int local_34;
  undefined4 local_30;
  
  local_1bc = (undefined1 *)&local_1d8;
  local_1d4 = 0x1b6;
  local_1d0 = &LAB_01000100;
  local_1cc = 1;
  local_1d8 = 0;
  if (param_3 >> 7 < 3) {
    local_1bc = (undefined1 *)&local_1d8;
    FUN_01bed4e2(local_1b8,param_2,param_3);
    *(undefined1 *)((int)local_1b8 + param_3) = 0;
    FUN_012fbc58(&local_34,local_1b8,param_3 + 1);
    if (local_34 == 1) {
      local_1c8 = 2;
      local_1c4 = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_1c8,local_30,&local_1d8);
    }
  }
  else {
    FUN_019a0974(&local_1c8,param_2,param_3,&local_1bc);
  }
  puVar1 = local_1c4;
  if (((char)local_1c8 != '\x04') && ((local_1c8 & 0xff) != 4)) {
    *(char *)param_1 = (char)local_1c8;
    param_1[1] = (uint)local_1c4;
    *(char *)((int)param_1 + 3) = (char)(local_1c8 >> 0x18);
    *(short *)((int)param_1 + 1) = (short)(local_1c8 >> 8);
    return;
  }
  if (param_5 != 0) {
    puVar4 = &DAT_01d2e7c8;
    do {
      while (uVar3 = FUN_01bf053e(puVar1,param_4,param_5), uVar3 == 0xffffffff) {
        puVar2 = (uint *)FUN_01be3244();
        local_1b8[0]._0_1_ = 0;
        local_1b8[1] = *puVar2;
        if (*puVar2 != 4) {
          puVar4 = local_1b8;
LAB_019a654c:
          uVar3 = puVar4[1];
          *param_1 = *puVar4;
          param_1[1] = uVar3;
          goto LAB_019a6554;
        }
        if (param_5 == 0) goto LAB_019a651c;
      }
      local_1b8[1] = uVar3;
      local_1b8[0]._0_1_ = 4;
      if (uVar3 == 0) goto LAB_019a654c;
      if (param_5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar3,param_5,param_5,&DAT_01d27754);
      }
      param_4 = param_4 + uVar3;
      param_5 = param_5 - uVar3;
    } while (param_5 != 0);
  }
LAB_019a651c:
  *(undefined1 *)param_1 = 4;
LAB_019a6554:
  FUN_01bf01d6(puVar1);
  return;
}

