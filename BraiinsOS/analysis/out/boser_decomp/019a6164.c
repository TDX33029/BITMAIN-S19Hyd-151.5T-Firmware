// FUN_019a6164 @ 019a6164 size=556 calls_out=11 calls_in=2
// strings: 

void FUN_019a6164(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined2 local_1c4;
  uint local_1c0;
  undefined4 *local_1bc;
  undefined4 *local_1b4;
  int local_1b0 [12];
  int local_180;
  int local_17c;
  int local_2c;
  undefined4 local_28;
  
  local_1cc = 0x1b6;
  local_1c8 = 1;
  local_1b4 = &local_1d0;
  local_1d0 = 0;
  local_1c4 = 0;
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(local_1b0,param_2,param_3);
    *(undefined1 *)((int)local_1b0 + param_3) = 0;
    FUN_012fbc58(&local_2c,local_1b0,param_3 + 1);
    if (local_2c == 1) {
      local_1c0 = 2;
      local_1bc = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_1c0,local_28,&local_1d0);
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
  uVar3 = 0;
  FUN_01bed93e(local_1b0,0,0x68);
  iVar2 = FUN_01bf05c2(puVar1,local_1b0);
  if (iVar2 == -1) {
    FUN_01be3244();
    iVar2 = 1;
    local_180 = 0;
  }
  else {
    if (local_17c != 0) {
      local_180 = -1;
    }
    if (local_180 < 0) {
LAB_019a6278:
      *param_1 = -0x80000000;
      *(undefined2 *)(param_1 + 1) = 0x2601;
      goto LAB_019a633c;
    }
    if (local_180 == 0) {
      local_180 = 0;
      uVar3 = 1;
      iVar2 = 1;
    }
    else {
      uVar3 = 1;
      iVar2 = FUN_01298504(local_180,1);
      if (iVar2 == 0) goto LAB_019a6278;
    }
  }
  local_1b0[2] = 0;
  local_1b0[0] = local_180;
  local_1b0[1] = iVar2;
  FUN_019a5bc8(&local_1d0,puVar1,local_1b0,uVar3,local_180);
  if ((char)local_1d0 == '\x04') {
    *param_1 = local_1b0[0];
    param_1[1] = local_1b0[1];
    param_1[2] = local_1b0[2];
  }
  else {
    *(char *)(param_1 + 1) = (char)local_1d0;
    *(undefined1 *)((int)param_1 + 7) = local_1d0._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_1d0._1_2_;
    param_1[2] = local_1cc;
    *param_1 = -0x80000000;
    if (local_1b0[0] != 0) {
      thunk_FUN_01be4678(local_1b0[1]);
    }
  }
LAB_019a633c:
  FUN_01bf01d6(puVar1);
  return;
}

