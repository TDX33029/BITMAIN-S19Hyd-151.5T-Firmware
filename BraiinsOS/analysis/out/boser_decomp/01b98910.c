// FUN_01b98910 @ 01b98910 size=2812 calls_out=4 calls_in=1
// strings: 

int FUN_01b98910(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5,int param_6)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  char *pcVar26;
  char *pcVar27;
  int iVar28;
  uint uVar29;
  uint *local_80;
  int local_74;
  int local_6c;
  int local_68;
  uint *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  uint *local_4c;
  char *local_44;
  
  iVar14 = *(int *)(param_1 + 4);
  pcVar27 = *(char **)(param_1 + 0x10);
  if ((char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) <
      (char *)((int)param_4 + ((param_5 - iVar14) - (int)pcVar27))) {
    local_44 = (char *)((int)param_4 +
                       ((param_5 - iVar14) - (1 << (*(uint *)(param_1 + 0xb8) & 0xff))));
  }
  else {
    local_44 = pcVar27;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_44 = pcVar27;
  }
  pcVar27 = *(char **)(param_1 + 0xc);
  if (pcVar27 <= local_44) {
    iVar14 = FUN_01b95884();
    return iVar14;
  }
  iVar28 = *(int *)(param_1 + 0x5c);
  iVar21 = *(int *)(param_1 + 0xc0);
  iVar20 = *(int *)(param_1 + 0xcc) + 1;
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xcc) == 0) {
    iVar20 = 2;
  }
  pcVar5 = pcVar27 + iVar14;
  pcVar6 = pcVar27 + iVar4;
  pcVar7 = (char *)((int)param_4 + param_5);
  puVar8 = (uint *)(pcVar7 + -8);
  pcVar9 = (char *)*param_3;
  pcVar10 = (char *)param_3[1];
  pcVar15 = (char *)((int)param_4 + (-(int)local_44 - iVar14));
  if (pcVar10 < pcVar15) {
    local_50 = (char *)0x0;
    local_58 = pcVar10;
  }
  else {
    local_58 = (char *)0x0;
    local_50 = pcVar10;
  }
  if (pcVar9 < pcVar15) {
    local_54 = (char *)0x0;
    pcVar10 = pcVar9;
  }
  else {
    pcVar10 = (char *)0x0;
    local_54 = pcVar9;
  }
LAB_01b98a54:
  puVar16 = (uint *)((int)param_4 + iVar20 + 1);
  if (puVar8 <= puVar16) {
LAB_01b98a6c:
    if (local_54 == (char *)0x0 || pcVar10 == (char *)0x0) {
      if (pcVar10 == (char *)0x0) {
        pcVar10 = local_54;
      }
    }
    else {
      local_50 = local_54;
    }
    *param_3 = pcVar10;
    if (local_58 == (char *)0x0) {
      local_58 = local_50;
    }
    param_3[1] = local_58;
    return (int)pcVar7 - (int)param_4;
  }
  local_80 = param_4 + 0x20;
  if (param_6 == 6) {
    uVar19 = *param_4;
    uVar25 = 0x40 - iVar21;
    uVar29 = param_4[1];
    uVar22 = 0xbf9b0000;
  }
  else if (param_6 == 7) {
    uVar19 = *param_4;
    uVar25 = 0x40 - iVar21;
    uVar29 = param_4[1];
    uVar22 = 0xbfa56300;
  }
  else {
    if (param_6 != 5) {
      uVar19 = *param_4 * -0x61c8864f >> (0x20U - iVar21 & 0xff);
      uVar22 = (uint)(*(int *)((int)param_4 + 1) * -0x61c8864f) >> (0x20U - iVar21 & 0xff);
      goto LAB_01b98b24;
    }
    uVar19 = *param_4;
    uVar25 = 0x40 - iVar21;
    uVar29 = param_4[1];
    uVar22 = 0xbb000000;
  }
  uVar29 = uVar22 * uVar29 + uVar19 * -0x30e44324 +
           (int)((ulonglong)uVar22 * (ulonglong)uVar19 >> 0x20);
  uVar19 = (uint)((ulonglong)uVar22 * (ulonglong)uVar19) >> (uVar25 & 0xff) |
           uVar29 << (iVar21 - 0x20U & 0xff) | uVar29 >> (0x20U - iVar21 & 0xff);
  lVar1 = (ulonglong)uVar22 * (ulonglong)*(uint *)((int)param_4 + 1);
  uVar22 = uVar22 * *(int *)((int)param_4 + 5) + *(uint *)((int)param_4 + 1) * -0x30e44324 +
           (int)((ulonglong)lVar1 >> 0x20);
  uVar22 = (uint)lVar1 >> (uVar25 & 0xff) | uVar22 << (iVar21 - 0x20U & 0xff) |
           uVar22 >> (0x20U - iVar21 & 0xff);
