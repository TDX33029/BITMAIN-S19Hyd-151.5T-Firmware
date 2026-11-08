// FUN_0130149c @ 0130149c size=864 calls_out=5 calls_in=0
// strings: assertion failed: buf.len() >= maxlen

void FUN_0130149c(uint param_1,undefined4 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_r12;
  short unaff_lr;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_488 [1024];
  char *local_88;
  char *local_84;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_78;
  char *local_58;
  char *local_54;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  short local_30;
  undefined1 local_2e;
  
  local_44 = 3;
  local_48 = param_1 & 0x7fffff;
  if (local_48 == 0) {
    local_44 = 2;
  }
  if ((param_1 & 0x7f800000) != 0) {
    local_44 = 4;
  }
  uVar6 = param_4 & 0xffff;
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    local_44 = (uint)(local_48 == 0);
  }
  local_48 = local_48 | 0x800000;
  if ((param_1 & 0x7fffffff) >> 0x17 == 0) {
    local_48 = (param_1 & 0x7fffff) << 1;
  }
  uVar9 = local_48 & 1;
  uVar3 = 2;
  uVar1 = (ushort)((param_1 & 0x7fffffff) >> 0x10);
  local_30 = unaff_lr;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_44) {
  case 1:
    uVar3 = 3;
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    local_30 = (uVar1 >> 7) - 0x96;
    goto LAB_01301580;
  case 4:
    if (local_48 == 0x800000) {
      local_30 = (uVar1 >> 7) - 0x98;
      local_44 = 0;
      in_r12 = 2;
      local_48 = 0x2000000;
      uVar3 = 1;
      break;
    }
    local_48 = local_48 << 1;
    local_30 = (uVar1 >> 7) - 0x97;
LAB_01301580:
    uVar3 = uVar9 ^ 1;
    local_44 = 0;
    in_r12 = 1;
  }
  local_2e = (undefined1)uVar3;
  local_40 = 1;
  uStack_3c = 0;
  uStack_38 = in_r12;
  local_34 = local_44;
  if (uVar3 < 2) {
    iVar7 = 5;
    if (local_30 < 0) {
      iVar7 = -0xc;
    }
    uVar3 = iVar7 * local_30;
    pcVar5 = "+";
    pcVar4 = (char *)0x1;
    if ((int)param_1 < 0) {
      pcVar5 = "-";
      pcVar4 = "-";
    }
    uVar9 = param_1 >> 0x1f;
    if (param_3 != 0) {
      uVar9 = 1;
      pcVar4 = pcVar5;
    }
    if (0x3ebf < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: buf.len() >= maxlen",0x25,&DAT_01ce4770);
    }
    iVar8 = (uVar3 >> 4) + 0x15;
    puVar10 = auStack_488;
    iVar7 = -0x8000;
    if ((uint)(int)(short)param_4 < 0x80000000) {
      iVar7 = -param_4;
    }
    iVar11 = iVar8;
    iVar12 = iVar7;
    FUN_013001c0(&local_88);
    if (local_88 == (char *)0x0) {
      FUN_013006d0(&local_58,&local_48,auStack_488,iVar8,(int)(short)iVar7,puVar10,iVar11,iVar12);
    }
    else {
      local_58 = local_88;
      local_54 = local_84;
      local_50._0_4_ = local_80;
    }
    if ((int)(short)iVar7 < (int)(short)local_50) {
      local_50 = FUN_01300048(local_58,local_54,(int)(short)local_50,uVar6,&local_88);
    }
    else {
      local_80 = 2;
      local_88 = (char *)CONCAT22(local_88._2_2_,2);
      if ((param_4 & 0xffff) == 0) {
        local_80 = 1;
        local_84 = "0";
      }
      else {
        local_84 = "0.";
        local_7c = 0;
        local_78 = uVar6;
      }
      local_50 = CONCAT44(local_80,&local_88);
    }
  }
  else if (uVar3 == 2) {
    local_80 = 3;
    local_88 = (char *)CONCAT22(local_88._2_2_,2);
    local_84 = "NaN";
    pcVar4 = (char *)0x1;
    uVar9 = 0;
    local_50 = CONCAT44(1,&local_88);
  }
  else {
    uVar9 = param_1 >> 0x1f;
    uVar2 = 1;
    pcVar5 = "+";
    pcVar4 = (char *)0x1;
    if ((int)param_1 < 0) {
      pcVar5 = "-";
      pcVar4 = "-";
    }
    if (param_3 != 0) {
      uVar9 = 1;
      pcVar4 = pcVar5;
    }
    if (uVar3 == 4) {
      uVar2 = 2;
      if ((param_4 & 0xffff) == 0) {
        uVar2 = 1;
        local_80 = 1;
        local_84 = "0";
      }
      else {
        local_84 = "0.";
        local_7c = 0;
        local_80 = 2;
        local_78 = uVar6;
      }
    }
    else {
      local_80 = 3;
      local_84 = "inf";
    }
    local_88 = (char *)CONCAT22(local_88._2_2_,2);
    local_50 = CONCAT44(uVar2,&local_88);
  }
  local_58 = pcVar4;
  local_54 = (char *)uVar9;
  FUN_012fd0c0(param_2,&local_58);
  return;
}

