// FUN_00659d48 @ 00659d48 size=3088 calls_out=16 calls_in=2
// strings: 

void FUN_00659d48(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  uint *puVar21;
  uint unaff_r5;
  int *piVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined *puVar31;
  undefined4 local_290;
  undefined4 local_28c;
  undefined1 auStack_280 [260];
  undefined4 local_17c;
  uint *local_178;
  uint local_174;
  uint local_170 [4];
  int local_160;
  uint local_15c;
  uint uStack_158;
  int *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148;
  byte abStack_144 [211];
  byte local_71;
  byte local_45;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_28;
  
  if ((param_3 & 1) == 0) {
    iVar5 = 0;
    FUN_01bed93e(local_170,0,0x100);
    do {
      *(char *)((int)local_170 + iVar5) = (char)iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x100);
    FUN_01bed4e2(auStack_280,local_170,0xff);
    unaff_r5 = 0x100;
    bVar3 = local_71;
  }
  else {
    FUN_01bed4e2(auStack_280,param_4 + 0x48,0xff);
    bVar3 = *(byte *)(param_4 + 0x147);
  }
  uVar29 = *(uint *)(param_4 + 8);
  FUN_0065ec80(&local_17c,uVar29);
  uVar27 = *(uint *)(param_4 + 0x38);
  uVar24 = 0;
  if ((0x3fffffff < uVar27) || (unaff_r5 = uVar27 * 4, 0x7ffffffc < unaff_r5)) {
LAB_00659e20:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar24,unaff_r5);
  }
  uVar28 = *(undefined4 *)(param_4 + 0x34);
  if (unaff_r5 == 0) {
    iVar5 = 4;
    uVar19 = 0;
  }
  else {
    uVar24 = 4;
    iVar5 = FUN_01298504(unaff_r5,4);
    if (iVar5 == 0) goto LAB_00659e20;
    uVar19 = uVar27;
  }
  FUN_01bed4e2(iVar5,uVar28,unaff_r5);
  piVar22 = *(int **)(param_4 + 0x3c);
  if (piVar22 == (int *)0x0) {
    uVar13 = uVar29;
  }
  else {
    do {
      iVar6 = *piVar22;
      bVar4 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar4);
    *piVar22 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_0065a970:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x65a970);
      (*pcVar1)();
    }
    local_290 = *(undefined4 *)(param_4 + 0x40);
    local_28c = *(undefined4 *)(param_4 + 0x44);
    uVar13 = *(uint *)(param_4 + 8);
  }
  uVar2 = *(undefined1 *)(param_4 + 0x160);
  FUN_01bed4e2(abStack_144,auStack_280,0xff);
  local_44 = *(undefined4 *)(param_4 + 0x148);
  local_40 = *(undefined4 *)(param_4 + 0x14c);
  local_14c = local_28c;
  local_148 = bVar3 + 1;
  local_150 = local_290;
  iVar23 = *(int *)(param_4 + 4);
  uVar10 = *(uint *)(param_4 + 0x14);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_170[2] = 0;
  local_170[0] = 0;
  iVar14 = *(int *)(param_4 + 0x10);
  uVar30 = 0;
  uVar11 = *(uint *)(param_4 + 0x2c);
  iVar15 = *(int *)(param_4 + 0x28);
  local_170[1] = 4;
  iVar6 = iVar23;
  local_170[3] = uVar19;
  local_160 = iVar5;
  local_15c = uVar27;
  uStack_158 = uVar29;
  local_154 = piVar22;
  local_45 = bVar3;
  local_2c = uVar2;
  do {
    uVar27 = local_170[2];
    uVar29 = uVar13;
    iVar5 = iVar6;
    uVar19 = uVar30;
    if (uVar13 < uVar30) {
      uVar29 = uVar30;
    }
    while( true ) {
      if (iVar5 == iVar23 + uVar13 * 0x14) {
        if (local_174 != 0) {
          puVar31 = &DAT_01c03b18;
          puVar20 = &DAT_01c03b38;
          puVar16 = local_178;
          goto LAB_0065a518;
        }
        local_174 = 0;
        puVar20 = &DAT_01c03be8;
        uVar26 = *(uint *)(param_4 + 0x150);
        goto LAB_0065a964;
      }
      if (uVar29 == uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c03cd8);
      }
      iVar6 = iVar5 + 0x14;
      uVar30 = uVar19 + 1;
      if (uVar19 != 1) break;
      if (local_174 < 2) {
        puVar20 = &DAT_01c03c48;
        uVar26 = 1;
        goto LAB_0065a964;
      }
      local_178[1] = 1;
      iVar5 = iVar6;
      uVar19 = uVar30;
    }
    puVar16 = (uint *)(iVar23 + uVar19 * 0x14);
    uVar29 = *puVar16;
    if (uVar29 == 0) {
      uVar26 = 0;
      if (*(uint *)(iVar5 + 0x10) < param_2) goto LAB_0065a108;
LAB_0065a1e0:
      if (local_170[2] == local_170[0]) {
        FUN_01a54b48(local_170);
      }
      uVar29 = uVar27 + 1;
      *(uint *)(local_170[1] + uVar27 * 4) = uVar26;
      uVar24 = *(undefined4 *)(iVar5 + 0xc);
      if (uVar29 == local_170[0]) {
        local_170[2] = uVar29;
        FUN_01a54b48(local_170);
      }
      *(undefined4 *)(local_170[1] + uVar29 * 4) = uVar24;
      local_170[2] = uVar27 + 2;
      uVar26 = *puVar16;
      local_28 = 0;
      if (uVar26 != 0) {
        if (uVar10 <= uVar26) goto LAB_0065a958;
        uVar8 = 0;
        uVar29 = local_170[2];
LAB_0065a264:
        pbVar12 = (byte *)(iVar14 + uVar26 * 9);
        uVar26 = *(uint *)(pbVar12 + 5);
        bVar3 = abStack_144[*pbVar12];
        *(byte *)((int)&local_28 + uVar8) = bVar3;
        uVar25 = local_28;
        uVar7 = uVar8 + 1;
        if (uVar7 == 4) {
          if (uVar29 == local_170[0]) {
            FUN_01a54b48(local_170);
          }
          uVar7 = 0;
          *(uint *)(local_170[1] + uVar29 * 4) = uVar25;
          uVar25 = uVar29 + 1;
          local_28 = 0;
          local_170[2] = uVar25;
          if (uVar26 == 0) goto LAB_0065a328;
LAB_0065a2d8:
          uVar8 = uVar7;
          uVar29 = uVar25;
          if (uVar10 <= uVar26) goto LAB_0065a958;
          goto LAB_0065a264;
        }
        if (uVar26 != 0) {
          uVar25 = uVar29;
          goto LAB_0065a2d8;
        }
        if (uVar8 < 3) {
          FUN_01bed93e((int)&local_28 + uVar8 + 1,bVar3,3 - uVar8);
        }
        uVar26 = local_28;
        if (uVar29 == local_170[0]) {
          FUN_01a54b48(local_170);
        }
        *(uint *)(local_170[1] + uVar29 * 4) = uVar26;
LAB_0065a328:
        uVar26 = *puVar16;
        while( true ) {
          local_170[2] = uVar29 + 1;
          uVar29 = local_170[2];
          if (uVar26 == 0) break;
          if (uVar10 <= uVar26) goto LAB_0065a958;
          iVar18 = iVar14 + uVar26 * 9;
          uVar24 = *(undefined4 *)(iVar18 + 1);
          uVar26 = *(uint *)(iVar18 + 5);
          if (local_170[2] == local_170[0]) {
            FUN_01a54b48(local_170);
          }
          *(undefined4 *)(local_170[1] + uVar29 * 4) = uVar24;
        }
      }
    }
    else {
      iVar18 = -1;
      uVar26 = uVar29;
      do {
        iVar17 = iVar18;
        if (uVar10 <= uVar26) goto LAB_0065a958;
        uVar26 = *(uint *)(iVar14 + uVar26 * 9 + 5);
        iVar18 = iVar17 + 1;
      } while (uVar26 != 0);
      if ((*(uint *)(iVar5 + 0x10) < param_2) || (uVar26 = iVar17 + 2, 0x7f < uVar26)) {
LAB_0065a108:
        if (local_170[2] == local_170[0]) {
          FUN_01a54b48(local_170);
        }
        uVar29 = uVar27 + 1;
        *(undefined4 *)(local_170[1] + uVar27 * 4) = 0xff;
        uVar24 = *(undefined4 *)(iVar5 + 0xc);
        if (uVar29 == local_170[0]) {
          local_170[2] = uVar29;
          FUN_01a54b48(local_170);
        }
        *(undefined4 *)(local_170[1] + uVar29 * 4) = uVar24;
        uVar29 = uVar27 + 2;
        local_170[2] = uVar29;
        FUN_0065f438(local_170,1,local_45 + 1);
        if (local_170[2] <= uVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_003d402b,0x47,&DAT_01c03a68);
        }
        uVar26 = *puVar16;
        while (uVar26 != 0) {
          if (uVar10 <= uVar26) goto LAB_0065a958;
          pbVar12 = (byte *)(iVar14 + uVar26 * 9);
          uVar26 = uVar29 + abStack_144[*pbVar12];
          if (local_170[2] <= uVar26) {
            puVar20 = &DAT_01c03a78;
            local_174 = local_170[2];
            goto LAB_0065a964;
          }
          uVar8 = *(uint *)(pbVar12 + 5);
          *(undefined4 *)(local_170[1] + uVar26 * 4) = *(undefined4 *)(pbVar12 + 1);
          uVar26 = uVar8;
        }
      }
      else {
        if ((iVar18 != 0) || (uVar26 = 1, *(int *)(iVar5 + 8) != 0)) goto LAB_0065a1e0;
        if (uVar10 <= uVar29) {
          uVar26 = uVar29;
LAB_0065a958:
          puVar20 = &DAT_01d08f58;
          local_174 = uVar10;
          goto LAB_0065a964;
        }
        pbVar12 = (byte *)(iVar14 + uVar29 * 9);
        uVar24 = *(undefined4 *)(pbVar12 + 1);
        bVar3 = abStack_144[*pbVar12];
        if (local_170[2] == local_170[0]) {
          FUN_01a54b48(local_170);
        }
        uVar29 = uVar27 + 1;
        *(uint *)(local_170[1] + uVar27 * 4) = (uint)bVar3 << 8 | 0xfe;
        uVar28 = *(undefined4 *)(iVar5 + 0xc);
        if (uVar29 == local_170[0]) {
          local_170[2] = uVar29;
          FUN_01a54b48(local_170);
        }
        *(undefined4 *)(local_170[1] + uVar29 * 4) = uVar28;
        uVar29 = uVar27 + 2;
        if (uVar29 == local_170[0]) {
          local_170[2] = uVar29;
          FUN_01a54b48(local_170);
        }
        *(undefined4 *)(local_170[1] + uVar29 * 4) = uVar24;
        local_170[2] = uVar27 + 3;
      }
    }
    uVar29 = local_170[2];
    if (*(int *)(iVar5 + 8) != 0) {
      puVar16 = (uint *)(iVar23 + uVar19 * 0x14 + 8);
      uVar8 = *puVar16;
      if (uVar8 == 0) {
        uVar26 = 0;
      }
      else {
        iVar5 = -1;
        uVar26 = uVar8;
        do {
          iVar18 = iVar5;
          if (uVar11 <= uVar26) {
            puVar20 = &DAT_01d08f68;
            local_174 = uVar11;
            goto LAB_0065a964;
          }
          uVar26 = *(uint *)(iVar15 + uVar26 * 8 + 4);
          iVar5 = iVar18 + 1;
        } while (uVar26 != 0);
        if (iVar5 == 0) {
          if (uVar8 < uVar11) {
            uVar26 = *(uint *)(iVar15 + uVar8 * 8);
            local_28 = uVar26 & 0x80000000;
            if (local_28 == 0) {
              if (local_170[2] == local_170[0]) {
                FUN_01a54b48(local_170);
              }
              *(uint *)(local_170[1] + uVar29 * 4) = uVar26 | 0x80000000;
              local_170[2] = uVar29 + 1;
              goto LAB_0065a4c0;
            }
            FUN_019b6878(0,&DAT_00533278,&local_28,0);
            goto LAB_0065a970;
          }
          puVar20 = &DAT_01d08f68;
          local_174 = uVar11;
          uVar26 = uVar8;
          goto LAB_0065a964;
        }
        uVar26 = iVar18 + 2;
        local_28 = uVar26 & 0x80000000;
        if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01304210(0,&DAT_00533278,&local_28,0);
        }
        local_28 = 0;
      }
      if (local_170[2] == local_170[0]) {
        FUN_01a54b48(local_170);
      }
      *(uint *)(local_170[1] + uVar29 * 4) = uVar26;
      uVar26 = *puVar16;
      while( true ) {
        local_170[2] = uVar29 + 1;
        uVar29 = local_170[2];
        if (uVar26 == 0) break;
        if (uVar11 <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar26,uVar11,&DAT_01d08f68);
        }
        puVar9 = (undefined4 *)(iVar15 + uVar26 * 8);
        uVar24 = *puVar9;
        uVar26 = puVar9[1];
        if (local_170[2] == local_170[0]) {
          FUN_006520b4(local_170,local_170[2],1,4,4);
        }
        *(undefined4 *)(local_170[1] + uVar29 * 4) = uVar24;
      }
    }