LAB_01b98b24:
  pcVar9 = *(char **)(iVar28 + uVar19 * 4);
  local_68 = iVar14;
  if (pcVar9 < pcVar27) {
    local_68 = iVar4;
  }
  puVar24 = (uint *)((int)param_4 + iVar20);
  local_74 = iVar20;
  local_64 = param_4;
  local_4c = (uint *)((int)param_4 + 1);
  do {
    puVar17 = puVar16;
    puVar23 = puVar24;
    local_60 = (char *)(((int)puVar23 - iVar14) - (int)pcVar10);
    iVar11 = iVar4;
    if (pcVar27 <= local_60) {
      iVar11 = iVar14;
    }
    if ((uint)((int)(pcVar27 + (int)pcVar10) - ((int)puVar23 - iVar14)) < 4 ||
        pcVar10 == (char *)0x0) {
      uVar25 = *puVar23 ^ 1;
    }
    else {
      uVar25 = *(uint *)(local_60 + iVar11);
    }
    local_6c = (int)local_64 - iVar14;
    *(int *)(iVar28 + uVar19 * 4) = local_6c;
    uVar19 = uVar22;
    if (*puVar23 == uVar25) {
      pcVar15 = pcVar7;
      if (local_60 < pcVar27) {
        pcVar15 = pcVar6;
      }
      uVar22 = (uint)(*(char *)((int)puVar23 + -1) == local_60[iVar11 + -1]);
      puVar23 = (uint *)((int)puVar23 - uVar22);
      local_60 = local_60 + (iVar11 - uVar22);
      pcVar9 = (char *)(uVar22 + 4);
      local_5c = (char *)0x1;
      pcVar26 = pcVar10;
      goto LAB_01b98c48;
    }
    if (pcVar9 < local_44) {
      uVar25 = *local_64 ^ 1;
    }
    else {
      uVar25 = *(uint *)(pcVar9 + local_68);
    }
    if (uVar25 == *local_64) goto LAB_01b99260;
    pcVar9 = *(char **)(iVar28 + uVar22 * 4);
    local_68 = iVar14;
    if (pcVar9 < pcVar27) {
      local_68 = iVar4;
    }
    if (param_6 == 6) {
      uVar29 = *puVar23;
      uVar25 = puVar23[1];
      uVar19 = 0xbf9b0000;
      iVar11 = uVar29 * -0x30e44324;
LAB_01b991a0:
      uVar25 = uVar19 * uVar25 + iVar11 + (int)((ulonglong)uVar19 * (ulonglong)uVar29 >> 0x20);
      uVar19 = (uint)((ulonglong)uVar19 * (ulonglong)uVar29) >> (0x40U - iVar21 & 0xff) |
               uVar25 << (iVar21 - 0x20U & 0xff) | uVar25 >> (0x20U - iVar21 & 0xff);
    }
    else {
      if (param_6 == 7) {
        uVar29 = *puVar23;
        uVar25 = puVar23[1];
        uVar19 = 0xbfa56300;
        iVar11 = uVar29 * -0x30e44324;
        goto LAB_01b991a0;
      }
      if (param_6 == 5) {
        uVar29 = *puVar23;
        uVar19 = 0xbb000000;
        uVar25 = puVar23[1];
        iVar11 = uVar29 * -0x30e44324;
        goto LAB_01b991a0;
      }
      uVar19 = *puVar23 * -0x61c8864f >> (0x20U - iVar21 & 0xff);
    }
    local_6c = (int)local_4c - iVar14;
    *(int *)(iVar28 + uVar22 * 4) = local_6c;
    if (pcVar9 < local_44) {
      uVar22 = *local_4c ^ 1;
    }
    else {
      uVar22 = *(uint *)(pcVar9 + local_68);
    }
    if (uVar22 == *local_4c) break;
    pcVar9 = *(char **)(iVar28 + uVar19 * 4);
    local_68 = iVar14;
    if (pcVar9 < pcVar27) {
      local_68 = iVar4;
    }
    uVar22 = *puVar17;
    if (param_6 == 6) {
      uVar29 = puVar17[1];
      uVar25 = 0xbf9b0000;
LAB_01b99204:
      uVar29 = uVar25 * uVar29 + uVar22 * -0x30e44324 +
               (int)((ulonglong)uVar25 * (ulonglong)uVar22 >> 0x20);
      uVar22 = (uint)((ulonglong)uVar25 * (ulonglong)uVar22) >> (0x40U - iVar21 & 0xff) |
               uVar29 << (iVar21 - 0x20U & 0xff) | uVar29 >> (0x20U - iVar21 & 0xff);
    }
    else {
      if (param_6 == 7) {
        uVar29 = puVar17[1];
        uVar25 = 0xbfa56300;
        goto LAB_01b99204;
      }
      if (param_6 == 5) {
        uVar25 = 0xbb000000;
        uVar29 = puVar17[1];
        goto LAB_01b99204;
      }
      uVar22 = uVar22 * -0x61c8864f >> (0x20U - iVar21 & 0xff);
    }
    puVar24 = (uint *)((int)puVar23 + local_74);
    puVar16 = (uint *)((int)puVar17 + local_74);
    if (local_80 <= puVar24) {
      HintPreloadData(puVar17 + 0x10);
      local_74 = local_74 + 1;
      HintPreloadData(puVar17 + 0x20);
      local_80 = local_80 + 0x20;
    }
    if (puVar8 <= puVar16) goto LAB_01b98a6c;
    local_64 = puVar23;
    local_4c = puVar17;
  } while( true );
  local_64 = local_4c;
  local_4c = puVar23;
