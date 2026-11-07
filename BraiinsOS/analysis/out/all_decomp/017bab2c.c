// FUN_017bab2c @ 017bab2c size=5220 calls_out=3 calls_in=1
// strings: 

void FUN_017bab2c(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5,int param_6
                 )

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  char *pcVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  char *unaff_r8;
  char *pcVar31;
  char *pcVar32;
  int iVar33;
  int iVar34;
  uint *puVar35;
  int iVar36;
  uint *puVar37;
  char *pcVar38;
  uint *puVar39;
  uint *puVar40;
  bool bVar41;
  char *local_b0;
  char *local_a8;
  uint local_98;
  uint local_90;
  char *local_84;
  int local_7c;
  char *local_70;
  char *local_6c;
  uint *local_68;
  char *local_60;
  char *local_5c;
  uint local_58;
  uint *local_54;
  uint *local_4c;
  
  uVar7 = DAT_018ddaf8;
  iVar29 = *(int *)(param_1 + 4);
  pcVar10 = *(char **)(param_1 + 0x10);
  uVar22 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  pcVar38 = (char *)((int)param_4 + (param_5 - iVar29));
  bVar41 = (uint)((int)pcVar38 - (int)pcVar10) <= uVar22;
  if (!bVar41) {
    pcVar38 = pcVar38 + -uVar22;
  }
  if (bVar41) {
    pcVar38 = pcVar10;
  }
  bVar41 = *(int *)(param_1 + 0x18) != 0;
  pcVar15 = (char *)0x0;
  if (bVar41) {
    pcVar15 = pcVar10;
  }
  pcVar10 = *(char **)(param_1 + 0xc);
  if (!bVar41) {
    pcVar15 = pcVar38;
  }
  if (pcVar10 <= pcVar15) {
    FUN_017b68bc(param_1,param_2,param_3,param_4);
    return;
  }
  iVar11 = *(int *)(param_1 + 0xc0);
  pcVar38 = (char *)((int)param_4 + (-(int)pcVar15 - iVar29));
  puVar39 = (uint *)((int)param_4 + param_5);
  iVar12 = *(int *)(param_1 + 0xcc) + 1;
  iVar34 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xcc) == 0) {
    iVar12 = 2;
  }
  pcVar16 = (char *)*param_3;
  pcVar31 = (char *)param_3[1];
  pcVar32 = pcVar31;
  if (pcVar31 < pcVar38) {
    pcVar32 = (char *)0x0;
    local_b0 = pcVar31;
  }
  puVar17 = (uint *)(pcVar10 + iVar34);
  puVar18 = puVar39 + -2;
  if (pcVar31 >= pcVar38) {
    local_b0 = (char *)0x0;
  }
  iVar33 = *(int *)(param_1 + 0x5c);
  if (pcVar16 < pcVar38) {
    unaff_r8 = (char *)0x0;
  }
  puVar8 = (uint *)(pcVar10 + iVar29);
  local_5c = pcVar16;
  pcVar31 = unaff_r8;
  if (pcVar16 >= pcVar38) {
    unaff_r8 = (char *)(uint)(pcVar16 != (char *)0x0);
    local_5c = (char *)0x0;
    pcVar31 = pcVar16;
  }
  local_98 = 0xbfa56300;
  local_68 = param_4;
LAB_017baca4:
  local_90 = 0xbf9b0000;
