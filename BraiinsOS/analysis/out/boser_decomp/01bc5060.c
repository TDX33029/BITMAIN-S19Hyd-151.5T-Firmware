// FUN_01bc5060 @ 01bc5060 size=1276 calls_out=5 calls_in=0
// strings: 

int FUN_01bc5060(int *param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int local_5c;
  int local_58;
  uint *local_50;
  uint *local_4c;
  uint local_48;
  uint local_30;
  int local_2c;
  
  uVar14 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_2 + 4);
  if (param_4 < (int *)(iVar8 + uVar14)) {
    iVar15 = 0;
    goto LAB_01bc53e8;
  }
  uVar18 = (int)param_4 - iVar8;
  for (; uVar14 < uVar18; uVar14 = uVar14 + iVar15) {
    iVar15 = FUN_01bc0b90(param_2,iVar8 + uVar14,param_5,uVar18,3,0);
  }
  *(uint *)(param_2 + 0x1c) = uVar18;
  uVar14 = 0xfff;
  if (*(uint *)(param_2 + 0xcc) < 0xfff) {
    uVar14 = *(uint *)(param_2 + 0xcc);
  }
  uVar4 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
  iVar9 = *(int *)(param_2 + 0x5c);
  uVar17 = *(uint *)(iVar9 + uVar4 * 4);
  iVar10 = *(int *)(param_2 + 100);
  uVar11 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
  iVar12 = *(int *)(param_2 + 0xc);
  if (uVar11 < uVar18) {
    uVar6 = uVar18 - uVar11;
  }
  else {
    uVar6 = 0;
  }
  uVar1 = FUN_01bc079c(param_2,uVar18,*(undefined4 *)(param_2 + 0xb8));
  uVar13 = *(uint *)(param_2 + 0xc4);
  local_48 = param_8 - 1;
  iVar16 = 0;
  for (uVar2 = param_7; uVar2 < param_7 + 3; uVar2 = uVar2 + 1) {
    if (uVar2 == 3) {
      iVar5 = *param_6 + -1;
    }
    else {
      iVar5 = param_6[uVar2];
    }
    iVar15 = iVar16;
    if (iVar5 - 1U < uVar18 - iVar12) {
      bVar19 = uVar1 == uVar18 - iVar5;
      if (uVar1 <= uVar18 - iVar5) {
        bVar19 = *(int *)((int)param_4 - iVar5) * 0x100 == *param_4 * 0x100;
      }
      if (bVar19) {
        iVar5 = FUN_01bc0a2c((int)param_4 + 3,(int)param_4 + (3 - iVar5),param_5);
        uVar3 = iVar5 + 3;
        if (local_48 < uVar3) {
          param_1[iVar16 * 2] = (1 - param_7) + uVar2;
          iVar15 = iVar16 + 1;
          param_1[iVar16 * 2 + 1] = uVar3;
          if (param_5 == (int)param_4 + uVar3 || uVar14 < uVar3) goto LAB_01bc53e8;
          local_48 = uVar3;
        }
      }
    }
    iVar16 = iVar15;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (local_48 < 3) {
    uVar2 = FUN_01bc07e0(param_2,param_3,param_4);
    bVar19 = uVar2 <= uVar1;
    if (uVar1 <= uVar2) {
      bVar19 = 0x3ffff < uVar18 - uVar2;
    }
    if ((bVar19) || (uVar3 = FUN_01bc0a2c(param_4,iVar8 + uVar2,param_5), uVar3 < 3))
    goto LAB_01bc534c;
    *param_1 = (uVar18 - uVar2) + 3;
    param_1[1] = uVar3;
    if (param_5 == (int)param_4 + uVar3 || uVar14 < uVar3) {
      iVar15 = 1;
      *(uint *)(param_2 + 0x1c) = uVar18 + 1;
      goto LAB_01bc53e8;
    }
    iVar16 = 1;
  }
  else {
LAB_01bc534c:
    uVar3 = local_48;
  }
  local_48 = 0;
  local_4c = (uint *)(iVar10 + (uVar18 & uVar11) * 8);
  local_50 = (uint *)(iVar10 + (uVar18 & uVar11) * 8 + 4);
  local_5c = uVar18 + 9;
  *(uint *)(iVar9 + uVar4 * 4) = uVar18;
  uVar14 = 0;
  for (local_58 = 1 << (uVar13 & 0xff); iVar15 = iVar16, uVar1 <= uVar17 && local_58 != 0;
      local_58 = local_58 + -1) {
    if (local_48 < uVar14) {
      uVar4 = local_48;
    }
    else {
      uVar4 = uVar14;
    }
    iVar9 = FUN_01bc0a2c((int)param_4 + uVar4,iVar8 + uVar17 + uVar4,param_5);
    uVar4 = uVar4 + iVar9;
    if (uVar3 < uVar4) {
      if (local_5c - uVar17 < uVar4) {
        local_5c = uVar17 + uVar4;
      }
      param_1[iVar16 * 2] = (uVar18 + 3) - uVar17;
      iVar15 = iVar16 + 1;
      param_1[iVar16 * 2 + 1] = uVar4;
      if (param_5 == (int)param_4 + uVar4 || 0x1000 < uVar4) break;
      uVar3 = uVar4;
    }
    puVar7 = (uint *)(iVar10 + (uVar11 & uVar17) * 8);
    if (*(byte *)(iVar8 + uVar17 + uVar4) < *(byte *)((int)param_4 + uVar4)) {
      *local_4c = uVar17;
      if (uVar17 <= uVar6) {
        local_4c = &local_30;
        break;
      }
      uVar17 = puVar7[1];
      local_4c = puVar7 + 1;
      local_48 = uVar4;
      uVar4 = uVar14;
    }
    else {
      *local_50 = uVar17;
      if (uVar17 <= uVar6) {
        local_50 = &local_30;
        break;
      }
      uVar17 = *(uint *)(iVar10 + (uVar11 & uVar17) * 8);
      local_50 = puVar7;
    }
    iVar16 = iVar15;
    uVar14 = uVar4;
  }
  *local_50 = 0;
  *local_4c = 0;
  *(int *)(param_2 + 0x1c) = local_5c + -8;
LAB_01bc53e8:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar15;
}