LAB_01b99260:
  pcVar26 = (char *)(local_6c - (int)pcVar9);
  local_5c = pcVar26 + 3;
  pcVar13 = pcVar9 + local_68;
  pcVar3 = pcVar13;
  pcVar2 = local_44 + iVar4;
  pcVar15 = pcVar6;
  if (pcVar27 <= pcVar9) {
    pcVar2 = pcVar5;
    pcVar15 = pcVar7;
  }
  do {
    local_60 = pcVar3;
    puVar23 = local_64;
    pcVar9 = pcVar13 + (4 - (int)local_60);
    local_58 = pcVar10;
    if (puVar23 <= param_4 || local_60 <= pcVar2) break;
    local_64 = (uint *)((int)puVar23 + -1);
    pcVar3 = local_60 + -1;
  } while (*(char *)((int)puVar23 + -1) == local_60[-1]);
LAB_01b98c48:
  iVar11 = FUN_01b9530c((char *)((int)puVar23 + (int)pcVar9),local_60 + (int)pcVar9,pcVar7,pcVar15,
                        pcVar5);
  pcVar9 = pcVar9 + iVar11;
  uVar22 = (int)puVar23 - (int)param_4;
  puVar16 = (uint *)(pcVar7 + -0x20);
  if (puVar16 < puVar23) {
    FUN_01b95138(param_2[3],param_4,puVar23,puVar16);
  }
  else {
    FUN_01b95058(param_2[3],param_4);
    if (0x10 < uVar22) {
      iVar11 = param_2[3];
      FUN_01b95058(iVar11 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar22 - 0x10)) {
        uVar25 = iVar11 + 0x20;
        do {
          FUN_01b95058(uVar25,param_4 + 8);
          FUN_01b95058(uVar25 + 0x10,param_4 + 0xc);
          uVar25 = uVar25 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar25 < iVar11 + uVar22);
      }
    }
  }
  param_2[3] = param_2[3] + uVar22;
  puVar18 = (undefined4 *)param_2[1];
  if (0xffff < uVar22) {
    param_2[9] = 1;
    param_2[10] = (int)puVar18 - *param_2 >> 3;
  }
  *puVar18 = local_5c;
  *(short *)(puVar18 + 1) = (short)uVar22;
  if ((char *)0xffff < pcVar9 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)puVar18 - *param_2 >> 3;
  }
  *(short *)((int)puVar18 + 6) = (short)(pcVar9 + -3);
  param_2[1] = (int)(puVar18 + 2);
  param_4 = (uint *)((int)puVar23 + (int)pcVar9);
  if (local_4c < param_4) {
    *(int *)(iVar28 + uVar19 * 4) = (int)local_4c - iVar14;
  }
  pcVar10 = pcVar26;
  if (puVar8 < param_4) goto LAB_01b98a54;
  local_6c = local_6c + 2;
  iVar11 = iVar14 + local_6c;
  if (param_6 == 6) {
    iVar11 = *(int *)(iVar11 + 4);
    uVar22 = 0xbf9b0000;
    uVar25 = *(uint *)(iVar14 + local_6c);
LAB_01b992ec:
    uVar19 = uVar22 * iVar11 + uVar25 * -0x30e44324 +
             (int)((ulonglong)uVar22 * (ulonglong)uVar25 >> 0x20);
    uVar22 = (uint)((ulonglong)uVar22 * (ulonglong)uVar25) >> (0x40U - iVar21 & 0xff) |
             uVar19 << (iVar21 - 0x20U & 0xff) | uVar19 >> (0x20U - iVar21 & 0xff);
  }
  else {
    if (param_6 == 7) {
      iVar11 = *(int *)(iVar11 + 4);
      uVar22 = 0xbfa56300;
      uVar25 = *(uint *)(iVar14 + local_6c);
      goto LAB_01b992ec;
    }
    uVar25 = *(uint *)(iVar14 + local_6c);
    if (param_6 == 5) {
      iVar11 = *(int *)(iVar11 + 4);
      uVar22 = 0xbb000000;
      goto LAB_01b992ec;
    }
    uVar22 = uVar25 * -0x61c8864f >> (0x20U - iVar21 & 0xff);
  }
  *(int *)(iVar28 + uVar22 * 4) = local_6c;
  if (param_6 == 6) {
    uVar25 = *(uint *)((int)param_4 + -2);
    iVar11 = *(int *)((int)param_4 + 2);
    uVar22 = 0xbf9b0000;
  }
  else if (param_6 == 7) {
    uVar25 = *(uint *)((int)param_4 + -2);
    iVar11 = *(int *)((int)param_4 + 2);
    uVar22 = 0xbfa56300;
  }
  else {
    uVar25 = *(uint *)((int)param_4 + -2);
    if (param_6 != 5) {
      uVar22 = uVar25 * -0x61c8864f >> (0x20U - iVar21 & 0xff);
      goto LAB_01b98e48;
    }
    iVar11 = *(int *)((int)param_4 + 2);
    uVar22 = 0xbb000000;
  }
  uVar19 = uVar22 * iVar11 + uVar25 * -0x30e44324 +
           (int)((ulonglong)uVar22 * (ulonglong)uVar25 >> 0x20);
  uVar22 = (uint)((ulonglong)uVar22 * (ulonglong)uVar25) >> (0x40U - iVar21 & 0xff) |
           uVar19 << (iVar21 - 0x20U & 0xff) | uVar19 >> (0x20U - iVar21 & 0xff);
