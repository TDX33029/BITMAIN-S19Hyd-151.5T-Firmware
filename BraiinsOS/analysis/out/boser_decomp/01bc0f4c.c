// FUN_01bc0f4c @ 01bc0f4c size=1832 calls_out=5 calls_in=0
// strings: 

int FUN_01bc0f4c(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
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
  iVar6 = *(int *)(param_2 + 4);
  if (param_4 < (uint *)(iVar6 + uVar22)) {
    iVar26 = 0;
  }
  else {
    uVar20 = (int)param_4 - iVar6;
    for (; uVar22 < uVar20; uVar22 = uVar22 + iVar26) {
      iVar26 = FUN_01bc0b90(param_2,iVar6 + uVar22,param_5,uVar20,6,0);
    }
    uVar3 = param_4[1];
    iVar26 = 0;
    uVar22 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar22 = *(uint *)(param_2 + 0xcc);
    }
    uVar7 = *param_4;
    *(uint *)(param_2 + 0x1c) = uVar20;
    iVar27 = *(int *)(param_2 + 0xc);
    lVar1 = (ulonglong)uVar7 * 0xbf9b0000;
    uVar3 = uVar3 * -0x40650000 + uVar7 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    iVar4 = *(int *)(param_2 + 0xc0);
    uVar3 = (uint)lVar1 >> (0x40U - iVar4 & 0xff) | uVar3 << (iVar4 - 0x20U & 0xff) |
            uVar3 >> (0x20U - iVar4 & 0xff);
    iVar4 = *(int *)(param_2 + 0x5c);
    uVar23 = *(uint *)(iVar4 + uVar3 * 4);
    iVar8 = *(int *)(param_2 + 100);
    uVar7 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    if (uVar7 < uVar20) {
      uVar9 = uVar20 - uVar7;
    }
    else {
      uVar9 = 0;
    }
    uVar2 = FUN_01bc079c(param_2,uVar20,*(undefined4 *)(param_2 + 0xb8));
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
        bVar28 = uVar2 == uVar19;
        if (uVar2 <= uVar19) {
          bVar28 = *(uint *)((int)param_4 - iVar21) == *param_4;
        }
        if (bVar28) {
          iVar21 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar21),param_5);
          goto LAB_01bc1340;
        }
      }
      else if ((iVar21 - 1U < (uVar20 - uVar15) + (uVar14 - uVar2) &&
                2 < ((iVar27 + -1) - uVar20) + iVar21) &&
              (iVar21 = uVar19 + (uVar14 - uVar2), *param_4 == *(uint *)(iVar12 + iVar21))) {
        iVar21 = FUN_01bc0b18(param_4 + 1,iVar12 + iVar21 + 4,param_5,iVar13,iVar6 + iVar27);
LAB_01bc1340:
        uVar19 = iVar21 + 4;
        if (local_3c < uVar19) {
          iVar21 = iVar26 * 8;
          *(uint *)(param_1 + iVar26 * 8) = (1 - param_7) + uVar25;
          iVar26 = iVar26 + 1;
          *(uint *)(param_1 + iVar21 + 4) = uVar19;
          if (param_5 == (int)param_4 + uVar19 || uVar22 < uVar19) goto LAB_01bc1298;
          local_3c = uVar19;
        }
      }
    }
    uVar22 = uVar2;
    if (uVar2 == 0) {
      uVar22 = 1;
    }
    local_68 = (uint *)(iVar8 + (uVar20 & uVar7) * 8);
    local_4c = uVar20 + 9;
    *(uint *)(iVar4 + uVar3 * 4) = uVar20;
    local_78 = 0;
    local_64 = 0;
    puVar24 = (uint *)(iVar8 + (uVar20 & uVar7) * 8 + 4);
    for (iVar4 = 1 << (uVar10 & 0xff); uVar22 <= uVar23 && iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar3 = local_64;
      if (local_78 <= local_64) {
        uVar3 = local_78;
      }
      iVar21 = FUN_01bc0a2c((int)param_4 + uVar3,iVar6 + uVar23 + uVar3,param_5);
      uVar3 = uVar3 + iVar21;
      if (local_3c < uVar3) {
        if (local_4c - uVar23 < uVar3) {
          local_4c = uVar23 + uVar3;
        }
        iVar21 = iVar26 * 8;
        *(uint *)(param_1 + iVar26 * 8) = (uVar20 + 3) - uVar23;
        iVar26 = iVar26 + 1;
        *(uint *)(param_1 + iVar21 + 4) = uVar3;
        local_3c = uVar3;
        if (param_5 == (int)param_4 + uVar3 || 0x1000 < uVar3) {
          iVar4 = 0;
          break;
        }
      }
      puVar5 = (uint *)(iVar8 + (uVar7 & uVar23) * 8);
      if (*(byte *)(iVar6 + uVar23 + uVar3) < *(byte *)((int)param_4 + uVar3)) {
        *local_68 = uVar23;
        if (uVar23 <= uVar9) {
          local_68 = &local_30;
          break;
        }
        uVar23 = puVar5[1];
        local_68 = puVar5 + 1;
        local_64 = uVar3;
        puVar5 = puVar24;
      }
      else {
        *puVar24 = uVar23;
        if (uVar23 <= uVar9) {
          puVar24 = &local_30;
          break;
        }
        uVar23 = *(uint *)(iVar8 + (uVar7 & uVar23) * 8);
        local_78 = uVar3;
      }
      puVar24 = puVar5;
    }
    *puVar24 = 0;
    *local_68 = 0;
    if (iVar4 != 0) {
      uVar22 = 0;
      lVar1 = (ulonglong)*param_4 * 0xbf9b0000;
      uVar3 = param_4[1] * -0x40650000 + *param_4 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      uVar3 = *(uint *)(piVar11[0x17] +
                       ((uint)lVar1 >> (0x40U - iVar16 & 0xff) | uVar3 << (iVar16 - 0x20U & 0xff) |
                       uVar3 >> (0x20U - iVar16 & 0xff)) * 4);
      local_38 = 0;
      iVar8 = piVar11[0x19];
      while (iVar4 != 0 && uVar15 < uVar3) {
        uVar7 = local_38;
        if (uVar22 <= local_38) {
          uVar7 = uVar22;
        }
        iVar21 = iVar12 + uVar3;
        iVar16 = FUN_01bc0b18((int)param_4 + uVar7,iVar21 + uVar7,param_5,iVar13,iVar6 + iVar27);
        uVar7 = uVar7 + iVar16;
        iVar16 = (uVar2 - uVar14) + uVar3;
        if (uVar14 <= uVar3 + uVar7) {
          iVar21 = iVar6 + iVar16;
        }
        if (local_3c < uVar7) {
          if ((uint)(local_4c - iVar16) < uVar7) {
            local_4c = uVar7 + iVar16;
          }
          *(uint *)(param_1 + iVar26 * 8) = (uVar20 + 3) - iVar16;
          *(uint *)(param_1 + iVar26 * 8 + 4) = uVar7;
          iVar26 = iVar26 + 1;
          if (param_5 == (int)param_4 + uVar7 || 0x1000 < uVar7) break;
          local_3c = uVar7;
        }
        if (uVar3 <= uVar18) break;
        iVar4 = iVar4 + -1;
        bVar28 = *(byte *)((int)param_4 + uVar7) <= *(byte *)(iVar21 + uVar7);
        if (bVar28) {
          uVar22 = uVar7;
        }
        if (bVar28) {
          uVar3 = *(uint *)(iVar8 + (uVar3 & uVar17) * 8);
        }
        else {
          uVar3 = *(uint *)(iVar8 + (uVar3 & uVar17) * 8 + 4);
          local_38 = uVar7;
        }
      }
    }
    *(int *)(param_2 + 0x1c) = local_4c + -8;
  }
LAB_01bc1298:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar26;
}

