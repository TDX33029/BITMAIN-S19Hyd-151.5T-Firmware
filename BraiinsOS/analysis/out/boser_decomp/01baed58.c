// FUN_01baed58 @ 01baed58 size=2380 calls_out=4 calls_in=9
// strings: 

uint FUN_01baed58(int param_1,uint *param_2,int param_3,int *param_4,int param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  bool bVar30;
  int local_84;
  uint local_80;
  uint local_7c;
  int local_6c;
  uint *local_68;
  uint *local_60;
  uint *local_5c;
  uint *local_54;
  uint local_48;
  int local_3c;
  uint local_30;
  int local_2c;
  
  iVar10 = *(int *)(param_1 + 0xc0);
  local_2c = DAT_01d53560;
  iVar13 = *(int *)(param_1 + 0x5c);
  if (param_5 == 5) {
    lVar1 = (ulonglong)*param_2 * 0xbb000000;
    uVar3 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1 >> (0x40U - iVar10 & 0xff) | uVar3 << (iVar10 - 0x20U & 0xff) |
            uVar3 >> (0x20U - iVar10 & 0xff);
  }
  else if (param_5 == 6) {
    lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
    uVar3 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1 >> (0x40U - iVar10 & 0xff) | uVar3 << (iVar10 - 0x20U & 0xff) |
            uVar3 >> (0x20U - iVar10 & 0xff);
  }
  else {
    uVar3 = *param_2 * -0x61c8864f >> (0x20U - iVar10 & 0xff);
  }
  uVar28 = 0;
  uVar25 = *(uint *)(iVar13 + uVar3 * 4);
  iVar10 = *(int *)(param_1 + 4);
  uVar14 = (int)param_2 - iVar10;
  uVar2 = FUN_01b9b7d4(param_1,uVar14,*(undefined4 *)(param_1 + 0xb8));
  iVar15 = *(int *)(param_1 + 100);
  uVar16 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  local_3c = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  if (uVar16 < uVar14) {
    uVar17 = uVar14 - uVar16;
  }
  else {
    uVar17 = 0;
  }
  iVar21 = local_3c;
  uVar7 = uVar17;
  if (uVar17 < uVar2) {
    uVar7 = uVar2;
  }
  while( true ) {
    uVar22 = uVar25;
    puVar11 = (uint *)(iVar15 + (uVar22 & uVar16) * 8);
    puVar18 = puVar11 + 1;
    if ((uVar22 <= uVar7) || (*puVar18 != 1)) goto LAB_01baeea0;
    if (iVar21 == 1) break;
    *puVar18 = uVar28;
    uVar25 = *puVar11;
    iVar21 = iVar21 + -1;
    uVar28 = uVar22;
  }
  *puVar18 = 0;
  *puVar11 = 0;
LAB_01baeea0:
  iVar19 = *(int *)(param_1 + 8);
  while( true ) {
    uVar25 = *(uint *)(param_1 + 0xc);
    iVar20 = iVar19 + uVar25;
    if (uVar28 == 0) break;
    uVar22 = *(uint *)(iVar15 + (uVar28 & uVar16) * 8 + 4);
    iVar6 = *(int *)(param_1 + 100);
    uVar23 = (1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff)) - 1;
    iVar27 = *(int *)(param_1 + 4);
    bVar30 = uVar25 <= uVar28;
    local_6c = iVar27;
    if (!bVar30) {
      local_6c = iVar19;
    }
    local_6c = local_6c + uVar28;
    iVar12 = 1;
    if (bVar30) {
      iVar12 = param_3;
    }
    uVar24 = uVar28 & uVar23;
    if (!bVar30) {
      iVar12 = iVar20;
    }
    local_54 = (uint *)(iVar6 + uVar24 * 8);
    local_68 = local_54 + 1;
    uVar24 = *(uint *)(iVar6 + uVar24 * 8);
    local_7c = *(uint *)(param_1 + 0x10);
    if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar28 - local_7c) {
      local_7c = uVar28 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
    }
    local_80 = 0;
    local_60 = (uint *)0x0;
    for (local_84 = iVar21; local_84 != 0 && local_7c < uVar24; local_84 = local_84 + -1) {
      if (local_60 < local_80) {
        puVar11 = local_60;
      }
      else {
        puVar11 = (uint *)local_80;
      }
      if ((param_6 == 1) && (uVar24 + (int)puVar11 < uVar25)) {
        if (uVar28 < uVar25) {
          iVar26 = iVar19;
          goto LAB_01baf2b4;
        }
        iVar26 = iVar19 + uVar24;
        iVar4 = FUN_01b9b970(local_6c + (int)puVar11,iVar26 + (int)puVar11,iVar12,iVar20,
                             iVar27 + uVar25);
        uVar5 = (int)puVar11 + iVar4;
        if (uVar25 <= uVar24 + uVar5) {
          iVar26 = iVar27 + uVar24;
        }
      }
      else {
        iVar26 = iVar27;
LAB_01baf2b4:
        iVar26 = iVar26 + uVar24;
        iVar4 = FUN_01b9b884(local_6c + (int)puVar11,iVar26 + (int)puVar11);
        uVar5 = (int)puVar11 + iVar4;
      }
      if (iVar12 == local_6c + uVar5) break;
      uVar9 = uVar23 & uVar24;
      puVar11 = (uint *)(iVar6 + uVar9 * 8);
      if (*(byte *)(iVar26 + uVar5) < *(byte *)(local_6c + uVar5)) {
        *local_54 = uVar24;
        if (uVar24 <= uVar7) {
          local_54 = &local_30;
          break;
        }
        uVar24 = puVar11[1];
        local_54 = puVar11 + 1;
        local_60 = (uint *)uVar5;
      }
      else {
        *local_68 = uVar24;
        if (uVar24 <= uVar7) {
          local_68 = &local_30;
          break;
        }
        uVar24 = *(uint *)(iVar6 + uVar9 * 8);
        local_80 = uVar5;
        local_68 = puVar11;
      }
    }
    iVar21 = iVar21 + 1;
    *local_68 = 0;
    *local_54 = 0;
    uVar28 = uVar22;
  }
  local_5c = (uint *)(iVar15 + (uVar14 & uVar16) * 8);
  local_60 = (uint *)(iVar15 + (uVar14 & uVar16) * 8 + 4);
  local_6c = uVar14 + 9;
  uVar28 = *(uint *)(iVar13 + uVar3 * 4);
  *(uint *)(iVar13 + uVar3 * 4) = uVar14;
  local_68 = (uint *)0x0;
  local_54 = (uint *)0x0;
  local_48 = 0;
  while( true ) {
    bVar29 = local_3c != 0;
    bVar30 = uVar2 < uVar28 && bVar29;
    if (uVar2 >= uVar28 || !bVar29) break;
    if (local_54 < local_68) {
      puVar11 = local_54;
    }
    else {
      puVar11 = local_68;
    }
    if ((param_6 == 1) && (uVar28 + (int)puVar11 < uVar25)) {
      iVar21 = iVar19 + uVar28;
      iVar13 = FUN_01b9b970((int)param_2 + (int)puVar11,iVar21 + (int)puVar11,param_3,iVar20,
                            iVar10 + uVar25);
      uVar3 = (int)puVar11 + iVar13;
      if (uVar25 <= uVar28 + uVar3) {
        iVar21 = iVar10 + uVar28;
      }
    }
    else {
      iVar21 = iVar10 + uVar28;
      iVar13 = FUN_01b9b884((int)param_2 + (int)puVar11,iVar21 + (int)puVar11,param_3);
      uVar3 = (int)puVar11 + iVar13;
    }
    if (local_48 < uVar3) {
      if (local_6c - uVar28 < uVar3) {
        local_6c = uVar28 + uVar3;
      }
      if (LZCOUNT(*param_4) - LZCOUNT((uVar14 - uVar28) + 1) < (int)((uVar3 - local_48) * 4)) {
        *param_4 = (uVar14 - uVar28) + 3;
        local_48 = uVar3;
      }
      if (param_3 == (int)param_2 + uVar3) {
        if (param_6 != 2) goto LAB_01baef4c;
        local_3c = 0;
        bVar29 = false;
        break;
      }
    }
    puVar11 = (uint *)(iVar15 + (uVar28 & uVar16) * 8);
    if (*(byte *)(iVar21 + uVar3) < *(byte *)((int)param_2 + uVar3)) {
      *local_5c = uVar28;
      if (uVar28 <= uVar17) {
        local_5c = &local_30;
        goto LAB_01baef4c;
      }
      uVar28 = puVar11[1];
      local_5c = puVar11 + 1;
      local_54 = (uint *)uVar3;
    }
    else {
      *local_60 = uVar28;
      if (uVar28 <= uVar17) {
        local_60 = &local_30;
        goto LAB_01baef4c;
      }
      uVar28 = *(uint *)(iVar15 + (uVar28 & uVar16) * 8);
      local_68 = (uint *)uVar3;
      local_60 = puVar11;
    }
    local_3c = local_3c + -1;
  }
  bVar30 = bVar29;
