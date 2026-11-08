// FUN_00fb1b5c @ 00fb1b5c size=872 calls_out=4 calls_in=7
// strings: assertion failed: !buf.is_empty() | assertion failed: buf[0] > b'0'

void FUN_00fb1b5c(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined2 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  short in_r12;
  char *pcVar8;
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
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  short local_38;
  undefined1 local_36;
  byte *local_30;
  int local_2c;
  short local_28;
  
  if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
    local_50 = param_1 << 1;
    local_4c = (param_2 & 0xfffff) << 1 | param_1 >> 0x1f;
    if (!(param_1 != 0 || (param_2 & 0xfffff) != 0)) goto LAB_00fb1be8;
LAB_00fb1b9c:
    local_40 = param_2 & 0x7fffffff;
    local_3c = 4;
    if (local_40 < 0x100000) {
      local_3c = 3;
    }
    if (0x7fefffff < local_40) {
      uVar5 = 2;
      goto LAB_00fb1c84;
    }
  }
  else {
    local_4c = param_2 & 0xfffff | 0x100000;
    local_50 = param_1;
    if (!(param_1 == 0 && (param_2 & 0xfffff) == 0)) goto LAB_00fb1b9c;
LAB_00fb1be8:
    local_3c = 4;
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      local_3c = 2;
    }
    local_40 = param_1 | param_2 & 0x7fffffff ^ 0x7ff00000;
    if (local_40 == 0) {
      uVar5 = 3;
      goto LAB_00fb1c84;
    }
  }
  if (local_3c == 2) {
    uVar5 = 4;
    local_3c = 2;
  }
  else {
    uVar5 = local_50 & 1;
    uVar1 = (ushort)((param_2 & 0x7fffffff) >> 0x10);
    if (local_3c == 3) {
      in_r12 = (uVar1 >> 4) - 0x433;
    }
    else {
      if (local_50 == 0 && local_4c == 0x100000) {
        in_r12 = (uVar1 >> 4) - 0x435;
        local_50 = 0;
        local_40 = 2;
        local_4c = 0x400000;
        uVar5 = 1;
        local_3c = 0;
        goto LAB_00fb1c84;
      }
      local_4c = local_4c << 1 | local_50 >> 0x1f;
      in_r12 = (uVar1 >> 4) - 0x434;
      local_50 = local_50 << 1;
    }
    uVar5 = uVar5 ^ 1;
    local_3c = 0;
    local_40 = 1;
  }
LAB_00fb1c84:
  local_48 = 1;
  uStack_44 = 0;
  local_36 = (undefined1)uVar5;
  local_38 = in_r12;
  if (uVar5 < 2) {
    FUN_00facfa0(&local_60,&local_50,auStack_b9);
    pbVar7 = &DAT_0040f592;
    pbVar6 = (byte *)0x1;
    if ((int)param_2 < 0) {
      pbVar7 = &DAT_00410f51;
      pbVar6 = &DAT_00410f51;
    }
    param_2 = param_2 >> 0x1f;
    if (param_4 != 0) {
      param_2 = 1;
      pbVar6 = pbVar7;
    }
    if (local_60 == (byte *)0x0) {
      FUN_00fadeb4(&local_30,&local_50,auStack_b9);
      local_a4 = local_30;
    }
    else {
      local_a4 = local_60;
      local_2c = local_5c;
      local_28 = (short)local_58;
    }
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: !buf.is_empty()",0x21,&DAT_01880f1c);
    }
    if (*local_a4 < 0x31) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: buf[0] > b\'0\'",0x1f,&DAT_01880f2c);
    }
    uVar2 = 1;
    local_a0 = 1;
    if (local_2c + -1 == 0) {
      puVar4 = local_9c;
      local_54 = 3;
    }
    else {
      local_8c = local_a4 + 1;
      puVar4 = local_84;
      local_90 = 2;
      local_54 = 5;
      local_94 = 1;
      local_9c[0] = 2;
      local_98 = &DAT_00418eb7;
      local_88 = local_2c + -1;
    }
    sVar3 = local_28 + -1;
    if (local_28 < 1) {
      sVar3 = 1 - local_28;
    }
    pcVar8 = "e";
    puVar4[6] = 1;
    if (local_28 < 1) {
      uVar2 = 2;
      pcVar8 = "e-";
    }
    *puVar4 = 2;
    puVar4[7] = sVar3;
    *(char **)(puVar4 + 2) = pcVar8;
    *(undefined4 *)(puVar4 + 4) = uVar2;
  }
  else if (uVar5 == 2) {
    local_a0 = 3;
    local_a4 = (byte *)0x40e9cc;
    pbVar6 = (byte *)0x1;
    param_2 = 0;
    local_54 = 1;
  }
  else {
    pbVar7 = &DAT_0040f592;
    pbVar6 = (byte *)0x1;
    if ((int)param_2 < 0) {
      pbVar7 = &DAT_00410f51;
      pbVar6 = &DAT_00410f51;
    }
    param_2 = param_2 >> 0x1f;
    local_54 = 1;
    if (param_4 != 0) {
      param_2 = 1;
      pbVar6 = pbVar7;
    }
    if (uVar5 == 4) {
      local_a4 = (byte *)0x3625c2;
    }
    else {
      local_a4 = &DAT_00414412;
    }
    local_a0 = 3;
  }
  local_a8[0] = 2;
  local_60 = pbVar6;
  local_5c = param_2;
  local_58 = local_a8;
  FUN_00fac518(param_3,&local_60);
  return;
}

