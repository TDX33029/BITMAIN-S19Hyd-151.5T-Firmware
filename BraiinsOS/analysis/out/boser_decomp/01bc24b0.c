// FUN_01bc24b0 @ 01bc24b0 size=1992 calls_out=6 calls_in=0
// strings: 

int FUN_01bc24b0(int *param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6,
                uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  uint local_74;
  uint *local_68;
  int local_50;
  int local_3c;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar22 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_01d53560;
  iVar6 = *(int *)(param_2 + 4);
  if (param_4 < (int *)(iVar6 + uVar22)) {
    iVar26 = 0;
  }
  else {
    uVar21 = (int)param_4 - iVar6;
    for (; uVar22 < uVar21; uVar22 = uVar22 + iVar26) {
      iVar26 = FUN_01bc0b90(param_2,iVar6 + uVar22,param_5,uVar21,3,0);
    }
    *(uint *)(param_2 + 0x1c) = uVar21;
    iVar25 = *(int *)(param_2 + 0xc);
    uVar22 = 0xfff;
    if (*(uint *)(param_2 + 0xcc) < 0xfff) {
      uVar22 = *(uint *)(param_2 + 0xcc);
    }
    iVar27 = 0;
    uVar4 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    iVar7 = *(int *)(param_2 + 0x5c);
    local_34 = *(uint *)(iVar7 + uVar4 * 4);
    iVar8 = *(int *)(param_2 + 100);
    uVar9 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    if (uVar9 < uVar21) {
      uVar10 = uVar21 - uVar9;
    }
    else {
      uVar10 = 0;
    }
    uVar1 = FUN_01bc079c(param_2,uVar21,*(undefined4 *)(param_2 + 0xb8));
    uVar11 = *(uint *)(param_2 + 0xc4);
    piVar12 = *(int **)(param_2 + 0xb4);
    iVar13 = piVar12[1];
    iVar14 = *piVar12;
    uVar15 = iVar14 - iVar13;
    uVar16 = piVar12[4];
    iVar17 = piVar12[0x30];
    uVar23 = param_8 - 1;
    uVar18 = ~(-1 << (piVar12[0x2f] - 1U & 0xff));
    if (uVar18 < uVar15 - uVar16) {
      uVar19 = uVar15 - uVar18;
    }
    else {
      uVar19 = uVar16;
    }
    for (uVar20 = param_7; uVar20 < param_7 + 3; uVar20 = uVar20 + 1) {
      if (uVar20 == 3) {
        iVar26 = *param_6 + -1;
      }
      else {
        iVar26 = param_6[uVar20];
      }
      uVar2 = uVar21 - iVar26;
      if (iVar26 - 1U < uVar21 - iVar25) {
        bVar28 = uVar1 == uVar2;
        if (uVar1 <= uVar2) {
          bVar28 = *(int *)((int)param_4 - iVar26) * 0x100 == *param_4 * 0x100;
        }
        if (bVar28) {
          iVar26 = FUN_01bc0a2c((int)param_4 + 3,(int)param_4 + (3 - iVar26),param_5);
          goto LAB_01bc27e4;
        }
      }
      else if ((iVar26 - 1U < (uVar21 - uVar16) + (uVar15 - uVar1) &&
                2 < ((iVar25 + -1) - uVar21) + iVar26) &&
              (iVar26 = uVar2 + (uVar15 - uVar1),
              *(int *)(iVar13 + iVar26) * 0x100 == *param_4 * 0x100)) {
        iVar26 = FUN_01bc0b18((int)param_4 + 3,iVar13 + iVar26 + 3,param_5,iVar14,iVar6 + iVar25);
LAB_01bc27e4:
        uVar2 = iVar26 + 3;
        if (uVar23 < uVar2) {
          param_1[iVar27 * 2] = (1 - param_7) + uVar20;
          iVar26 = iVar27 + 1;
          param_1[iVar27 * 2 + 1] = uVar2;
          if (param_5 == (int)param_4 + uVar2 || uVar22 < uVar2) goto LAB_01bc29bc;
          uVar23 = uVar2;
          iVar27 = iVar26;
        }
      }
    }
    uVar20 = uVar1;
    if (uVar1 == 0) {
      uVar20 = 1;
    }
    if (uVar23 < 3) {
      uVar2 = FUN_01bc07e0(param_2,param_3,param_4);
      bVar28 = uVar2 <= uVar20;
      if (uVar20 <= uVar2) {
        bVar28 = 0x3ffff < uVar21 - uVar2;
      }
      if ((!bVar28) && (uVar3 = FUN_01bc0a2c(param_4,iVar6 + uVar2,param_5), 2 < uVar3)) {
        *param_1 = (uVar21 - uVar2) + 3;
        param_1[1] = uVar3;
        if (param_5 == (int)param_4 + uVar3 || uVar22 < uVar3) {
          iVar26 = 1;
          *(uint *)(param_2 + 0x1c) = uVar21 + 1;
          goto LAB_01bc29bc;
        }
        iVar27 = 1;
        uVar23 = uVar3;
      }
    }
    local_68 = (uint *)(iVar8 + (uVar21 & uVar9) * 8);
    local_50 = uVar21 + 9;
    *(uint *)(iVar7 + uVar4 * 4) = uVar21;
    uVar22 = 0;
    local_74 = 0;
    local_3c = 1 << (uVar11 & 0xff);
    puVar24 = (uint *)(iVar8 + (uVar21 & uVar9) * 8 + 4);
    while( true ) {
      uVar4 = uVar23;
      iVar26 = iVar27;
      if (!(uVar20 <= local_34 && local_3c != 0)) break;
      uVar4 = local_74;
      if (uVar22 < local_74) {
        uVar4 = uVar22;
      }
      iVar7 = FUN_01bc0a2c((int)param_4 + uVar4,iVar6 + local_34 + uVar4,param_5);
      uVar4 = uVar4 + iVar7;
      if (uVar23 < uVar4) {
        if (local_50 - local_34 < uVar4) {
          local_50 = local_34 + uVar4;
        }
        param_1[iVar27 * 2] = (uVar21 + 3) - local_34;
        iVar26 = iVar27 + 1;
        param_1[iVar27 * 2 + 1] = uVar4;
        uVar23 = uVar4;
        if (param_5 == (int)param_4 + uVar4 || 0x1000 < uVar4) {
          local_3c = 0;
          break;
        }
      }
      puVar5 = (uint *)(iVar8 + (uVar9 & local_34) * 8);
      if (*(byte *)(iVar6 + local_34 + uVar4) < *(byte *)((int)param_4 + uVar4)) {
        *local_68 = local_34;
        if (local_34 <= uVar10) {
          local_68 = &local_30;
          uVar4 = uVar23;
          break;
        }
        local_68 = puVar5 + 1;
        local_34 = puVar5[1];
        uVar22 = uVar4;
        puVar5 = puVar24;
      }
      else {
        *puVar24 = local_34;
        if (local_34 <= uVar10) {
          puVar24 = &local_30;
          uVar4 = uVar23;
          break;
        }
        local_34 = *(uint *)(iVar8 + (uVar9 & local_34) * 8);
        local_74 = uVar4;
      }
      local_3c = local_3c + -1;
      puVar24 = puVar5;
      iVar27 = iVar26;
    }
    uVar22 = 0;
    *puVar24 = 0;
    *local_68 = 0;
    if (local_3c != 0) {
      local_34 = 0;
      uVar9 = *(uint *)(piVar12[0x17] +
                       ((uint)(*param_4 * -0x61c8864f) >> (0x20U - iVar17 & 0xff)) * 4);
      iVar27 = piVar12[0x19];
      for (; local_3c != 0 && uVar16 < uVar9; local_3c = local_3c + -1) {
        uVar10 = local_34;
        if (uVar22 <= local_34) {
          uVar10 = uVar22;
        }
        iVar8 = iVar13 + uVar9;
        iVar7 = FUN_01bc0b18((int)param_4 + uVar10,iVar8 + uVar10,param_5,iVar14,iVar6 + iVar25);
        uVar10 = uVar10 + iVar7;
        iVar7 = (uVar1 - uVar15) + uVar9;
        if (uVar15 <= uVar9 + uVar10) {
          iVar8 = iVar6 + iVar7;
        }
        if (uVar4 < uVar10) {
          if ((uint)(local_50 - iVar7) < uVar10) {
            local_50 = uVar10 + iVar7;
          }
          param_1[iVar26 * 2] = (uVar21 + 3) - iVar7;
          param_1[iVar26 * 2 + 1] = uVar10;
          iVar26 = iVar26 + 1;
          if (param_5 == (int)param_4 + uVar10 || 0x1000 < uVar10) break;
          uVar4 = uVar10;
        }
        if (uVar9 <= uVar19) break;
        bVar28 = *(byte *)((int)param_4 + uVar10) <= *(byte *)(iVar8 + uVar10);
        if (bVar28) {
          uVar22 = uVar10;
        }
        if (bVar28) {
          uVar9 = *(uint *)(iVar27 + (uVar9 & uVar18) * 8);
        }
        else {
          uVar9 = *(uint *)(iVar27 + (uVar9 & uVar18) * 8 + 4);
          local_34 = uVar10;
        }
      }
    }
    *(int *)(param_2 + 0x1c) = local_50 + -8;
  }
LAB_01bc29bc:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar26;
}