LAB_017bacb4:
  puVar13 = (uint *)((int)local_68 + iVar12);
  puVar35 = (uint *)((int)puVar13 + 1);
  if (puVar18 <= puVar35) {
LAB_017bb040:
    if (local_5c == (char *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint)unaff_r8 & 1;
    }
    if (uVar22 == 0) {
      if (local_5c == (char *)0x0) {
        local_5c = pcVar31;
      }
      pcVar31 = pcVar32;
    }
    if (local_b0 != (char *)0x0) {
      pcVar31 = local_b0;
    }
    *param_3 = local_5c;
    param_3[1] = pcVar31;
    if ((uVar7 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78((int)puVar39 - (int)local_68,puVar13,uVar7 ^ DAT_018ddaf8,0);
    }
    return;
  }
  local_54 = local_68 + 0x20;
  puVar24 = (uint *)((int)local_68 + 1);
  if (param_6 == 6) {
    uVar28 = *local_68;
    uVar22 = *(uint *)((int)local_68 + 1);
    uVar27 = local_68[1];
    iVar14 = *(int *)((int)local_68 + 5);
    uVar25 = 0xbf9b0000;
LAB_017bafbc:
    uVar27 = uVar25 * uVar27 + uVar28 * -0x30e44324 +
             (int)((ulonglong)uVar25 * (ulonglong)uVar28 >> 0x20);
    uVar23 = uVar25 * iVar14 + uVar22 * -0x30e44324 +
             (int)((ulonglong)uVar25 * (ulonglong)uVar22 >> 0x20);
    uVar27 = (uint)((ulonglong)uVar25 * (ulonglong)uVar28) >> (0x40U - iVar11 & 0xff) |
             uVar27 << (iVar11 - 0x20U & 0xff) | uVar27 >> (0x20U - iVar11 & 0xff);
    local_58 = (uint)((ulonglong)uVar25 * (ulonglong)uVar22) >> (0x40U - iVar11 & 0xff) |
               uVar23 << (iVar11 - 0x20U & 0xff) | uVar23 >> (0x20U - iVar11 & 0xff);
    pcVar38 = *(char **)(iVar33 + uVar27 * 4);
joined_r0x017bb018:
    local_6c = local_5c;
    if (pcVar38 < pcVar10) {
      if (local_5c != (char *)0x0) {
        local_6c = (char *)0x1;
      }
      iVar36 = iVar34;
    }
    else {
      if (local_5c != (char *)0x0) {
        local_6c = (char *)0x1;
      }
      iVar36 = iVar29;
    }
    local_70 = pcVar10 + (int)local_5c;
    local_4c = local_68;
    uVar22 = 0x20 - iVar11;
    local_60 = (char *)iVar12;
    do {
      puVar19 = puVar13;
      pcVar16 = (char *)(((int)puVar19 - iVar29) - (int)local_5c);
      if ((uint)((int)local_70 - ((int)puVar19 - iVar29)) < 4) {
        uVar25 = 0;
      }
      else {
        uVar25 = (uint)local_6c & 1;
      }
      if (pcVar16 < pcVar10) {
        iVar14 = iVar34;
      }
      else {
        iVar14 = iVar29;
      }
      iVar26 = (int)local_4c - iVar29;
      if (uVar25 == 0) {
        uVar28 = *puVar19;
      }
      else {
        uVar28 = *(uint *)(pcVar16 + iVar14);
      }
      *(int *)(iVar33 + uVar27 * 4) = iVar26;
      if (uVar25 == 0) {
        uVar28 = uVar28 ^ 1;
      }
      puVar13 = puVar19;
      if (*puVar19 == uVar28) {
        local_6c = (char *)iVar26;
        goto LAB_017bb0cc;
      }
      if (pcVar38 < pcVar15) {
        uVar25 = *local_4c ^ 1;
      }
      else {
        uVar25 = *(uint *)(pcVar38 + iVar36);
      }
      if (uVar25 == *local_4c) {
        puVar13 = puVar24;
        local_60 = (char *)iVar36;
        local_6c = (char *)iVar26;
        goto LAB_017bb568;
      }
      pcVar38 = *(char **)(iVar33 + local_58 * 4);
      iVar14 = iVar34;
      if (pcVar10 <= pcVar38) {
        iVar14 = iVar29;
      }
      if (param_6 == 6) {
        uVar28 = *puVar19;
        uVar27 = puVar19[1];
        uVar25 = local_90;
LAB_017badac:
        uVar27 = uVar25 * uVar27 + uVar28 * -0x30e44324 +
                 (int)((ulonglong)uVar25 * (ulonglong)uVar28 >> 0x20);
        uVar27 = (uint)((ulonglong)uVar25 * (ulonglong)uVar28) >> (0x40U - iVar11 & 0xff) |
                 uVar27 << (iVar11 - 0x20U & 0xff) | uVar27 >> (uVar22 & 0xff);
      }
      else {
        if (param_6 == 7) {
          uVar28 = *puVar19;
          uVar27 = puVar19[1];
          uVar25 = local_98;
          goto LAB_017badac;
        }
        uVar27 = *puVar19 * -0x61c8864f >> (uVar22 & 0xff);
      }
      *(int *)(iVar33 + local_58 * 4) = (int)puVar24 - iVar29;
      if (pcVar38 < pcVar15) {
        uVar25 = *puVar24 ^ 1;
      }
      else {
        uVar25 = *(uint *)(pcVar38 + iVar14);
      }
      if (uVar25 == *puVar24) goto LAB_017bb8f8;
      pcVar38 = *(char **)(iVar33 + uVar27 * 4);
      uVar25 = *puVar35;
      iVar36 = iVar34;
      if (pcVar10 <= pcVar38) {
        iVar36 = iVar29;
      }
      if (param_6 == 6) {
        uVar23 = puVar35[1];
        uVar28 = local_90;
LAB_017bae2c:
        uVar23 = uVar28 * uVar23 + uVar25 * -0x30e44324 +
                 (int)((ulonglong)uVar28 * (ulonglong)uVar25 >> 0x20);
        local_58 = (uint)((ulonglong)uVar28 * (ulonglong)uVar25) >> (0x40U - iVar11 & 0xff) |
                   uVar23 << (iVar11 - 0x20U & 0xff) | uVar23 >> (uVar22 & 0xff);
      }
      else {
        if (param_6 == 7) {
          uVar23 = puVar35[1];
          uVar28 = local_98;
          goto LAB_017bae2c;
        }
        local_58 = uVar25 * -0x61c8864f >> (uVar22 & 0xff);
      }
      puVar24 = (uint *)((int)puVar19 + (int)local_60);
      puVar9 = (uint *)((int)puVar35 + (int)local_60);
      if (local_54 <= puVar24) {
        HintPreloadData(puVar35 + 0x10);
        local_60 = (char *)((int)local_60 + 1);
        HintPreloadData(puVar35 + 0x20);
        local_54 = local_54 + 0x20;
      }
      puVar13 = puVar18;
      if (puVar18 <= puVar9) goto LAB_017bb040;
      puVar13 = puVar24;
      puVar24 = puVar35;
      puVar35 = puVar9;
      local_4c = puVar19;
    } while( true );
  }
  if (param_6 == 7) {
    uVar28 = *local_68;
    uVar22 = *(uint *)((int)local_68 + 1);
    uVar27 = local_68[1];
    iVar14 = *(int *)((int)local_68 + 5);
    uVar25 = 0xbfa56300;
    goto LAB_017bafbc;
  }
  if (param_6 != 5) {
    uVar27 = *local_68 * -0x61c8864f >> (0x20U - iVar11 & 0xff);
    local_58 = (uint)(*(int *)((int)local_68 + 1) * -0x61c8864f) >> (0x20U - iVar11 & 0xff);
    pcVar38 = *(char **)(iVar33 + uVar27 * 4);
    goto joined_r0x017bb018;
  }
  uVar28 = -iVar11 + 0x40;
  lVar2 = (ulonglong)*local_68 * 0xbb000000;
  lVar3 = (ulonglong)*(uint *)((int)local_68 + 1) * 0xbb000000;
  uVar25 = local_68[1] * -0x45000000 + *local_68 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar22 = *(int *)((int)local_68 + 5) * -0x45000000 + *(uint *)((int)local_68 + 1) * -0x30e44324 +
           (int)((ulonglong)lVar3 >> 0x20);
  local_4c = (uint *)((uint)lVar2 >> (uVar28 & 0xff) | uVar25 << (iVar11 - 0x20U & 0xff) |
                     uVar25 >> (0x20U - iVar11 & 0xff));
  local_58 = (uint)lVar3 >> (uVar28 & 0xff) | uVar22 << (iVar11 - 0x20U & 0xff) |
             uVar22 >> (0x20U - iVar11 & 0xff);
  pcVar38 = *(char **)(iVar33 + (int)local_4c * 4);
  local_a8 = local_5c;
  if (pcVar38 < pcVar10) {
    if (local_5c != (char *)0x0) {
      local_a8 = (char *)0x1;
    }
    local_60 = (char *)iVar34;
  }
  else {
    if (local_5c != (char *)0x0) {
      local_a8 = (char *)0x1;
    }
    local_60 = (char *)iVar29;
  }
  local_84 = pcVar10 + (int)local_5c;
  uVar22 = -iVar11 + 0x20;
  puVar19 = puVar13;
  puVar9 = local_68;
  local_7c = iVar12;
  while( true ) {
    puVar13 = puVar19;
    pcVar16 = (char *)(((int)puVar13 - iVar29) - (int)local_5c);
    if ((uint)((int)local_84 - ((int)puVar13 - iVar29)) < 4) {
      uVar25 = 0;
    }
    else {
      uVar25 = (uint)local_a8 & 1;
    }
    iVar14 = iVar34;
    if (pcVar10 <= pcVar16) {
      iVar14 = iVar29;
    }
    local_6c = (char *)((int)puVar9 - iVar29);
    if (uVar25 == 0) {
      uVar27 = *puVar13;
    }
    else {
      uVar27 = *(uint *)(pcVar16 + iVar14);
    }
    *(char **)(iVar33 + (int)local_4c * 4) = local_6c;
    if (uVar25 == 0) {
      uVar27 = uVar27 ^ 1;
    }
    if (*puVar13 == uVar27) goto LAB_017bb0cc;
    if (pcVar38 < pcVar15) {
      uVar25 = *puVar9 ^ 1;
    }
    else {
      uVar25 = *(uint *)(pcVar38 + (int)local_60);
    }
    if (uVar25 == *puVar9) {
      puVar13 = puVar24;
      local_4c = puVar9;
      goto LAB_017bb568;
    }
    pcVar38 = *(char **)(iVar33 + local_58 * 4);
    local_6c = (char *)((int)puVar24 - iVar29);
    uVar25 = *puVar13;
    iVar14 = iVar34;
    if (pcVar10 <= pcVar38) {
      iVar14 = iVar29;
    }
    uVar27 = puVar13[1];
    *(char **)(iVar33 + local_58 * 4) = local_6c;
    lVar2 = (ulonglong)uVar25 * 0xbb000000;
    uVar25 = uVar27 * -0x45000000 + uVar25 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
    uVar27 = (uint)lVar2 >> (uVar28 & 0xff) | uVar25 << (0x20 - uVar28 & 0xff) |
             uVar25 >> (uVar22 & 0xff);
    if (pcVar38 < pcVar15) {
      uVar25 = *puVar24 ^ 1;
    }
    else {
      uVar25 = *(uint *)(pcVar38 + iVar14);
    }
    if (uVar25 == *puVar24) break;
    pcVar38 = *(char **)(iVar33 + uVar27 * 4);
    local_60 = (char *)iVar34;
    if (pcVar10 <= pcVar38) {
      local_60 = (char *)iVar29;
    }
    puVar19 = (uint *)((int)puVar13 + local_7c);
    puVar30 = (uint *)((int)puVar35 + local_7c);
    lVar2 = (ulonglong)*puVar35 * 0xbb000000;
    uVar25 = puVar35[1] * -0x45000000 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
    local_58 = (uint)lVar2 >> (uVar28 & 0xff) | uVar25 << (0x20 - uVar28 & 0xff) |
               uVar25 >> (uVar22 & 0xff);
    if (local_54 <= puVar19) {
      local_7c = local_7c + 1;
      HintPreloadData(puVar35 + 0x10);
      HintPreloadData(puVar35 + 0x20);
      local_54 = local_54 + 0x20;
    }
    if (puVar18 <= puVar30) goto LAB_017bb040;
    puVar9 = puVar13;
    puVar24 = puVar35;
    puVar35 = puVar30;
    local_4c = (uint *)uVar27;
  }
  goto LAB_017bb900;
LAB_017bb8f8:
  local_6c = (char *)((int)puVar24 - iVar29);
LAB_017bb900:
  local_60 = (char *)iVar14;
  local_58 = uVar27;
  local_4c = puVar24;
LAB_017bb568:
  puVar35 = (uint *)(pcVar38 + (int)local_60);
  pcVar16 = (char *)((int)local_6c - (int)pcVar38);
  if (pcVar38 < pcVar10) {
    local_54 = puVar17;
    puVar19 = (uint *)(pcVar15 + iVar34);
  }
  else {
    local_54 = puVar39;
    puVar19 = puVar8;
  }
  local_60 = pcVar16 + 3;
  puVar24 = puVar13;
  if (local_68 < local_4c && puVar19 < puVar35) {
    iVar14 = 4;
    puVar13 = local_4c;
    puVar9 = puVar35;
    do {
      puVar35 = (uint *)((int)puVar9 + -1);
      local_4c = (uint *)((int)puVar13 + -1);
      if (*(char *)local_4c != *(char *)puVar35) {
        local_b0 = local_5c;
        puVar35 = puVar9;
        local_5c = pcVar16;
        local_4c = puVar13;
        goto LAB_017bb118;
      }
      iVar14 = iVar14 + 1;
      puVar13 = local_4c;
      puVar9 = puVar35;
    } while (local_68 < local_4c && puVar19 < puVar35);
    local_b0 = local_5c;
    local_5c = pcVar16;
  }
  else {
    iVar14 = 4;
    local_b0 = local_5c;
    local_5c = pcVar16;
  }
LAB_017bb118:
  puVar9 = (uint *)((int)puVar35 + iVar14);
  puVar19 = (uint *)((int)local_4c + iVar14);
  puVar13 = (uint *)((int)puVar19 + ((int)local_54 - (int)puVar9));
  if (puVar39 < puVar13) {
    puVar13 = puVar39;
  }
  puVar30 = (uint *)((int)puVar13 + -3);
  if (puVar19 < puVar30) {
    if (*(uint *)((int)puVar35 + iVar14) == *(uint *)((int)local_4c + iVar14)) {
      puVar35 = puVar19 + 1;
      puVar40 = puVar9 + 1;
      if (puVar30 <= puVar35) goto LAB_017bb368;
      uVar22 = *puVar40;
      uVar25 = *puVar35;
      if (uVar22 == uVar25) {
        do {
          puVar35 = puVar35 + 1;
          puVar40 = puVar40 + 1;
          if (puVar30 <= puVar35) goto LAB_017bb368;
          uVar22 = *puVar40;
          uVar25 = *puVar35;
        } while (uVar22 == uVar25);
      }
      uVar22 = uVar22 ^ uVar25;
      bVar4 = (byte)uVar22;
      bVar5 = (byte)(uVar22 >> 8);
      bVar6 = (byte)(uVar22 >> 0x10);
      bVar1 = (byte)(uVar22 >> 0x18);
      pcVar38 = (char *)((int)puVar35 +
                        (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                         bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                       | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                     | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                        (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                         bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                       | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                     | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                        (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                         bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                       | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                     | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                        (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                         bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                       | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                     | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                        (int)puVar19));
    }
    else {
      uVar22 = *(uint *)((int)puVar35 + iVar14) ^ *(uint *)((int)local_4c + iVar14);
      bVar4 = (byte)uVar22;
      bVar5 = (byte)(uVar22 >> 8);
      bVar6 = (byte)(uVar22 >> 0x10);
      bVar1 = (byte)(uVar22 >> 0x18);
      pcVar38 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
  }
  else {
    puVar35 = puVar19;
    puVar40 = puVar9;
LAB_017bb368:
    if (puVar35 < (uint *)((int)puVar13 + -1)) {
      if ((short)*puVar40 == (short)*puVar35) {
        puVar35 = (uint *)((int)puVar35 + 2);
        puVar40 = (uint *)((int)puVar40 + 2);
      }
    }
    if ((puVar35 < puVar13) && ((char)*puVar40 == (char)*puVar35)) {
      puVar35 = (uint *)((int)puVar35 + 1);
    }
    pcVar38 = (char *)((int)puVar35 - (int)puVar19);
  }
  if (local_54 == (uint *)((int)puVar9 + (int)pcVar38)) {
    puVar9 = (uint *)((int)puVar19 + (int)pcVar38);
    puVar13 = puVar9;
    puVar35 = puVar8;
    if (puVar9 < (uint *)((int)puVar39 + -3)) {
      if (*puVar8 == *(uint *)((int)puVar19 + (int)pcVar38)) {
        do {
          puVar13 = puVar13 + 1;
          puVar35 = puVar35 + 1;
          if ((uint *)((int)puVar39 + -3) <= puVar13) goto LAB_017bb3dc;
        } while (*puVar35 == *puVar13);
        uVar22 = *puVar35 ^ *puVar13;
        bVar4 = (byte)uVar22;
        bVar5 = (byte)(uVar22 >> 8);
        bVar6 = (byte)(uVar22 >> 0x10);
        bVar1 = (byte)(uVar22 >> 0x18);
        pcVar16 = (char *)((int)puVar13 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar9));
      }
      else {
        uVar22 = *puVar8 ^ *(uint *)((int)puVar19 + (int)pcVar38);
        bVar4 = (byte)uVar22;
        bVar5 = (byte)(uVar22 >> 8);
        bVar6 = (byte)(uVar22 >> 0x10);
        bVar1 = (byte)(uVar22 >> 0x18);
        pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bb3dc:
      if (puVar13 < (uint *)((int)puVar39 + -1)) {
        if ((short)*puVar35 == (short)*puVar13) {
          puVar13 = (uint *)((int)puVar13 + 2);
          puVar35 = (uint *)((int)puVar35 + 2);
        }
      }
      if ((puVar13 < puVar39) && ((char)*puVar35 == (char)*puVar13)) {
        puVar13 = (uint *)((int)puVar13 + 1);
      }
      pcVar16 = (char *)((int)puVar13 - (int)puVar9);
    }
    pcVar38 = pcVar38 + (int)pcVar16;
  }
  pcVar38 = pcVar38 + iVar14;
  puVar13 = puVar39 + -8;
  puVar35 = (uint *)param_2[3];
  uVar22 = (int)local_4c - (int)local_68;
  if (puVar13 < local_4c) {
    FUN_017b3404(puVar35,local_68,local_4c,puVar13);
  }
  else {
    uVar25 = *local_68;
    uVar28 = local_68[1];
    uVar27 = local_68[2];
    puVar35[3] = local_68[3];
    puVar35[2] = uVar27;
    *puVar35 = uVar25;
    puVar35[1] = uVar28;
    iVar14 = param_2[3];
    if (uVar22 < 0x11) {
      param_2[3] = (int)(iVar14 + uVar22);
      puVar21 = (undefined4 *)param_2[1];
      goto LAB_017bb1f0;
    }
    uVar25 = local_68[5];
    uVar28 = local_68[6];
    uVar27 = local_68[7];
    *(uint *)(iVar14 + 0x10) = local_68[4];
    *(uint *)(iVar14 + 0x14) = uVar25;
    *(uint *)(iVar14 + 0x18) = uVar28;
    *(uint *)(iVar14 + 0x1c) = uVar27;
    if (0x10 < (int)(uVar22 - 0x10)) {
      puVar35 = (uint *)(iVar14 + 0x20);
      puVar19 = local_68 + 0x10;
      do {
        uVar25 = puVar19[-7];
        uVar28 = puVar19[-6];
        puVar9 = puVar35 + 8;
        uVar27 = puVar19[-5];
        *puVar35 = puVar19[-8];
        puVar35[1] = uVar25;
        puVar35[2] = uVar28;
        puVar35[3] = uVar27;
        uVar25 = puVar19[-3];
        uVar28 = puVar19[-2];
        uVar27 = puVar19[-1];
        puVar35[4] = puVar19[-4];
        puVar35[5] = uVar25;
        puVar35[6] = uVar28;
        puVar35[7] = uVar27;
        puVar35 = puVar9;
        puVar19 = puVar19 + 8;
      } while (puVar9 < (uint *)(iVar14 + uVar22));
    }
  }
  param_2[3] = param_2[3] + uVar22;
  puVar21 = (undefined4 *)param_2[1];
  if (0xffff < uVar22) {
    param_2[10] = (int)puVar21 - *param_2 >> 3;
    param_2[9] = 1;
  }
LAB_017bb1f0:
  *puVar21 = local_60;
  *(short *)(puVar21 + 1) = (short)uVar22;
  if ((char *)0xffff < pcVar38 + -3) {
    param_2[10] = (int)puVar21 - *param_2 >> 3;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar38 + -3);
  local_68 = (uint *)((int)local_4c + (int)pcVar38);
  param_2[1] = (int)(puVar21 + 2);
  if (puVar24 < local_68) {
    *(int *)(iVar33 + local_58 * 4) = (int)puVar24 - iVar29;
  }
  if (local_68 <= puVar18) goto code_r0x017bb25c;
  goto LAB_017bacb4;
LAB_017bb0cc:
  local_54 = puVar39;
  if (pcVar16 < pcVar10) {
    local_54 = puVar17;
  }
  local_60 = (char *)0x1;
  uVar22 = (uint)(*(char *)((int)puVar13 + -1) == pcVar16[iVar14 + -1]);
  local_4c = (uint *)((int)puVar13 - uVar22);
  puVar35 = (uint *)(pcVar16 + (iVar14 - uVar22));
  iVar14 = uVar22 + 4;
  goto LAB_017bb118;
code_r0x017bb25c:
  iVar36 = (int)local_6c + 2;
  iVar14 = iVar29 + iVar36;
  if (param_6 == 6) {
    lVar2 = (ulonglong)*(uint *)(iVar29 + iVar36) * 0xbf9b0000;
    lVar3 = (ulonglong)*(uint *)((int)local_68 + -2) * 0xbf9b0000;
    uVar25 = *(int *)(iVar14 + 4) * -0x40650000 + *(uint *)(iVar29 + iVar36) * -0x30e44324 +
             (int)((ulonglong)lVar2 >> 0x20);
    uVar22 = *(int *)((int)local_68 + 2) * -0x40650000 + *(uint *)((int)local_68 + -2) * -0x30e44324
             + (int)((ulonglong)lVar3 >> 0x20);
    uVar22 = (uint)lVar3 >> (0x40U - iVar11 & 0xff) | uVar22 << (iVar11 - 0x20U & 0xff) |
             uVar22 >> (0x20U - iVar11 & 0xff);
    *(int *)(iVar33 + ((uint)lVar2 >> (0x40U - iVar11 & 0xff) | uVar25 << (iVar11 - 0x20U & 0xff) |
                      uVar25 >> (0x20U - iVar11 & 0xff)) * 4) = iVar36;
  }
  else if (param_6 == 7) {
    lVar2 = (ulonglong)*(uint *)(iVar29 + iVar36) * 0xbfa56300;
    uVar25 = *(int *)(iVar14 + 4) * -0x405a9d00 + *(uint *)(iVar29 + iVar36) * -0x30e44324 +
             (int)((ulonglong)lVar2 >> 0x20);
    lVar3 = (ulonglong)*(uint *)((int)local_68 + -2) * 0xbfa56300;
    uVar22 = *(int *)((int)local_68 + 2) * -0x405a9d00 + *(uint *)((int)local_68 + -2) * -0x30e44324
             + (int)((ulonglong)lVar3 >> 0x20);
    uVar22 = (uint)lVar3 >> (0x40U - iVar11 & 0xff) | uVar22 << (iVar11 - 0x20U & 0xff) |
             uVar22 >> (0x20U - iVar11 & 0xff);
    *(int *)(iVar33 + ((uint)lVar2 >> (0x40U - iVar11 & 0xff) | uVar25 << (iVar11 - 0x20U & 0xff) |
                      uVar25 >> (0x20U - iVar11 & 0xff)) * 4) = iVar36;
  }
  else if (param_6 == 5) {
    lVar2 = (ulonglong)*(uint *)(iVar29 + iVar36) * 0xbb000000;
    lVar3 = (ulonglong)*(uint *)((int)local_68 + -2) * 0xbb000000;
    uVar25 = *(int *)(iVar14 + 4) * -0x45000000 + *(uint *)(iVar29 + iVar36) * -0x30e44324 +
             (int)((ulonglong)lVar2 >> 0x20);
    uVar22 = *(int *)((int)local_68 + 2) * -0x45000000 + *(uint *)((int)local_68 + -2) * -0x30e44324
             + (int)((ulonglong)lVar3 >> 0x20);
    uVar22 = (uint)lVar3 >> (0x40U - iVar11 & 0xff) | uVar22 << (iVar11 - 0x20U & 0xff) |
             uVar22 >> (0x20U - iVar11 & 0xff);
    *(int *)(iVar33 + ((uint)lVar2 >> (0x40U - iVar11 & 0xff) | uVar25 << (iVar11 - 0x20U & 0xff) |
                      uVar25 >> (0x20U - iVar11 & 0xff)) * 4) = iVar36;
  }
  else {
    *(int *)(iVar33 + ((uint)(*(int *)(iVar29 + iVar36) * -0x61c8864f) >> (0x20U - iVar11 & 0xff)) *
                      4) = iVar36;
    uVar22 = (uint)(*(int *)((int)local_68 + -2) * -0x61c8864f) >> (0x20U - iVar11 & 0xff);
  }
  *(char **)(iVar33 + uVar22 * 4) = (char *)((int)local_68 + (-2 - iVar29));
  do {
    pcVar16 = local_b0;
    iVar36 = (int)local_68 - iVar29;
    pcVar38 = (char *)(iVar36 - (int)pcVar16);
    iVar14 = iVar29;
    if (pcVar38 < pcVar10) {
      iVar14 = iVar34;
    }
    puVar35 = (uint *)(pcVar38 + iVar14);
    if ((pcVar16 == (char *)0x0 || (uint)((int)(pcVar16 + (int)(pcVar10 + -1)) - iVar36) < 3) ||
       (*puVar35 != *local_68)) {
      local_b0 = pcVar16;
      goto LAB_017baca4;
    }
    if (pcVar38 < pcVar10) {
      puVar24 = puVar17;
    }
    else {
      puVar24 = puVar39;
    }
    puVar19 = puVar35 + 1;
    puVar30 = local_68 + 1;
    puVar9 = (uint *)((int)puVar30 + ((int)puVar24 - (int)puVar19));
    if (puVar39 < puVar9) {
      puVar9 = puVar39;
    }
    puVar40 = (uint *)((int)puVar9 + -3);
    if (puVar30 < puVar40) {
      if (puVar35[1] == local_68[1]) {
        puVar37 = local_68 + 2;
        puVar35 = puVar35 + 2;
        if (puVar37 < puVar40) {
          do {
            if (*puVar35 != *puVar37) {
              uVar22 = *puVar35 ^ *puVar37;
              bVar4 = (byte)uVar22;
              bVar5 = (byte)(uVar22 >> 8);
              bVar6 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pcVar38 = (char *)((int)puVar37 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar30));
              goto LAB_017bbcb0;
            }
            puVar37 = puVar37 + 1;
            puVar35 = puVar35 + 1;
          } while (puVar37 < puVar40);
        }
        goto LAB_017bbc60;
      }
      uVar22 = local_68[1] ^ puVar35[1];
      bVar4 = (byte)uVar22;
      bVar5 = (byte)(uVar22 >> 8);
      bVar6 = (byte)(uVar22 >> 0x10);
      bVar1 = (byte)(uVar22 >> 0x18);
      pcVar38 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar35 = puVar19;
      puVar37 = puVar30;
LAB_017bbc60:
      if (puVar37 < (uint *)((int)puVar9 + -1)) {
        if ((short)*puVar35 == (short)*puVar37) {
          puVar35 = (uint *)((int)puVar35 + 2);
          puVar37 = (uint *)((int)puVar37 + 2);
        }
      }
      if ((puVar37 < puVar9) && ((char)*puVar35 == (char)*puVar37)) {
        puVar37 = (uint *)((int)puVar37 + 1);
      }
      pcVar38 = (char *)((int)puVar37 - (int)puVar30);
    }
LAB_017bbcb0:
    if (puVar24 == (uint *)((int)puVar19 + (int)pcVar38)) {
      puVar19 = (uint *)((int)puVar30 + (int)pcVar38);
      puVar24 = puVar8;
      puVar35 = puVar19;
      if (puVar19 < (uint *)((int)puVar39 + -3)) {
        if (*puVar8 == *(uint *)((int)puVar30 + (int)pcVar38)) {
          do {
            puVar35 = puVar35 + 1;
            puVar24 = puVar24 + 1;
            if ((uint *)((int)puVar39 + -3) <= puVar35) goto LAB_017bbdfc;
          } while (*puVar24 == *puVar35);
          uVar22 = *puVar24 ^ *puVar35;
          bVar4 = (byte)uVar22;
          bVar5 = (byte)(uVar22 >> 8);
          bVar6 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          pcVar20 = (char *)((int)puVar35 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar19));
        }
        else {
          uVar22 = *puVar8 ^ *(uint *)((int)puVar30 + (int)pcVar38);
          bVar4 = (byte)uVar22;
          bVar5 = (byte)(uVar22 >> 8);
          bVar6 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
LAB_017bbdfc:
        if (puVar35 < (uint *)((int)puVar39 + -1)) {
          if ((short)*puVar24 == (short)*puVar35) {
            puVar24 = (uint *)((int)puVar24 + 2);
            puVar35 = (uint *)((int)puVar35 + 2);
          }
        }
        if ((puVar35 < puVar39) && ((char)*puVar24 == (char)*puVar35)) {
          puVar35 = (uint *)((int)puVar35 + 1);
        }
        pcVar20 = (char *)((int)puVar35 - (int)puVar19);
      }
      pcVar38 = pcVar38 + (int)pcVar20;
    }
    puVar35 = (uint *)param_2[3];
    if (puVar13 < local_68) {
      FUN_017b3404(puVar35,local_68,local_68,puVar13);
    }
    else {
      uVar22 = local_68[1];
      uVar25 = local_68[2];
      uVar28 = local_68[3];
      *puVar35 = *local_68;
      puVar35[1] = uVar22;
      puVar35[2] = uVar25;
      puVar35[3] = uVar28;
    }
    puVar21 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar21 + 1) = 0;
    *puVar21 = 1;
    if ((char *)0xffff < pcVar38 + 1) {
      param_2[10] = (int)puVar21 - *param_2 >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar21 + 6) = (short)(pcVar38 + 1);
    param_2[1] = (int)(puVar21 + 2);
    if (param_6 == 6) {
      uVar28 = *local_68;
      uVar25 = 0xbf9b0000;
      uVar22 = local_68[1];
      iVar14 = uVar28 * -0x30e44324;
LAB_017bbd8c:
      uVar22 = uVar25 * uVar22 + iVar14 + (int)((ulonglong)uVar25 * (ulonglong)uVar28 >> 0x20);
      uVar22 = (uint)((ulonglong)uVar25 * (ulonglong)uVar28) >> (0x40U - iVar11 & 0xff) |
               uVar22 << (iVar11 - 0x20U & 0xff) | uVar22 >> (0x20U - iVar11 & 0xff);
    }
    else {
      if (param_6 == 7) {
        uVar28 = *local_68;
        uVar25 = 0xbfa56300;
        uVar22 = local_68[1];
        iVar14 = uVar28 * -0x30e44324;
        goto LAB_017bbd8c;
      }
      uVar28 = *local_68;
      if (param_6 == 5) {
        uVar22 = local_68[1];
        uVar25 = 0xbb000000;
        iVar14 = uVar28 * -0x30e44324;
        goto LAB_017bbd8c;
      }
      uVar22 = uVar28 * -0x61c8864f >> (0x20U - iVar11 & 0xff);
    }
    *(int *)(iVar33 + uVar22 * 4) = iVar36;
    local_68 = (uint *)((int)local_68 + (int)(pcVar38 + 4));
    if (puVar18 < local_68) break;
    local_b0 = local_5c;
    local_5c = pcVar16;
  } while( true );
  local_b0 = local_5c;
  local_5c = pcVar16;
  goto LAB_017baca4;
}

