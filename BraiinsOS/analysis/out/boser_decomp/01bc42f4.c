// FUN_01bc42f4 @ 01bc42f4 size=1140 calls_out=4 calls_in=0
// strings: 

int FUN_01bc42f4(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  int local_5c;
  int local_58;
  uint *local_4c;
  uint *local_48;
  uint local_44;
  uint local_30;
  int local_2c;
  
  uVar15 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar11 = *(int *)(param_2 + 4);
  if (param_4 < (uint *)(iVar11 + uVar15)) {
    iVar17 = 0;
  }
  else {
    uVar18 = (int)param_4 - iVar11;
    for (; uVar15 < uVar18; uVar15 = uVar15 + iVar17) {
      iVar17 = FUN_01bc0b90(param_2,iVar11 + uVar15,param_5,uVar18,6,0);
    }
    uVar6 = *param_4;
    iVar17 = 0;
    uVar2 = param_4[1];
    uVar15 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar15 = *(uint *)(param_2 + 0xcc);
    }
    *(uint *)(param_2 + 0x1c) = uVar18;
    lVar1 = (ulonglong)uVar6 * 0xbf9b0000;
    uVar2 = uVar2 * -0x40650000 + uVar6 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    iVar7 = *(int *)(param_2 + 0xc0);
    uVar2 = (uint)lVar1 >> (0x40U - iVar7 & 0xff) | uVar2 << (iVar7 - 0x20U & 0xff) |
            uVar2 >> (0x20U - iVar7 & 0xff);
    iVar7 = *(int *)(param_2 + 0x5c);
    uVar16 = *(uint *)(iVar7 + uVar2 * 4);
    iVar12 = *(int *)(param_2 + 100);
    uVar6 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    iVar13 = *(int *)(param_2 + 0xc);
    if (uVar6 < uVar18) {
      uVar9 = uVar18 - uVar6;
    }
    else {
      uVar9 = 0;
    }
    uVar3 = FUN_01bc079c(param_2,uVar18,*(undefined4 *)(param_2 + 0xb8));
    uVar14 = *(uint *)(param_2 + 0xc4);
    local_44 = param_8 - 1;
    for (uVar5 = param_7; uVar5 < param_7 + 3; uVar5 = uVar5 + 1) {
      if (uVar5 == 3) {
        iVar8 = *param_6 + -1;
      }
      else {
        iVar8 = param_6[uVar5];
      }
      if (iVar8 - 1U < uVar18 - iVar13) {
        bVar19 = uVar3 == uVar18 - iVar8;
        if (uVar3 <= uVar18 - iVar8) {
          bVar19 = *(uint *)((int)param_4 - iVar8) == *param_4;
        }
        if (bVar19) {
          iVar8 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar8),param_5);
          uVar4 = iVar8 + 4;
          if (local_44 < uVar4) {
            iVar8 = iVar17 * 8;
            *(uint *)(param_1 + iVar17 * 8) = (1 - param_7) + uVar5;
            iVar17 = iVar17 + 1;
            *(uint *)(param_1 + iVar8 + 4) = uVar4;
            if (param_5 == (int)param_4 + uVar4 || uVar15 < uVar4) goto LAB_01bc450c;
            local_44 = uVar4;
          }
        }
      }
    }
    uVar15 = 0;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    local_48 = (uint *)(iVar12 + (uVar18 & uVar6) * 8);
    local_4c = (uint *)(iVar12 + (uVar18 & uVar6) * 8 + 4);
    local_5c = uVar18 + 9;
    *(uint *)(iVar7 + uVar2 * 4) = uVar18;
    uVar2 = 0;
    for (local_58 = 1 << (uVar14 & 0xff); uVar3 <= uVar16 && local_58 != 0; local_58 = local_58 + -1
        ) {
      if (uVar15 < uVar2) {
        uVar5 = uVar15;
      }
      else {
        uVar5 = uVar2;
      }
      iVar7 = FUN_01bc0a2c((int)param_4 + uVar5,iVar11 + uVar16 + uVar5,param_5);
      uVar5 = uVar5 + iVar7;
      if (local_44 < uVar5) {
        if (local_5c - uVar16 < uVar5) {
          local_5c = uVar16 + uVar5;
        }
        *(uint *)(param_1 + iVar17 * 8) = (uVar18 + 3) - uVar16;
        iVar7 = iVar17 * 8;
        iVar17 = iVar17 + 1;
        *(uint *)(param_1 + iVar7 + 4) = uVar5;
        if (param_5 == (int)param_4 + uVar5 || 0x1000 < uVar5) break;
        local_44 = uVar5;
      }
      puVar10 = (uint *)(iVar12 + (uVar6 & uVar16) * 8);
      if (*(byte *)(iVar11 + uVar16 + uVar5) < *(byte *)((int)param_4 + uVar5)) {
        *local_48 = uVar16;
        if (uVar16 <= uVar9) {
          local_48 = &local_30;
          break;
        }
        uVar16 = puVar10[1];
        local_48 = puVar10 + 1;
        uVar15 = uVar5;
        uVar5 = uVar2;
      }
      else {
        *local_4c = uVar16;
        if (uVar16 <= uVar9) {
          local_4c = &local_30;
          break;
        }
        uVar16 = *(uint *)(iVar12 + (uVar6 & uVar16) * 8);
        local_4c = puVar10;
      }
      uVar2 = uVar5;
    }
    *local_4c = 0;
    *local_48 = 0;
    *(int *)(param_2 + 0x1c) = local_5c + -8;
  }
LAB_01bc450c:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar17;
}

