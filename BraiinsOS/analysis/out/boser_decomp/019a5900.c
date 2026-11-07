// FUN_019a5900 @ 019a5900 size=660 calls_out=12 calls_in=18
// strings: 

void FUN_019a5900(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  undefined2 local_1c4;
  uint local_1c0;
  undefined4 *local_1bc;
  int *local_1b4;
  int local_1b0 [12];
  int local_180;
  int local_17c;
  uint local_30;
  uint local_2c;
  
  iVar5 = 0;
  local_1cc = 0x1b6;
  local_1c8 = 1;
  local_1b4 = &local_1d0;
  local_1d0 = 0;
  local_1c4 = 0;
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(local_1b0,param_2,param_3);
    *(undefined1 *)((int)local_1b0 + param_3) = 0;
    FUN_012fbc58(&local_30,local_1b0,param_3 + 1);
    if (local_30 == 1) {
      local_1c0 = 2;
      local_1bc = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_1c0,local_2c,&local_1d0);
    }
  }
  else {
    FUN_019a0974(&local_1c0,param_2,param_3,&local_1b4);
  }
  puVar1 = local_1bc;
  if (((char)local_1c0 != '\x04') && ((local_1c0 & 0xff) != 4)) {
    *(char *)(param_1 + 1) = (char)local_1c0;
    *param_1 = -0x80000000;
    param_1[2] = (int)local_1bc;
    *(char *)((int)param_1 + 7) = (char)(local_1c0 >> 0x18);
    *(short *)((int)param_1 + 5) = (short)(local_1c0 >> 8);
    return;
  }
  uVar4 = 0;
  FUN_01bed93e(local_1b0,0,0x68);
  iVar3 = FUN_01bf05c2(puVar1,local_1b0);
  if (iVar3 == -1) {
    FUN_01be3244();
    local_1c8 = 0;
    local_1cc = 1;
    local_1d0 = 0;
  }
  else {
    local_1c8 = 0;
    iVar5 = local_180;
    if (local_17c != 0) {
      iVar5 = -1;
    }
    local_1cc = 1;
    local_1d0 = 0;
    if (iVar5 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      FUN_006646a0(local_1b0,0,1,iVar5);
      if (local_1b0[0] != 0) {
        *param_1 = -0x80000000;
        *(undefined2 *)(param_1 + 1) = 0x2601;
        goto LAB_019a5b28;
      }
      local_1cc = local_1b0[1];
      local_1d0 = iVar5;
    }
  }
  puVar6 = &local_30;
  FUN_019a5bc8(puVar6,puVar1,&local_1d0,uVar4,iVar5);
  iVar3 = local_1c8;
  iVar5 = local_1cc;
  FUN_012fbd94(local_1b0,local_1cc,local_1c8);
  if (local_1b0[0] == 0) {
LAB_019a5a9c:
    local_30 = *puVar6;
    local_2c = puVar6[1];
    uVar2 = (undefined1)local_30;
    local_1c8 = iVar3;
    if ((local_30 & 0xff) == 4) {
      *param_1 = local_1d0;
      param_1[1] = local_1cc;
      param_1[2] = iVar3;
      goto LAB_019a5b28;
    }
  }
  else {
    uVar2 = (undefined1)local_30;
    if ((local_30 & 0xff) == 4) {
      iVar3 = 0;
      puVar6 = &DAT_01d276bc;
      goto LAB_019a5a9c;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = -0x80000000;
  *(short *)((int)param_1 + 5) = (short)(local_30 >> 8);
  param_1[2] = local_2c;
  *(char *)((int)param_1 + 7) = (char)(local_30 >> 0x18);
  if (local_1d0 != 0) {
    thunk_FUN_01be4678(iVar5);
  }
LAB_019a5b28:
  FUN_01bf01d6(puVar1);
  return;
}

