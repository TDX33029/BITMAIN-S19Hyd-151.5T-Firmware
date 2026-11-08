// FUN_01bc3774 @ 01bc3774 size=1344 calls_out=5 calls_in=0
// strings: 

int FUN_01bc3774(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int local_68;
  int local_64;
  uint local_5c;
  uint *local_54;
  uint *local_50;
  uint local_4c;
  uint local_30;
  int local_2c;
  
  uVar13 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar3 = *(int *)(param_2 + 4);
  if (param_4 < (int *)(iVar3 + uVar13)) {
    iVar18 = 0;
  }
  else {
    uVar15 = (int)param_4 - iVar3;
    for (; uVar13 < uVar15; uVar13 = uVar13 + iVar4) {
      iVar4 = FUN_01bc0b90(param_2,iVar3 + uVar13,param_5,uVar15,4,1);
    }
    *(uint *)(param_2 + 0x1c) = uVar15;
    uVar13 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar13 = *(uint *)(param_2 + 0xcc);
    }
    iVar18 = 0;
    uVar2 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    iVar4 = *(int *)(param_2 + 0x5c);
    uVar14 = *(uint *)(iVar4 + uVar2 * 4);
    iVar5 = *(int *)(param_2 + 100);
    uVar6 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    iVar7 = *(int *)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 0xc);
    if (uVar6 < uVar15) {
      uVar9 = uVar15 - uVar6;
    }
    else {
      uVar9 = 0;
    }
    uVar1 = FUN_01bc079c(param_2,uVar15,*(undefined4 *)(param_2 + 0xb8));
    uVar10 = *(uint *)(param_2 + 0xc4);
    local_4c = param_8 - 1;
    for (uVar16 = param_7; uVar16 < param_7 + 3; uVar16 = uVar16 + 1) {
      if (uVar16 == 3) {
        iVar17 = *param_6 + -1;
      }
      else {
        iVar17 = param_6[uVar16];
      }
      uVar11 = uVar15 - iVar17;
      if (iVar17 - 1U < uVar15 - uVar8) {
        bVar19 = uVar1 == uVar11;
        if (uVar1 <= uVar11) {
          bVar19 = *(int *)((int)param_4 - iVar17) == *param_4;
        }
        if (bVar19) {
          iVar17 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar17),param_5);
LAB_01bc3a54:
          uVar11 = iVar17 + 4;
          if (local_4c < uVar11) {
            iVar17 = iVar18 * 8;
            *(uint *)(param_1 + iVar18 * 8) = (1 - param_7) + uVar16;
            iVar18 = iVar18 + 1;
            *(uint *)(param_1 + iVar17 + 4) = uVar11;
            if (param_5 == (int)param_4 + uVar11 || uVar13 < uVar11) goto LAB_01bc39b0;
            local_4c = uVar11;
          }
        }
      }
      else if ((iVar17 - 1U < uVar15 - uVar1 && 2 < ((uVar8 - 1) - uVar15) + iVar17) &&
              (*param_4 == *(int *)(iVar7 + uVar11))) {
        iVar17 = FUN_01bc0b18(param_4 + 1,iVar7 + uVar11 + 4,param_5,iVar7 + uVar8,iVar3 + uVar8);
        goto LAB_01bc3a54;
      }
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    local_50 = (uint *)(iVar5 + (uVar15 & uVar6) * 8);
    local_54 = (uint *)(iVar5 + (uVar15 & uVar6) * 8 + 4);
    local_68 = uVar15 + 9;
    *(uint *)(iVar4 + uVar2 * 4) = uVar15;
    uVar13 = 0;
    local_5c = 0;
    for (local_64 = 1 << (uVar10 & 0xff); uVar1 <= uVar14 && local_64 != 0; local_64 = local_64 + -1
        ) {
      if (uVar13 < local_5c) {
        uVar2 = uVar13;
      }
      else {
        uVar2 = local_5c;
      }
      if (uVar14 + uVar2 < uVar8) {
        iVar17 = iVar7 + uVar14;
        iVar4 = FUN_01bc0b18((int)param_4 + uVar2,iVar17 + uVar2,param_5,iVar7 + uVar8,iVar3 + uVar8
                            );
        uVar2 = uVar2 + iVar4;
        if (uVar8 <= uVar14 + uVar2) {
          iVar17 = iVar3 + uVar14;
        }
      }
      else {
        iVar17 = iVar3 + uVar14;
        iVar4 = FUN_01bc0a2c((int)param_4 + uVar2,iVar17 + uVar2,param_5);
        uVar2 = uVar2 + iVar4;
      }
      if (local_4c < uVar2) {
        if (local_68 - uVar14 < uVar2) {
          local_68 = uVar14 + uVar2;
        }
        *(uint *)(param_1 + iVar18 * 8) = (uVar15 + 3) - uVar14;
        iVar4 = iVar18 * 8;
        iVar18 = iVar18 + 1;
        *(uint *)(param_1 + iVar4 + 4) = uVar2;
        if (param_5 == (int)param_4 + uVar2 || 0x1000 < uVar2) break;
        local_4c = uVar2;
      }
      puVar12 = (uint *)(iVar5 + (uVar6 & uVar14) * 8);
      if (*(byte *)(iVar17 + uVar2) < *(byte *)((int)param_4 + uVar2)) {
        *local_50 = uVar14;
        if (uVar14 <= uVar9) {
          local_50 = &local_30;
          break;
        }
        uVar14 = puVar12[1];
        local_50 = puVar12 + 1;
        uVar13 = uVar2;
      }
      else {
        *local_54 = uVar14;
        if (uVar14 <= uVar9) {
          local_54 = &local_30;
          break;
        }
        uVar14 = *(uint *)(iVar5 + (uVar6 & uVar14) * 8);
        local_5c = uVar2;
        local_54 = puVar12;
      }
    }
    *local_54 = 0;
    *local_50 = 0;
    *(int *)(param_2 + 0x1c) = local_68 + -8;
  }
LAB_01bc39b0:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar18;
}