LAB_0065a4c0:
    if (local_174 <= uVar19) break;
    local_178[uVar19] = uVar27;
  } while( true );
  puVar20 = &DAT_01c03c38;
  uVar26 = uVar19;
  goto LAB_0065a964;
LAB_0065a518:
  do {
    puVar21 = puVar16 + 1;
    uVar27 = *puVar16;
    if (uVar27 != 1) {
      if (local_170[2] < uVar27) {
        puVar31 = &DAT_01c03c28;
        uVar29 = local_170[2];
        uVar19 = local_170[2];
        goto LAB_0065a768;
      }
      if (local_170[2] == uVar27) {
        uVar26 = 0;
        local_174 = 0;
        puVar20 = &DAT_01d08f28;
        goto LAB_0065a964;
      }
      uVar29 = local_170[2] - uVar27;
      pbVar12 = (byte *)(local_170[1] + uVar27 * 4);
      bVar3 = *pbVar12;
      uVar13 = (uint)bVar3;
      if (uVar13 == 0xfe) {
        if (uVar29 == 1) {
          uVar26 = 1;
          local_174 = 1;
          puVar20 = &DAT_01c03b48;
          goto LAB_0065a964;
        }
        uVar26 = *(uint *)(pbVar12 + 4);
        if (local_174 <= uVar26) {
          puVar20 = &DAT_01c03b58;
          goto LAB_0065a964;
        }
        *(uint *)(pbVar12 + 4) = local_178[uVar26];
        if (uVar29 == 2) {
          uVar26 = 2;
          local_174 = 2;
          puVar20 = &DAT_01c03b68;
          goto LAB_0065a964;
        }
        uVar26 = *(uint *)(pbVar12 + 8);
        if (local_174 <= uVar26) {
          puVar20 = &DAT_01c03b78;
          goto LAB_0065a964;
        }
        *(uint *)(pbVar12 + 8) = local_178[uVar26];
      }
      else if (uVar13 == 0xff) {
        if (uVar29 == 1) {
          uVar26 = 1;
          local_174 = 1;
          puVar20 = &DAT_01c03b88;
          goto LAB_0065a964;
        }
        uVar26 = *(uint *)(pbVar12 + 4);
        if (local_174 <= uVar26) {
          puVar20 = &DAT_01c03b98;
          goto LAB_0065a964;
        }
        uVar19 = uVar29 - 2;
        *(uint *)(pbVar12 + 4) = local_178[uVar26];
        if (uVar19 < local_148) {
          uVar27 = 0;
          uVar29 = local_148;
          puVar31 = &DAT_01c03ba8;
          goto LAB_0065a768;
        }
        if (local_148 != 0) {
          iVar5 = local_148 << 2;
          puVar16 = (uint *)(pbVar12 + 8);
          do {
            uVar26 = *puVar16;
            if (local_174 <= uVar26) {
              puVar20 = &DAT_01c03bb8;
              goto LAB_0065a964;
            }
            iVar5 = iVar5 + -4;
            *puVar16 = local_178[uVar26];
            puVar16 = puVar16 + 1;
          } while (iVar5 != 0);
        }
      }
      else {
        uVar27 = uVar13 & 3;
        if ((bVar3 & 3) != 0) {
          uVar27 = 1;
        }
        if (uVar29 == 1) {
          uVar26 = 1;
          local_174 = 1;
          puVar20 = &DAT_01c03af8;
          goto LAB_0065a964;
        }
        uVar26 = *(uint *)(pbVar12 + 4);
        if (local_174 <= uVar26) {
          puVar20 = &DAT_01c03b08;
          goto LAB_0065a964;
        }
        uVar27 = (bVar3 >> 2) + uVar27 + 2;
        *(uint *)(pbVar12 + 4) = local_178[uVar26];
        if (uVar29 < uVar27) {
          uVar19 = uVar29;
LAB_0065a768:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar27,uVar29,uVar19,puVar31);
        }
        uVar19 = uVar29 - uVar27;
        if (uVar19 < uVar13) {
          uVar27 = 0;
          uVar29 = uVar13;
          puVar31 = &DAT_01c03b28;
          goto LAB_0065a768;
        }
        if (uVar13 != 0) {
          iVar5 = uVar13 << 2;
          puVar16 = (uint *)(pbVar12 + uVar27 * 4);
          do {
            uVar26 = *puVar16;
            if (local_174 <= uVar26) goto LAB_0065a964;
            iVar5 = iVar5 + -4;
            *puVar16 = local_178[uVar26];
            puVar16 = puVar16 + 1;
          } while (iVar5 != 0);
        }
      }
    }
    puVar16 = puVar21;
  } while (puVar21 != local_178 + local_174);
  uVar26 = *(uint *)(param_4 + 0x150);
  if (uVar26 < local_174) {
    local_3c = local_178[uVar26];
    uVar26 = *(uint *)(param_4 + 0x154);
    if (uVar26 < local_174) {
      local_38 = local_178[uVar26];
      uVar26 = *(uint *)(param_4 + 0x158);
      if (uVar26 < local_174) {
        local_34 = local_178[uVar26];
        uVar26 = *(uint *)(param_4 + 0x15c);
        if (uVar26 < local_174) {
          local_30 = local_178[uVar26];
          if (((local_170[2] < local_170[0]) &&
              (iVar5 = FUN_006641a8(local_170,local_170[2],4,4), iVar5 != -0x7fffffff)) ||
             ((local_15c < local_170[3] &&
              (iVar5 = FUN_006641a8(local_170 + 3,local_15c,4,4), iVar5 != -0x7fffffff)))) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620();
          }
          FUN_01bed4e2(param_1,local_170,0x148);
          FUN_0134aee0(local_17c,local_178,4,4);
          return;
        }
        puVar20 = &DAT_01c03c18;
      }
      else {
        puVar20 = &DAT_01c03c08;
      }
    }
    else {
      puVar20 = &DAT_01c03bf8;
    }
  }
  else {
    puVar20 = &DAT_01c03be8;
  }
LAB_0065a964:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar26,local_174,puVar20);
}

