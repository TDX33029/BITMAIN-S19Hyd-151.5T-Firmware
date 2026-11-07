// FUN_01bc4c00 @ 01bc4c00 size=1104 calls_out=4 calls_in=0
// strings: 

int FUN_01bc4c00(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  int local_5c;
  int local_58;
  uint *local_4c;
  uint *local_48;
  uint local_44;
  uint local_30;
  int local_2c;
  
  uVar13 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar7 = *(int *)(param_2 + 4);
  if (param_4 < (int *)(iVar7 + uVar13)) {
    iVar15 = 0;
  }
  else {
    uVar17 = (int)param_4 - iVar7;
    for (; uVar13 < uVar17; uVar13 = uVar13 + iVar8) {
      iVar8 = FUN_01bc0b90(param_2,iVar7 + uVar13,param_5,uVar17,4,0);
    }
    *(uint *)(param_2 + 0x1c) = uVar17;
    uVar13 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar13 = *(uint *)(param_2 + 0xcc);
    }
    iVar15 = 0;
    uVar16 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    iVar8 = *(int *)(param_2 + 0x5c);
    uVar14 = *(uint *)(iVar8 + uVar16 * 4);
    iVar9 = *(int *)(param_2 + 100);
    uVar10 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    iVar11 = *(int *)(param_2 + 0xc);
    if (uVar10 < uVar17) {
      uVar5 = uVar17 - uVar10;
    }
    else {
      uVar5 = 0;
    }
    uVar1 = FUN_01bc079c(param_2,uVar17,*(undefined4 *)(param_2 + 0xb8));
    uVar12 = *(uint *)(param_2 + 0xc4);
    local_44 = param_8 - 1;
    for (uVar3 = param_7; uVar3 < param_7 + 3; uVar3 = uVar3 + 1) {
      if (uVar3 == 3) {
        iVar4 = *param_6 + -1;
      }
      else {
        iVar4 = param_6[uVar3];
      }
      if (iVar4 - 1U < uVar17 - iVar11) {
        bVar18 = uVar1 == uVar17 - iVar4;
        if (uVar1 <= uVar17 - iVar4) {
          bVar18 = *(int *)((int)param_4 - iVar4) == *param_4;
        }
        if (bVar18) {
          iVar4 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar4),param_5);
          uVar2 = iVar4 + 4;
          if (local_44 < uVar2) {
            iVar4 = iVar15 * 8;
            *(uint *)(param_1 + iVar15 * 8) = (1 - param_7) + uVar3;
            iVar15 = iVar15 + 1;
            *(uint *)(param_1 + iVar4 + 4) = uVar2;
            if (param_5 == (int)param_4 + uVar2 || uVar13 < uVar2) goto LAB_01bc4df4;
            local_44 = uVar2;
          }
        }
      }
    }
    uVar13 = 0;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    local_48 = (uint *)(iVar9 + (uVar17 & uVar10) * 8);
    local_4c = (uint *)(iVar9 + (uVar17 & uVar10) * 8 + 4);
    local_5c = uVar17 + 9;
    *(uint *)(iVar8 + uVar16 * 4) = uVar17;
    uVar16 = 0;
    for (local_58 = 1 << (uVar12 & 0xff); uVar1 <= uVar14 && local_58 != 0; local_58 = local_58 + -1
        ) {
      if (uVar13 < uVar16) {
        uVar3 = uVar13;
      }
      else {
        uVar3 = uVar16;
      }
      iVar8 = FUN_01bc0a2c((int)param_4 + uVar3,iVar7 + uVar14 + uVar3,param_5);
      uVar3 = uVar3 + iVar8;
      if (local_44 < uVar3) {
        if (local_5c - uVar14 < uVar3) {
          local_5c = uVar14 + uVar3;
        }
        *(uint *)(param_1 + iVar15 * 8) = (uVar17 + 3) - uVar14;
        iVar8 = iVar15 * 8;
        iVar15 = iVar15 + 1;
        *(uint *)(param_1 + iVar8 + 4) = uVar3;
        if (param_5 == (int)param_4 + uVar3 || 0x1000 < uVar3) break;
        local_44 = uVar3;
      }
      puVar6 = (uint *)(iVar9 + (uVar10 & uVar14) * 8);
      if (*(byte *)(iVar7 + uVar14 + uVar3) < *(byte *)((int)param_4 + uVar3)) {
        *local_48 = uVar14;
        if (uVar14 <= uVar5) {
          local_48 = &local_30;
          break;
        }
        uVar14 = puVar6[1];
        local_48 = puVar6 + 1;
        uVar13 = uVar3;
        uVar3 = uVar16;
      }
      else {
        *local_4c = uVar14;
        if (uVar14 <= uVar5) {
          local_4c = &local_30;
          break;
        }
        uVar14 = *(uint *)(iVar9 + (uVar10 & uVar14) * 8);
        local_4c = puVar6;
      }
      uVar16 = uVar3;
    }
    *local_4c = 0;
    *local_48 = 0;
    *(int *)(param_2 + 0x1c) = local_5c + -8;
  }
LAB_01bc4df4:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar15;
}

