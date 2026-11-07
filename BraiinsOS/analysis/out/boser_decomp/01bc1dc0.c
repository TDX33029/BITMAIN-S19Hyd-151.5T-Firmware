// FUN_01bc1dc0 @ 01bc1dc0 size=1760 calls_out=5 calls_in=0
// strings: 

int FUN_01bc1dc0(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  uint local_74;
  uint *local_68;
  uint local_64;
  int local_4c;
  uint local_3c;
  uint local_38;
  uint local_30;
  int local_2c;
  
  uVar20 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar3 = *(int *)(param_2 + 4);
  if (param_4 < (int *)(iVar3 + uVar20)) {
    iVar25 = 0;
  }
  else {
    uVar18 = (int)param_4 - iVar3;
    for (; uVar20 < uVar18; uVar20 = uVar20 + iVar26) {
      iVar26 = FUN_01bc0b90(param_2,iVar3 + uVar20,param_5,uVar18,4,0);
    }
    *(uint *)(param_2 + 0x1c) = uVar18;
    iVar26 = *(int *)(param_2 + 0xc);
    uVar20 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar20 = *(uint *)(param_2 + 0xcc);
    }
    iVar25 = 0;
    uVar22 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    iVar4 = *(int *)(param_2 + 0x5c);
    uVar21 = *(uint *)(iVar4 + uVar22 * 4);
    iVar5 = *(int *)(param_2 + 100);
    uVar6 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    if (uVar6 < uVar18) {
      uVar7 = uVar18 - uVar6;
    }
    else {
      uVar7 = 0;
    }
    uVar1 = FUN_01bc079c(param_2,uVar18,*(undefined4 *)(param_2 + 0xb8));
    uVar8 = *(uint *)(param_2 + 0xc4);
    piVar9 = *(int **)(param_2 + 0xb4);
    iVar10 = piVar9[1];
    iVar11 = *piVar9;
    uVar12 = iVar11 - iVar10;
    uVar13 = piVar9[4];
    iVar14 = piVar9[0x30];
    uVar15 = ~(-1 << (piVar9[0x2f] - 1U & 0xff));
    if (uVar15 < uVar12 - uVar13) {
      uVar16 = uVar12 - uVar15;
    }
    else {
      uVar16 = uVar13;
    }
    local_3c = param_8 - 1;
    for (uVar24 = param_7; uVar24 < param_7 + 3; uVar24 = uVar24 + 1) {
      if (uVar24 == 3) {
        iVar19 = *param_6 + -1;
      }
      else {
        iVar19 = param_6[uVar24];
      }
      uVar17 = uVar18 - iVar19;
      if (iVar19 - 1U < uVar18 - iVar26) {
        bVar27 = uVar1 == uVar17;
        if (uVar1 <= uVar17) {
          bVar27 = *(int *)((int)param_4 - iVar19) == *param_4;
        }
        if (bVar27) {
          iVar19 = FUN_01bc0a2c(param_4 + 1,(int)param_4 + (4 - iVar19),param_5);
          goto LAB_01bc216c;
        }
      }
      else if ((iVar19 - 1U < (uVar18 - uVar13) + (uVar12 - uVar1) &&
                2 < ((iVar26 + -1) - uVar18) + iVar19) &&
              (iVar19 = uVar17 + (uVar12 - uVar1), *param_4 == *(int *)(iVar10 + iVar19))) {
        iVar19 = FUN_01bc0b18(param_4 + 1,iVar10 + iVar19 + 4,param_5,iVar11,iVar3 + iVar26);
LAB_01bc216c:
        uVar17 = iVar19 + 4;
        if (local_3c < uVar17) {
          iVar19 = iVar25 * 8;
          *(uint *)(param_1 + iVar25 * 8) = (1 - param_7) + uVar24;
          iVar25 = iVar25 + 1;
          *(uint *)(param_1 + iVar19 + 4) = uVar17;
          if (param_5 == (int)param_4 + uVar17 || uVar20 < uVar17) goto LAB_01bc20c4;
          local_3c = uVar17;
        }
      }
    }
    uVar20 = uVar1;
    if (uVar1 == 0) {
      uVar20 = 1;
    }
    local_68 = (uint *)(iVar5 + (uVar18 & uVar6) * 8);
    local_4c = uVar18 + 9;
    *(uint *)(iVar4 + uVar22 * 4) = uVar18;
    local_74 = 0;
    local_64 = 0;
    puVar23 = (uint *)(iVar5 + (uVar18 & uVar6) * 8 + 4);
    for (iVar4 = 1 << (uVar8 & 0xff); uVar20 <= uVar21 && iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar22 = local_64;
      if (local_74 <= local_64) {
        uVar22 = local_74;
      }
      iVar19 = FUN_01bc0a2c((int)param_4 + uVar22,iVar3 + uVar21 + uVar22,param_5);
      uVar22 = uVar22 + iVar19;
      if (local_3c < uVar22) {
        if (local_4c - uVar21 < uVar22) {
          local_4c = uVar21 + uVar22;
        }
        iVar19 = iVar25 * 8;
        *(uint *)(param_1 + iVar25 * 8) = (uVar18 + 3) - uVar21;
        iVar25 = iVar25 + 1;
        *(uint *)(param_1 + iVar19 + 4) = uVar22;
        local_3c = uVar22;
        if (param_5 == (int)param_4 + uVar22 || 0x1000 < uVar22) {
          iVar4 = 0;
          break;
        }
      }
      puVar2 = (uint *)(iVar5 + (uVar6 & uVar21) * 8);
      if (*(byte *)(iVar3 + uVar21 + uVar22) < *(byte *)((int)param_4 + uVar22)) {
        *local_68 = uVar21;
        if (uVar21 <= uVar7) {
          local_68 = &local_30;
          break;
        }
        uVar21 = puVar2[1];
        local_68 = puVar2 + 1;
        local_64 = uVar22;
        puVar2 = puVar23;
      }
      else {
        *puVar23 = uVar21;
        if (uVar21 <= uVar7) {
          puVar23 = &local_30;
          break;
        }
        uVar21 = *(uint *)(iVar5 + (uVar6 & uVar21) * 8);
        local_74 = uVar22;
      }
      puVar23 = puVar2;
    }
    *puVar23 = 0;
    *local_68 = 0;
    if (iVar4 != 0) {
      uVar20 = 0;
      uVar22 = *(uint *)(piVar9[0x17] +
                        ((uint)(*param_4 * -0x61c8864f) >> (0x20U - iVar14 & 0xff)) * 4);
      local_38 = 0;
      iVar5 = piVar9[0x19];
      while (iVar4 != 0 && uVar13 < uVar22) {
        uVar6 = local_38;
        if (uVar20 <= local_38) {
          uVar6 = uVar20;
        }
        iVar19 = iVar10 + uVar22;
        iVar14 = FUN_01bc0b18((int)param_4 + uVar6,iVar19 + uVar6,param_5,iVar11,iVar3 + iVar26);
        uVar6 = uVar6 + iVar14;
        iVar14 = (uVar1 - uVar12) + uVar22;
        if (uVar12 <= uVar22 + uVar6) {
          iVar19 = iVar3 + iVar14;
        }
        if (local_3c < uVar6) {
          if ((uint)(local_4c - iVar14) < uVar6) {
            local_4c = uVar6 + iVar14;
          }
          *(uint *)(param_1 + iVar25 * 8) = (uVar18 + 3) - iVar14;
          *(uint *)(param_1 + iVar25 * 8 + 4) = uVar6;
          iVar25 = iVar25 + 1;
          if (param_5 == (int)param_4 + uVar6 || 0x1000 < uVar6) break;
          local_3c = uVar6;
        }
        if (uVar22 <= uVar16) break;
        iVar4 = iVar4 + -1;
        bVar27 = *(byte *)((int)param_4 + uVar6) <= *(byte *)(iVar19 + uVar6);
        if (bVar27) {
          uVar20 = uVar6;
        }
        if (bVar27) {
          uVar22 = *(uint *)(iVar5 + (uVar22 & uVar15) * 8);
        }
        else {
          uVar22 = *(uint *)(iVar5 + (uVar22 & uVar15) * 8 + 4);
          local_38 = uVar6;
        }
      }
    }
    *(int *)(param_2 + 0x1c) = local_4c + -8;
  }
LAB_01bc20c4:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar25;
}

