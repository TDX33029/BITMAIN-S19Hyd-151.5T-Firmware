// FUN_01301840 @ 01301840 size=588 calls_out=4 calls_in=0
// strings: 

void FUN_01301840(uint param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 unaff_r10;
  short in_r12;
  undefined4 unaff_lr;
  undefined1 auStack_99 [17];
  char *local_88;
  char *local_84;
  uint local_80;
  char *local_58;
  char *local_54;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  short local_30;
  undefined1 local_2e;
  
  uVar3 = 3;
  local_48 = param_1 & 0x7fffff;
  if (local_48 == 0) {
    uVar3 = 2;
  }
  if ((param_1 & 0x7f800000) != 0) {
    uVar3 = 4;
  }
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    uVar3 = local_48 == 0;
  }
  local_48 = local_48 | 0x800000;
  if ((param_1 & 0x7fffffff) >> 0x17 == 0) {
    local_48 = (param_1 & 0x7fffff) << 1;
  }
  uVar6 = local_48 & 1;
  uVar2 = 2;
  uVar1 = (ushort)((param_1 & 0x7fffffff) >> 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 1:
    uVar2 = 3;
    break;
  case 2:
    uVar2 = 4;
    break;
  case 3:
    in_r12 = (uVar1 >> 7) - 0x96;
    goto LAB_01301914;
  case 4:
    if (local_48 == 0x800000) {
      in_r12 = (uVar1 >> 7) - 0x98;
      unaff_r10 = 0;
      unaff_lr = 2;
      local_48 = 0x2000000;
      uVar2 = 1;
      break;
    }
    local_48 = local_48 << 1;
    in_r12 = (uVar1 >> 7) - 0x97;
LAB_01301914:
    uVar2 = uVar6 ^ 1;
    unaff_r10 = 0;
    unaff_lr = 1;
  }
  uVar6 = 0;
  local_40 = 1;
  uStack_3c = 0;
  local_2e = (undefined1)uVar2;
  pcVar4 = (char *)0x1;
  local_44 = unaff_r10;
  uStack_38 = unaff_lr;
  local_34 = unaff_r10;
  local_30 = in_r12;
  if (uVar2 < 2) {
    FUN_012fe028(&local_88,&local_48,auStack_99);
    uVar6 = param_1 >> 0x1f;
    pcVar5 = "+";
    if ((int)param_1 < 0) {
      pcVar5 = "-";
      pcVar4 = "-";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar4 = pcVar5;
    }
    if (local_88 == (char *)0x0) {
      FUN_012fea44(&local_58,&local_48,auStack_99);
    }
    else {
      local_58 = local_88;
      local_54 = local_84;
      local_50._0_4_ = local_80;
    }
    local_50 = FUN_01300048(local_58,local_54,(uint)local_50 & 0xffff,0,&local_88);
  }
  else if (uVar2 == 2) {
    local_80 = 3;
    local_88 = (char *)CONCAT22(local_88._2_2_,2);
    local_84 = "NaN";
    pcVar4 = (char *)0x1;
    local_50 = CONCAT44(1,&local_88);
  }
  else {
    uVar6 = param_1 >> 0x1f;
    local_88 = (char *)CONCAT22(local_88._2_2_,2);
    pcVar5 = "+";
    if ((int)param_1 < 0) {
      pcVar5 = "-";
      pcVar4 = "-";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar4 = pcVar5;
    }
    if (uVar2 == 4) {
      local_80 = 1;
      local_84 = "0";
    }
    else {
      local_80 = 3;
      local_84 = "inf";
    }
    local_50 = CONCAT44(1,&local_88);
  }
  local_58 = pcVar4;
  local_54 = (char *)uVar6;
  FUN_012fd0c0(param_2,&local_58);
  return;
}