LAB_01b98e48:
  *(char **)(iVar28 + uVar22 * 4) = (char *)((int)param_4 + (-2 - iVar14));
  do {
    pcVar15 = pcVar26;
    iVar11 = (int)param_4 - iVar14;
    pcVar9 = (char *)(iVar11 - (int)local_58);
    if (pcVar9 < pcVar27) {
      iVar12 = iVar4;
    }
    else {
      iVar12 = iVar14;
    }
    pcVar10 = pcVar15;
    if ((local_58 == (char *)0x0 || (uint)((int)(pcVar27 + -1 + (int)local_58) - iVar11) < 3) ||
       (*(uint *)(pcVar9 + iVar12) != *param_4)) break;
    if (pcVar9 < pcVar27) {
      pcVar10 = pcVar6;
    }
    else {
      pcVar10 = pcVar7;
    }
    iVar12 = FUN_01b9530c(param_4 + 1,(uint *)((int)(pcVar9 + iVar12) + 4),pcVar7,pcVar10,pcVar5);
    if (puVar16 < param_4) {
      FUN_01b95138(param_2[3],param_4,param_4,puVar16);
    }
    else {
      FUN_01b95058(param_2[3],param_4);
    }
    puVar18 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar18 + 1) = 0;
    *puVar18 = 1;
    if (0xffff < iVar12 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)puVar18 - *param_2 >> 3;
    }
    *(short *)((int)puVar18 + 6) = (short)(iVar12 + 1U);
    param_2[1] = (int)(puVar18 + 2);
    if (param_6 == 6) {
      uVar25 = *param_4;
      uVar22 = param_4[1];
      uVar19 = 0xbf9b0000;
LAB_01b993bc:
      uVar22 = uVar19 * uVar22 + uVar25 * -0x30e44324 +
               (int)((ulonglong)uVar19 * (ulonglong)uVar25 >> 0x20);
      uVar22 = (uint)((ulonglong)uVar19 * (ulonglong)uVar25) >> (0x40U - iVar21 & 0xff) |
               uVar22 << (iVar21 - 0x20U & 0xff) | uVar22 >> (0x20U - iVar21 & 0xff);
    }
    else {
      if (param_6 == 7) {
        uVar25 = *param_4;
        uVar22 = param_4[1];
        uVar19 = 0xbfa56300;
        goto LAB_01b993bc;
      }
      if (param_6 == 5) {
        uVar25 = *param_4;
        uVar19 = 0xbb000000;
        uVar22 = param_4[1];
        goto LAB_01b993bc;
      }
      uVar22 = *param_4 * -0x61c8864f >> (0x20U - iVar21 & 0xff);
    }
    param_4 = (uint *)((int)param_4 + iVar12 + 4);
    *(int *)(iVar28 + uVar22 * 4) = iVar11;
    pcVar10 = local_58;
    pcVar26 = local_58;
    local_58 = pcVar15;
  } while (param_4 <= puVar8);
  goto LAB_01b98a54;
}

