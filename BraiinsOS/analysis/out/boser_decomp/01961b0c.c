// FUN_01961b0c @ 01961b0c size=824 calls_out=7 calls_in=2
// strings: 

void FUN_01961b0c(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint local_54;
  int local_50;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  puVar11 = param_1 + 1;
  if (param_3 == 0) {
    *puVar11 = 0;
    param_1[2] = 0;
LAB_01961b88:
    *param_1 = 0;
    return;
  }
  FUN_01962110(&local_38,param_2,param_3,0);
  uVar4 = local_34;
  uVar1 = local_38;
  if (local_30 == 0) {
    *param_1 = 0;
    *puVar11 = local_38;
    param_1[2] = local_34;
    return;
  }
  FUN_01962520(&local_38,local_30,local_2c,0);
  if (local_38 == 1) {
    *puVar11 = local_34;
    param_1[2] = local_30;
    *param_1 = 0;
    return;
  }
  FUN_01962110(&local_38,local_34,local_30,1);
  uVar5 = local_34;
  uVar2 = local_38;
  if (local_30 == 0) {
    *puVar11 = local_38;
    param_1[2] = local_34;
    goto LAB_01961b88;
  }
  FUN_01962520(&local_38,local_30,local_2c,1);
  if (local_38 == 1) {
    *puVar11 = local_34;
    param_1[2] = local_30;
    goto LAB_01961b88;
  }
  FUN_01962110(&local_38,local_34,local_30,2);
  iVar10 = local_2c;
  uVar9 = local_30;
  uVar6 = local_34;
  uVar3 = local_38;
  if (local_30 == 0) {
    *puVar11 = local_38;
    *param_1 = 0;
    param_1[2] = local_34;
    return;
  }
  if (local_2c == 0) {
    param_1[8] = local_38;
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    param_1[4] = uVar1;
    param_1[5] = uVar4;
    param_1[6] = uVar2;
    param_1[7] = uVar5;
    param_1[9] = local_34;
    return;
  }
  uVar12 = FUN_0196183c(local_30,local_2c,0x2d);
  local_40 = 0xffffffff;
  if ((int)uVar12 == 0) {
    local_50 = 2;
    uVar8 = 0xffffffff;
    local_3c = 0xffffffff;
  }
  else {
    FUN_019622b8(&local_38,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    if (local_38 == 0) {
      *puVar11 = local_34;
      param_1[2] = local_30;
      goto LAB_01961b88;
    }
    local_50 = 3;
    local_3c = local_38;
    uVar8 = local_34;
    uVar9 = local_30;
    iVar10 = local_2c;
    if (local_38 == 0xffffffff && local_34 == 0xffffffff) {
      *puVar11 = 0x307;
      param_1[2] = 0;
      *param_1 = 0;
      uVar8 = 0xffffffff;
      goto LAB_01961e38;
    }
  }
  uVar12 = FUN_0196183c(uVar9,iVar10,0x2b);
  if ((int)uVar12 == 0) {
    local_54 = 0xffffffff;
LAB_01961d7c:
    local_34 = uVar9 + iVar10;
    puVar7 = (undefined1 *)FUN_00734c78(&local_38);
    if (puVar7 == &DAT_00110000) {
      *param_1 = local_3c;
      param_1[1] = uVar8;
      param_1[2] = local_40;
      param_1[3] = local_54;
      param_1[4] = uVar1;
      param_1[5] = uVar4;
      param_1[6] = uVar2;
      param_1[7] = uVar5;
      param_1[8] = uVar3;
      param_1[9] = uVar6;
      return;
    }
    *puVar11 = local_50 << 8 | 3;
    param_1[2] = (uint)puVar7;
    *param_1 = 0;
LAB_01961e2c:
    FUN_01961a9c(local_40,local_54);
  }
  else {
    FUN_01962300(&local_38,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    if (local_38 != 0) {
      if (local_38 != 0xffffffff || local_34 != 0xffffffff) {
        local_54 = local_34;
        local_40 = local_38;
        local_50 = 4;
        uVar9 = local_30;
        iVar10 = local_2c;
        goto LAB_01961d7c;
      }
      *puVar11 = 0x407;
      param_1[2] = 0;
      *param_1 = 0;
      local_54 = 0xffffffff;
      local_40 = local_38;
      goto LAB_01961e2c;
    }
    *puVar11 = local_34;
    param_1[2] = local_30;
    *param_1 = 0;
  }
  local_38 = local_3c;
LAB_01961e38:
  FUN_01961a9c(local_38,uVar8);
  return;
}