LAB_01baef4c:
  *local_60 = 0;
  *local_5c = 0;
  if (param_6 != 2) {
    bVar30 = false;
  }
  if (!bVar30) goto LAB_01baf050;
  piVar8 = *(int **)(param_1 + 0xb4);
  iVar10 = piVar8[0x30];
  if (param_5 == 5) {
    uVar28 = *param_2;
    uVar3 = 0xbb000000;
    uVar25 = param_2[1];
LAB_01baf528:
    uVar25 = uVar3 * uVar25 + uVar28 * -0x30e44324 +
             (int)((ulonglong)uVar3 * (ulonglong)uVar28 >> 0x20);
    uVar3 = (uint)((ulonglong)uVar3 * (ulonglong)uVar28) >> (0x40U - iVar10 & 0xff) |
            uVar25 << (iVar10 - 0x20U & 0xff) | uVar25 >> (0x20U - iVar10 & 0xff);
  }
  else {
    if (param_5 == 6) {
      uVar28 = *param_2;
      uVar25 = param_2[1];
      uVar3 = 0xbf9b0000;
      goto LAB_01baf528;
    }
    uVar3 = *param_2 * -0x61c8864f >> (0x20U - iVar10 & 0xff);
  }
  uVar28 = *(uint *)(piVar8[0x17] + uVar3 * 4);
  iVar13 = *(int *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 0xc);
  iVar21 = piVar8[1];
  iVar19 = *piVar8;
  uVar2 = iVar19 - iVar21;
  uVar3 = piVar8[4];
  iVar10 = *(int *)(param_1 + 0x10);
  iVar20 = piVar8[0x19];
  uVar25 = ~(-1 << (piVar8[0x2f] - 1U & 0xff));
  if (uVar25 < uVar2 - uVar3) {
    uVar14 = uVar2 - uVar25;
  }
  else {
    uVar14 = uVar3;
  }
  uVar16 = 0;
  uVar17 = 0;
  for (; local_3c != 0 && uVar3 < uVar28; local_3c = local_3c + -1) {
    if (uVar16 < uVar17) {
      uVar7 = uVar16;
    }
    else {
      uVar7 = uVar17;
    }
    iVar27 = iVar21 + uVar28;
    iVar6 = FUN_01b9b970((int)param_2 + uVar7,iVar27 + uVar7,param_3,iVar19,iVar13 + iVar15);
    uVar7 = uVar7 + iVar6;
    if (uVar2 <= uVar28 + uVar7) {
      iVar27 = iVar13 + (iVar10 - uVar2) + uVar28;
    }
    if (local_48 < uVar7) {
      iVar6 = (uVar2 + (-iVar10 - iVar13)) - uVar28;
      if (LZCOUNT(*param_4 + 1) - LZCOUNT((int)param_2 + iVar6 + 1) < (int)((uVar7 - local_48) * 4))
      {
        *param_4 = (int)param_2 + iVar6 + 3;
        local_48 = uVar7;
      }
      if (param_3 == (int)param_2 + uVar7) break;
    }
    if (*(byte *)(iVar27 + uVar7) < *(byte *)((int)param_2 + uVar7)) {
      if (uVar28 <= uVar14) break;
      uVar28 = *(uint *)(iVar20 + (uVar25 & uVar28) * 8 + 4);
      uVar16 = uVar7;
      uVar7 = uVar17;
    }
    else {
      if (uVar28 <= uVar14) break;
      uVar28 = *(uint *)(iVar20 + (uVar25 & uVar28) * 8);
    }
    uVar17 = uVar7;
  }
LAB_01baf050:
  *(int *)(param_1 + 0x1c) = local_6c + -8;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_48;
}

