// FUN_01bc2c88 @ 01bc2c88 size=1380 calls_out=5 calls_in=0
// strings: 

int FUN_01bc2c88(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  int local_68;
  int local_64;
  uint local_5c;
  uint *local_54;
  uint *local_50;
  uint local_4c;
  uint local_30;
  int local_2c;
  
  uVar14 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar6 = *(int *)(param_2 + 4);
  if (param_4 < (uint *)(iVar6 + uVar14)) {
    iVar19 = 0;
  }
  else {
    uVar16 = (int)param_4 - iVar6;
    for (; uVar14 < uVar16; uVar14 = uVar14 + iVar19) {
      iVar19 = FUN_01bc0b90(param_2,iVar6 + uVar14,param_5,uVar16,6,1);
    }
    uVar4 = *param_4;
    iVar19 = 0;
    uVar2 = param_4[1];
    uVar14 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar14 = *(uint *)(param_2 + 0xcc);
    }
    *(uint *)(param_2 + 0x1c) = uVar16;
    lVar1 = (ulonglong)uVar4 * 0xbf9b0000;
    uVar2 = uVar2 * -0x40650000 + uVar4 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    iVar5 = *(int *)(param_2 + 0xc0);
    uVar2 = (uint)lVar1 >> (0x40U - iVar5 & 0xff) | uVar2 << (iVar5 - 0x20U & 0xff) |
            uVar2 >> (0x20U - iVar5 & 0xff);
    iVar5 = *(int *)(param_2 + 0x5c);
    uVar15 = *(uint *)(iVar5 + uVar2 * 4);
    iVar7 = *(int *)(param_2 + 100);
    uVar4 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    iVar8 = *(int *)(param_2 + 8);
    uVar9 = *(uint *)(param_2 + 0xc);
    if (uVar4 < uVar16) {
      uVar10 = uVar16 - uVar4;
    }
    else {
      uVar10 = 0;
    }
    uVar3 = FUN_01bc079c(param_2,uVar16,*(undefined4 *)(param_2 + 0xb8));
    uVar11 = *(uint *)(param_2 + 0xc4);
    local_4c = param_8 - 1;
    for (uVar17 = param_7; uVar17 < param_7 + 3; uVar17 = uVar17 + 1) {
      if (uVar17 == 3) {
        iVar18 = *param_6 + -1;
      }
      else {
        iVar18 = param_6[uVar17];
      }
      uVar12 = uVar16 - iVar18;
      if (iVar18 - 1U < uVar16 - uVar9) {
        bVar20 = uVar3 == uVar12;
        if (uVar3 <= uVar12) {
          bVar20 = *(uint *)((int)param_4 - iVar18) == *param_4;
        }
        if (bVar20) {
          iVar18 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar18),param_5);
LAB_01bc2f8c:
          uVar12 = iVar18 + 4;
          if (local_4c < uVar12) {
            iVar18 = iVar19 * 8;
            *(uint *)(param_1 + iVar19 * 8) = (1 - param_7) + uVar17;
            iVar19 = iVar19 + 1;
            *(uint *)(param_1 + iVar18 + 4) = uVar12;
            if (param_5 == (int)param_4 + uVar12 || uVar14 < uVar12) goto LAB_01bc2ee8;
            local_4c = uVar12;
          }
        }
      }
      else if ((iVar18 - 1U < uVar16 - uVar3 && 2 < ((uVar9 - 1) - uVar16) + iVar18) &&
              (*param_4 == *(uint *)(iVar8 + uVar12))) {
        iVar18 = FUN_01bc0b18(param_4 + 1,iVar8 + uVar12 + 4,param_5,iVar8 + uVar9,iVar6 + uVar9);
        goto LAB_01bc2f8c;
      }
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    local_50 = (uint *)(iVar7 + (uVar16 & uVar4) * 8);
    local_54 = (uint *)(iVar7 + (uVar16 & uVar4) * 8 + 4);
    local_68 = uVar16 + 9;
    *(uint *)(iVar5 + uVar2 * 4) = uVar16;
    uVar14 = 0;
    local_5c = 0;
    for (local_64 = 1 << (uVar11 & 0xff); uVar3 <= uVar15 && local_64 != 0; local_64 = local_64 + -1
        ) {
      if (uVar14 < local_5c) {
        uVar2 = uVar14;
      }
      else {
        uVar2 = local_5c;
      }
      if (uVar15 + uVar2 < uVar9) {
        iVar18 = iVar8 + uVar15;
        iVar5 = FUN_01bc0b18((int)param_4 + uVar2,iVar18 + uVar2,param_5,iVar8 + uVar9,iVar6 + uVar9
                            );
        uVar2 = uVar2 + iVar5;
        if (uVar9 <= uVar15 + uVar2) {
          iVar18 = iVar6 + uVar15;
        }
      }
      else {
        iVar18 = iVar6 + uVar15;
        iVar5 = FUN_01bc0a2c((int)param_4 + uVar2,iVar18 + uVar2,param_5);
        uVar2 = uVar2 + iVar5;
      }
      if (local_4c < uVar2) {
        if (local_68 - uVar15 < uVar2) {
          local_68 = uVar15 + uVar2;
        }
        *(uint *)(param_1 + iVar19 * 8) = (uVar16 + 3) - uVar15;
        iVar5 = iVar19 * 8;
        iVar19 = iVar19 + 1;
        *(uint *)(param_1 + iVar5 + 4) = uVar2;
        if (param_5 == (int)param_4 + uVar2 || 0x1000 < uVar2) break;
        local_4c = uVar2;
      }
      puVar13 = (uint *)(iVar7 + (uVar4 & uVar15) * 8);
      if (*(byte *)(iVar18 + uVar2) < *(byte *)((int)param_4 + uVar2)) {
        *local_50 = uVar15;
        if (uVar15 <= uVar10) {
          local_50 = &local_30;
          break;
        }
        uVar15 = puVar13[1];
        local_50 = puVar13 + 1;
        uVar14 = uVar2;
      }
      else {
        *local_54 = uVar15;
        if (uVar15 <= uVar10) {
          local_54 = &local_30;
          break;
        }
        uVar15 = *(uint *)(iVar7 + (uVar4 & uVar15) * 8);
        local_5c = uVar2;
        local_54 = puVar13;
      }
    }
    *local_54 = 0;
    *local_50 = 0;
    *(int *)(param_2 + 0x1c) = local_68 + -8;
  }
LAB_01bc2ee8:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar19;
}

