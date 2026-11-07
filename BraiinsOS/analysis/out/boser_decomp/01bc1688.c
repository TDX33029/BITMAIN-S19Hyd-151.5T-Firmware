// FUN_01bc1688 @ 01bc1688 size=1832 calls_out=5 calls_in=0
// strings: 

int FUN_01bc1688(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  uint local_78;
  uint *local_68;
  uint local_64;
  int local_4c;
  uint local_3c;
  uint local_38;
  uint local_30;
  int local_2c;
  
  uVar22 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar7 = *(int *)(param_2 + 4);
  if (param_4 < (uint *)(iVar7 + uVar22)) {
    iVar26 = 0;
  }
  else {
    uVar20 = (int)param_4 - iVar7;
    for (; uVar22 < uVar20; uVar22 = uVar22 + iVar26) {
      iVar26 = FUN_01bc0b90(param_2,iVar7 + uVar22,param_5,uVar20,5,0);
    }
    uVar4 = *param_4;
    iVar26 = 0;
    uVar2 = param_4[1];
    uVar22 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar22 = *(uint *)(param_2 + 0xcc);
    }
    *(uint *)(param_2 + 0x1c) = uVar20;
    iVar27 = *(int *)(param_2 + 0xc);
    lVar1 = (ulonglong)uVar4 * 0xbb000000;
    uVar2 = uVar2 * -0x45000000 + uVar4 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    iVar5 = *(int *)(param_2 + 0xc0);
    uVar2 = (uint)lVar1 >> (0x40U - iVar5 & 0xff) | uVar2 << (iVar5 - 0x20U & 0xff) |
            uVar2 >> (0x20U - iVar5 & 0xff);
    iVar5 = *(int *)(param_2 + 0x5c);
    uVar23 = *(uint *)(iVar5 + uVar2 * 4);
    iVar8 = *(int *)(param_2 + 100);
    uVar4 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    if (uVar4 < uVar20) {
      uVar9 = uVar20 - uVar4;
    }
    else {
      uVar9 = 0;
    }
    uVar3 = FUN_01bc079c(param_2,uVar20,*(undefined4 *)(param_2 + 0xb8));
    uVar10 = *(uint *)(param_2 + 0xc4);
    piVar11 = *(int **)(param_2 + 0xb4);
    iVar12 = piVar11[1];
    iVar13 = *piVar11;
    uVar14 = iVar13 - iVar12;
    uVar15 = piVar11[4];
    iVar16 = piVar11[0x30];
    uVar17 = ~(-1 << (piVar11[0x2f] - 1U & 0xff));
    if (uVar17 < uVar14 - uVar15) {
      uVar18 = uVar14 - uVar17;
    }
    else {
      uVar18 = uVar15;
    }
    local_3c = param_8 - 1;
    for (uVar25 = param_7; uVar25 < param_7 + 3; uVar25 = uVar25 + 1) {
      if (uVar25 == 3) {
        iVar21 = *param_6 + -1;
      }
      else {
        iVar21 = param_6[uVar25];
      }
      uVar19 = uVar20 - iVar21;
      if (iVar21 - 1U < uVar20 - iVar27) {
        bVar28 = uVar3 == uVar19;
        if (uVar3 <= uVar19) {
          bVar28 = *(uint *)((int)param_4 - iVar21) == *param_4;
        }
        if (bVar28) {
          iVar21 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar21),param_5);
          goto LAB_01bc1a7c;
        }
      }
      else if ((iVar21 - 1U < (uVar20 - uVar15) + (uVar14 - uVar3) &&
                2 < ((iVar27 + -1) - uVar20) + iVar21) &&
              (iVar21 = uVar19 + (uVar14 - uVar3), *param_4 == *(uint *)(iVar12 + iVar21))) {
        iVar21 = FUN_01bc0b18(param_4 + 1,iVar12 + iVar21 + 4,param_5,iVar13,iVar7 + iVar27);
LAB_01bc1a7c:
        uVar19 = iVar21 + 4;
        if (local_3c < uVar19) {
          iVar21 = iVar26 * 8;
          *(uint *)(param_1 + iVar26 * 8) = (1 - param_7) + uVar25;
          iVar26 = iVar26 + 1;
          *(uint *)(param_1 + iVar21 + 4) = uVar19;
          if (param_5 == (int)param_4 + uVar19 || uVar22 < uVar19) goto LAB_01bc19d4;
          local_3c = uVar19;
        }
      }
    }
    uVar22 = uVar3;
    if (uVar3 == 0) {
      uVar22 = 1;
    }
    local_68 = (uint *)(iVar8 + (uVar20 & uVar4) * 8);
    local_4c = uVar20 + 9;
    *(uint *)(iVar5 + uVar2 * 4) = uVar20;
    local_78 = 0;
    local_64 = 0;
    puVar24 = (uint *)(iVar8 + (uVar20 & uVar4) * 8 + 4);
    for (iVar5 = 1 << (uVar10 & 0xff); uVar22 <= uVar23 && iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar2 = local_64;
      if (local_78 <= local_64) {
        uVar2 = local_78;
      }
      iVar21 = FUN_01bc0a2c((int)param_4 + uVar2,iVar7 + uVar23 + uVar2,param_5);
      uVar2 = uVar2 + iVar21;
      if (local_3c < uVar2) {
        if (local_4c - uVar23 < uVar2) {
          local_4c = uVar23 + uVar2;
        }
        iVar21 = iVar26 * 8;
        *(uint *)(param_1 + iVar26 * 8) = (uVar20 + 3) - uVar23;
        iVar26 = iVar26 + 1;
        *(uint *)(param_1 + iVar21 + 4) = uVar2;
        local_3c = uVar2;
        if (param_5 == (int)param_4 + uVar2 || 0x1000 < uVar2) {
          iVar5 = 0;
          break;
        }
      }
      puVar6 = (uint *)(iVar8 + (uVar4 & uVar23) * 8);
      if (*(byte *)(iVar7 + uVar23 + uVar2) < *(byte *)((int)param_4 + uVar2)) {
        *local_68 = uVar23;
        if (uVar23 <= uVar9) {
          local_68 = &local_30;
          break;
        }
        uVar23 = puVar6[1];
        local_68 = puVar6 + 1;
        local_64 = uVar2;
        puVar6 = puVar24;
      }
      else {
        *puVar24 = uVar23;
        if (uVar23 <= uVar9) {
          puVar24 = &local_30;
          break;
        }
        uVar23 = *(uint *)(iVar8 + (uVar4 & uVar23) * 8);
        local_78 = uVar2;
      }
      puVar24 = puVar6;
    }
    *puVar24 = 0;
    *local_68 = 0;
    if (iVar5 != 0) {
      uVar22 = 0;
      lVar1 = (ulonglong)*param_4 * 0xbb000000;
      uVar2 = param_4[1] * -0x45000000 + *param_4 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      uVar2 = *(uint *)(piVar11[0x17] +
                       ((uint)lVar1 >> (0x40U - iVar16 & 0xff) | uVar2 << (iVar16 - 0x20U & 0xff) |
                       uVar2 >> (0x20U - iVar16 & 0xff)) * 4);
      local_38 = 0;
      iVar8 = piVar11[0x19];
      while (iVar5 != 0 && uVar15 < uVar2) {
        uVar4 = local_38;
        if (uVar22 <= local_38) {
          uVar4 = uVar22;
        }
        iVar21 = iVar12 + uVar2;
        iVar16 = FUN_01bc0b18((int)param_4 + uVar4,iVar21 + uVar4,param_5,iVar13,iVar7 + iVar27);
        uVar4 = uVar4 + iVar16;
        iVar16 = (uVar3 - uVar14) + uVar2;
        if (uVar14 <= uVar2 + uVar4) {
          iVar21 = iVar7 + iVar16;
        }
        if (local_3c < uVar4) {
          if ((uint)(local_4c - iVar16) < uVar4) {
            local_4c = uVar4 + iVar16;
          }
          *(uint *)(param_1 + iVar26 * 8) = (uVar20 + 3) - iVar16;
          *(uint *)(param_1 + iVar26 * 8 + 4) = uVar4;
          iVar26 = iVar26 + 1;
          if (param_5 == (int)param_4 + uVar4 || 0x1000 < uVar4) break;
          local_3c = uVar4;
        }
        if (uVar2 <= uVar18) break;
        iVar5 = iVar5 + -1;
        bVar28 = *(byte *)((int)param_4 + uVar4) <= *(byte *)(iVar21 + uVar4);
        if (bVar28) {
          uVar22 = uVar4;
        }
        if (bVar28) {
          uVar2 = *(uint *)(iVar8 + (uVar2 & uVar17) * 8);
        }
        else {
          uVar2 = *(uint *)(iVar8 + (uVar2 & uVar17) * 8 + 4);
          local_38 = uVar4;
        }
      }
    }
    *(int *)(param_2 + 0x1c) = local_4c + -8;
  }
LAB_01bc19d4:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar26;
}

