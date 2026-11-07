// FUN_00fb1078 @ 00fb1078 size=792 calls_out=4 calls_in=2
// strings: assertion failed: !buf.is_empty() | assertion failed: buf[0] > b'0'

void FUN_00fb1078(uint param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 uVar8;
  short sVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined4 unaff_r10;
  short in_r12;
  undefined4 unaff_lr;
  char *pcVar12;
  undefined1 auStack_b9 [17];
  undefined2 local_a8 [2];
  byte *local_a4;
  undefined4 local_a0;
  undefined2 local_9c [2];
  undefined *local_98;
  undefined4 local_94;
  undefined2 local_90;
  byte *local_8c;
  int local_88;
  undefined2 local_84 [18];
  byte *local_60;
  uint local_5c;
  undefined2 *local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  short local_38;
  undefined1 local_36;
  byte *local_30;
  int local_2c;
  short local_28;
  
  uVar8 = 3;
  local_50 = param_1 & 0x7fffff;
  if (local_50 == 0) {
    uVar8 = 2;
  }
  if ((param_1 & 0x7f800000) != 0) {
    uVar8 = 4;
  }
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    uVar8 = local_50 == 0;
  }
  local_50 = local_50 | 0x800000;
  uVar4 = 2;
  if ((param_1 & 0x7fffffff) >> 0x17 == 0) {
    local_50 = (param_1 & 0x7fffff) << 1;
  }
  puVar10 = local_9c;
  uVar11 = local_50 & 1;
  uVar1 = (ushort)((param_1 & 0x7fffffff) >> 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case 1:
    uVar4 = 3;
    break;
  case 2:
    uVar4 = 4;
    break;
  case 3:
    in_r12 = (uVar1 >> 7) - 0x96;
    goto LAB_00fb115c;
  case 4:
    if (local_50 == 0x800000) {
      in_r12 = (uVar1 >> 7) - 0x98;
      unaff_r10 = 0;
      unaff_lr = 2;
      local_50 = 0x2000000;
      uVar4 = 1;
      break;
    }
    local_50 = local_50 << 1;
    in_r12 = (uVar1 >> 7) - 0x97;
LAB_00fb115c:
    uVar4 = uVar11 ^ 1;
    unaff_r10 = 0;
    unaff_lr = 1;
  }
  uVar11 = 0;
  local_48 = 1;
  uStack_44 = 0;
  local_36 = (undefined1)uVar4;
  local_4c = unaff_r10;
  uStack_40 = unaff_lr;
  local_3c = unaff_r10;
  local_38 = in_r12;
  if (uVar4 < 2) {
    FUN_00facfa0(&local_60,&local_50,auStack_b9);
    uVar11 = param_1 >> 0x1f;
    pbVar7 = &DAT_0040f592;
    pbVar6 = (byte *)0x1;
    if ((int)param_1 < 0) {
      pbVar7 = &DAT_00410f51;
      pbVar6 = &DAT_00410f51;
    }
    if (param_3 != 0) {
      uVar11 = 1;
      pbVar6 = pbVar7;
    }
    if (local_60 == (byte *)0x0) {
      FUN_00fadeb4(&local_30,&local_50,auStack_b9);
      local_a4 = local_30;
      sVar2 = local_28;
    }
    else {
      local_a4 = local_60;
      local_2c = local_5c;
      sVar2 = (short)local_58;
    }
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: !buf.is_empty()",0x21,&DAT_01880f1c);
    }
    if (*local_a4 < 0x31) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: buf[0] > b\'0\'",0x1f,&DAT_01880f2c);
    }
    uVar5 = 1;
    local_a0 = 1;
    if (local_2c + -1 == 0) {
      uVar3 = 3;
    }
    else {
      local_8c = local_a4 + 1;
      uVar3 = 5;
      local_90 = 2;
      local_94 = 1;
      local_9c[0] = 2;
      local_98 = &DAT_00418eb7;
      puVar10 = local_84;
      local_88 = local_2c + -1;
    }
    sVar9 = sVar2 + -1;
    if (sVar2 < 1) {
      sVar9 = 1 - sVar2;
    }
    pcVar12 = "e";
    puVar10[6] = 1;
    if (sVar2 < 1) {
      uVar5 = 2;
      pcVar12 = "e-";
    }
    *puVar10 = 2;
    puVar10[7] = sVar9;
    *(char **)(puVar10 + 2) = pcVar12;
    *(undefined4 *)(puVar10 + 4) = uVar5;
  }
  else if (uVar4 == 2) {
    local_a0 = 3;
    local_a4 = (byte *)0x40e9cc;
    pbVar6 = (byte *)0x1;
    uVar3 = 1;
  }
  else {
    uVar11 = param_1 >> 0x1f;
    uVar3 = 1;
    pbVar7 = &DAT_0040f592;
    pbVar6 = (byte *)0x1;
    if ((int)param_1 < 0) {
      pbVar7 = &DAT_00410f51;
      pbVar6 = &DAT_00410f51;
    }
    if (param_3 != 0) {
      uVar11 = 1;
      pbVar6 = pbVar7;
    }
    if (uVar4 == 4) {
      local_a4 = (byte *)0x3625c2;
    }
    else {
      local_a4 = &DAT_00414412;
    }
    local_a0 = 3;
  }
  local_a8[0] = 2;
  local_58 = local_a8;
  local_60 = pbVar6;
  local_5c = uVar11;
  local_54 = uVar3;
  FUN_00fac518(param_2,&local_60);
  return;
}

