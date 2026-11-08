// FUN_01bc3cc4 @ 01bc3cc4 size=1568 calls_out=6 calls_in=0
// strings: 

int FUN_01bc3cc4(int *param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  int local_70;
  int local_6c;
  uint local_64;
  uint *local_58;
  uint *local_54;
  uint local_50;
  uint local_30;
  int local_2c;
  
  uVar16 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar5 = *(int *)(param_2 + 4);
  if (param_4 < (int *)(iVar5 + uVar16)) {
    iVar20 = 0;
    goto LAB_01bc4128;
  }
  uVar18 = (int)param_4 - iVar5;
  for (; uVar16 < uVar18; uVar16 = uVar16 + iVar20) {
    iVar20 = FUN_01bc0b90(param_2,iVar5 + uVar16,param_5,uVar18,3,1);
  }
  *(uint *)(param_2 + 0x1c) = uVar18;
  uVar16 = 0xfff;
  if (*(uint *)(param_2 + 0xcc) < 0xfff) {
    uVar16 = *(uint *)(param_2 + 0xcc);
  }
  iVar21 = 0;
  uVar1 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
  iVar6 = *(int *)(param_2 + 0x5c);
  uVar17 = *(uint *)(iVar6 + uVar1 * 4);
  iVar7 = *(int *)(param_2 + 100);
  uVar8 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
  iVar9 = *(int *)(param_2 + 8);
  uVar10 = *(uint *)(param_2 + 0xc);
  iVar11 = iVar9 + uVar10;
  iVar12 = iVar5 + uVar10;
  if (uVar8 < uVar18) {
    uVar13 = uVar18 - uVar8;
  }
  else {
    uVar13 = 0;
  }
  uVar2 = FUN_01bc079c(param_2,uVar18,*(undefined4 *)(param_2 + 0xb8));
  uVar14 = *(uint *)(param_2 + 0xc4);
  local_50 = param_8 - 1;
  for (uVar3 = param_7; uVar3 < param_7 + 3; uVar3 = uVar3 + 1) {
    if (uVar3 == 3) {
      iVar20 = *param_6 + -1;
    }
    else {
      iVar20 = param_6[uVar3];
    }
    uVar4 = uVar18 - iVar20;
    if (iVar20 - 1U < uVar18 - uVar10) {
      bVar22 = uVar2 == uVar4;
      if (uVar2 <= uVar4) {
        bVar22 = *(int *)((int)param_4 - iVar20) * 0x100 == *param_4 * 0x100;
      }
      if (bVar22) {
        iVar20 = FUN_01bc0a2c((int)param_4 + 3,(int)param_4 + (3 - iVar20),param_5);
LAB_01bc3f94:
        uVar4 = iVar20 + 3;
        if (local_50 < uVar4) {
          param_1[iVar21 * 2] = (1 - param_7) + uVar3;
          iVar20 = iVar21 + 1;
          param_1[iVar21 * 2 + 1] = uVar4;
          if (param_5 == (int)param_4 + uVar4 || uVar16 < uVar4) goto LAB_01bc4128;
          iVar21 = iVar20;
          local_50 = uVar4;
        }
      }
    }
    else if ((iVar20 - 1U < uVar18 - uVar2 && 2 < ((uVar10 - 1) - uVar18) + iVar20) &&
            (*(int *)(iVar9 + uVar4) * 0x100 == *param_4 * 0x100)) {
      iVar20 = FUN_01bc0b18((int)param_4 + 3,iVar9 + uVar4 + 3,param_5,iVar11,iVar12);
      goto LAB_01bc3f94;
    }
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (local_50 < 3) {
    uVar3 = FUN_01bc07e0(param_2,param_3,param_4);
    bVar22 = uVar3 <= uVar2;
    if (uVar2 <= uVar3) {
      bVar22 = 0x3ffff < uVar18 - uVar3;
    }
    if (bVar22) goto LAB_01bc4088;
    if (uVar3 < uVar10) {
      uVar4 = FUN_01bc0b18(param_4,iVar9 + uVar3,param_5,iVar11,iVar12);
    }
    else {
      uVar4 = FUN_01bc0a2c(param_4,iVar5 + uVar3,param_5);
    }
    if (uVar4 < 3) goto LAB_01bc4088;
    *param_1 = (uVar18 - uVar3) + 3;
    param_1[1] = uVar4;
    if (param_5 == (int)param_4 + uVar4 || uVar16 < uVar4) {
      iVar20 = 1;
      *(uint *)(param_2 + 0x1c) = uVar18 + 1;
      goto LAB_01bc4128;
    }
    iVar21 = 1;
  }
  else {
LAB_01bc4088:
    uVar4 = local_50;
  }
  local_54 = (uint *)(iVar7 + (uVar18 & uVar8) * 8);
  local_58 = (uint *)(iVar7 + (uVar18 & uVar8) * 8 + 4);
  local_70 = uVar18 + 9;
  *(uint *)(iVar6 + uVar1 * 4) = uVar18;
  local_64 = 0;
  local_50 = 0;
  for (local_6c = 1 << (uVar14 & 0xff); iVar20 = iVar21, uVar2 <= uVar17 && local_6c != 0;
      local_6c = local_6c + -1) {
    if (local_50 < local_64) {
      uVar16 = local_50;
    }
    else {
      uVar16 = local_64;
    }
    if (uVar17 + uVar16 < uVar10) {
      iVar19 = iVar9 + uVar17;
      iVar6 = FUN_01bc0b18((int)param_4 + uVar16,iVar19 + uVar16,param_5,iVar11,iVar12);
      uVar16 = uVar16 + iVar6;
      if (uVar10 <= uVar17 + uVar16) {
        iVar19 = iVar5 + uVar17;
      }
    }
    else {
      iVar19 = iVar5 + uVar17;
      iVar6 = FUN_01bc0a2c((int)param_4 + uVar16,iVar19 + uVar16,param_5);
      uVar16 = uVar16 + iVar6;
    }
    if (uVar4 < uVar16) {
      if (local_70 - uVar17 < uVar16) {
        local_70 = uVar17 + uVar16;
      }
      param_1[iVar21 * 2] = (uVar18 + 3) - uVar17;
      iVar20 = iVar21 + 1;
      param_1[iVar21 * 2 + 1] = uVar16;
      if (param_5 == (int)param_4 + uVar16 || 0x1000 < uVar16) break;
      uVar4 = uVar16;
    }
    puVar15 = (uint *)(iVar7 + (uVar8 & uVar17) * 8);
    if (*(byte *)(iVar19 + uVar16) < *(byte *)((int)param_4 + uVar16)) {
      *local_54 = uVar17;
      if (uVar17 <= uVar13) {
        local_54 = &local_30;
        break;
      }
      uVar17 = puVar15[1];
      local_54 = puVar15 + 1;
      local_50 = uVar16;
    }
    else {
      *local_58 = uVar17;
      if (uVar17 <= uVar13) {
        local_58 = &local_30;
        break;
      }
      uVar17 = *(uint *)(iVar7 + (uVar8 & uVar17) * 8);
      local_64 = uVar16;
      local_58 = puVar15;
    }
    iVar21 = iVar20;
  }
  *local_58 = 0;
  *local_54 = 0;
  *(int *)(param_2 + 0x1c) = local_70 + -8;
LAB_01bc4128:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar20;
}

