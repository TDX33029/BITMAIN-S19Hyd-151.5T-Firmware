// FUN_01b8f3c4 @ 01b8f3c4 size=8968 calls_out=4 calls_in=1
// strings: 

int FUN_01b8f3c4(int param_1,int *param_2,uint *param_3,uint *param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  undefined4 uVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint *local_4c;
  uint *local_48;
  uint local_3c;
  uint local_38;
  
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar11 = *(int *)(param_1 + 0xc0);
  iVar12 = *(int *)(param_1 + 100);
  iVar13 = *(int *)(param_1 + 0xbc);
  iVar14 = *(int *)(param_1 + 4);
  uVar29 = *(undefined4 *)(param_1 + 0xb8);
  iVar25 = *(int *)(param_1 + 200);
  uVar2 = FUN_01b8ee6c(param_1,(char *)((int)param_4 + (param_5 - iVar14)),uVar29);
  puVar15 = (uint *)(iVar14 + uVar2);
  pcVar16 = (char *)((int)param_4 + param_5);
  puVar17 = (uint *)(pcVar16 + -8);
  local_3c = *param_3;
  uVar18 = param_3[1];
  puVar28 = param_4;
  if (param_4 == puVar15) {
    puVar28 = (uint *)((int)param_4 + 1);
  }
  iVar3 = FUN_01b8ee6c(param_1,(int)puVar28 - iVar14,uVar29);
  uVar4 = ((int)puVar28 - iVar14) - iVar3;
  local_4c = (uint *)uVar18;
  puVar32 = (uint *)local_3c;
  local_38 = uVar18;
  if (iVar25 == 6) {
    if (uVar4 < uVar18) {
      local_4c = (uint *)0x0;
    }
    else {
      local_38 = 0;
    }
    if (uVar4 < local_3c) {
      puVar32 = (uint *)0;
    }
    else {
      local_3c = 0;
    }
LAB_01b90610:
    local_48 = param_4;
LAB_01b90618:
    bVar35 = puVar32 != (uint *)0x0;
    if ((uint *)((int)puVar28 + 1) <= puVar17) {
      iVar25 = -iVar11;
      uVar31 = iVar25 + 0x40;
      puVar22 = puVar28 + 0x40;
      uVar18 = *puVar28;
      uVar4 = puVar28[1] * -0x485a9b9d + uVar18 * -0x30e44324 +
              (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
      local_68 = (uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                 uVar4 << (iVar11 - 0x20U & 0xff) | uVar4 >> (0x20U - iVar11 & 0xff);
      uVar7 = *(uint *)(iVar10 + local_68 * 4);
      puVar21 = (uint *)(iVar14 + uVar7);
      local_70 = 1;
      iVar3 = -iVar13;
      uVar33 = iVar3 + 0x40;
      puVar23 = (uint *)((int)puVar28 + 1);
      uVar4 = puVar28[1];
      while( true ) {
        uVar27 = uVar4 * -0x40650000 + uVar18 * -0x30e44324 +
                 (int)((ulonglong)uVar18 * 0xbf9b0000 >> 0x20);
        uVar8 = (uint)((ulonglong)uVar18 * 0xbf9b0000) >> (uVar33 & 0xff) |
                uVar27 << (iVar13 - 0x20U & 0xff) | uVar27 >> (0x20U - iVar13 & 0xff);
        uVar27 = *(uint *)(iVar12 + uVar8 * 4);
        iVar5 = (int)puVar28 - iVar14;
        *(int *)(iVar12 + uVar8 * 4) = iVar5;
        *(int *)(iVar10 + local_68 * 4) = iVar5;
        if (*(int *)((int)puVar28 + (1 - (int)puVar32)) == *(int *)((int)puVar28 + 1) && bVar35)
        break;
        uVar8 = puVar23[1];
        uVar9 = *puVar23;
        uVar34 = uVar8 * -0x485a9b9d + uVar9 * -0x30e44324 +
                 (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
        local_68 = (uint)((ulonglong)uVar9 * 0xb7a56463) >> (uVar31 & 0xff) |
                   uVar34 << (iVar11 - 0x20U & 0xff) | uVar34 >> (0x20U - iVar11 & 0xff);
        if ((uVar2 < uVar7) && (puVar21[1] == uVar4 && *puVar21 == uVar18)) {
          iVar30 = FUN_01b8eeb0(puVar28 + 2,puVar21 + 2,pcVar16);
          iVar30 = iVar30 + 8;
          local_6c = (int)puVar28 - (int)puVar21;
          goto LAB_01b90a7c;
        }
        uVar7 = *(uint *)(iVar10 + local_68 * 4);
        puVar21 = (uint *)(iVar14 + uVar7);
        if ((uVar2 < uVar27) &&
           (puVar6 = (uint *)(iVar14 + uVar27), *(uint *)(iVar14 + uVar27) == *puVar28)) {
          if ((uVar2 < uVar7) && (uVar8 == puVar21[1] && uVar9 == *(uint *)(iVar14 + uVar7))) {
            iVar30 = FUN_01b8eeb0(puVar23 + 2,puVar21 + 2,pcVar16);
            local_6c = (int)puVar23 - (int)puVar21;
            iVar30 = iVar30 + 8;
            puVar28 = puVar23;
            goto LAB_01b90cf8;
          }
          iVar30 = FUN_01b8eeb0(puVar28 + 1,puVar6 + 1,pcVar16);
          local_6c = (int)puVar28 - (int)puVar6;
          iVar30 = iVar30 + 4;
          goto LAB_01b90c44;
        }
        if (puVar22 <= puVar23) {
          puVar22 = puVar22 + 0x40;
          HintPreloadData(puVar23 + 0x10);
          HintPreloadData(puVar23 + 0x20);
          local_70 = local_70 + 1;
        }
        if (puVar17 < (uint *)((int)puVar23 + local_70)) goto LAB_01b8fd40;
        uVar18 = uVar9;
        puVar28 = puVar23;
        puVar23 = (uint *)((int)puVar23 + local_70);
        uVar4 = uVar8;
      }
      iVar26 = FUN_01b8eeb0((char *)((int)puVar28 + 5),(char *)((int)puVar28 + (5 - (int)puVar32)),
                            pcVar16);
      puVar28 = (uint *)((int)puVar28 + 1);
      iVar30 = iVar26 + 4;
      uVar18 = (int)puVar28 - (int)local_48;
      if (pcVar16 + -0x20 < puVar28) {
        FUN_01b8edc8(param_2[3],local_48,puVar28);
      }
      else {
        FUN_01b8ece8(param_2[3],local_48);
        if (0x10 < uVar18) {
          iVar24 = param_2[3];
          FUN_01b8ece8(iVar24 + 0x10,local_48 + 4);
          if (0x10 < (int)(uVar18 - 0x10)) {
            uVar4 = iVar24 + 0x20;
            do {
              FUN_01b8ece8(uVar4,local_48 + 8);
              FUN_01b8ece8(uVar4 + 0x10,local_48 + 0xc);
              uVar4 = uVar4 + 0x20;
              local_48 = local_48 + 8;
            } while (uVar4 < iVar24 + uVar18);
          }
        }
      }
      param_2[3] = param_2[3] + uVar18;
      piVar19 = (int *)param_2[1];
      if (0xffff < uVar18) {
        param_2[9] = 1;
        param_2[10] = (int)piVar19 - *param_2 >> 3;
      }
      *piVar19 = 1;
      *(short *)(piVar19 + 1) = (short)uVar18;
      if (0xffff < iVar26 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)piVar19 - *param_2 >> 3;
      }
      *(short *)((int)piVar19 + 6) = (short)(iVar26 + 1U);
      local_6c = (uint)puVar32;
      goto LAB_01b9087c;
    }
    goto LAB_01b8fd40;
  }
  if (iVar25 == 7) {
    if (uVar4 < uVar18) {
      local_4c = (uint *)0x0;
    }
    else {
      local_38 = 0;
    }
    if (uVar4 < local_3c) {
      puVar32 = (uint *)0;
    }
    else {
      local_3c = 0;
    }
LAB_01b90e9c:
    local_48 = param_4;
LAB_01b90ea4:
    bVar35 = puVar32 != (uint *)0x0;
    if ((uint *)((int)puVar28 + 1) <= puVar17) {
      iVar25 = -iVar11;
      uVar31 = iVar25 + 0x40;
      puVar22 = puVar28 + 0x40;
      uVar18 = *puVar28;
      uVar4 = puVar28[1] * -0x485a9b9d + uVar18 * -0x30e44324 +
              (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
      local_68 = (uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                 uVar4 << (iVar11 - 0x20U & 0xff) | uVar4 >> (0x20U - iVar11 & 0xff);
      uVar7 = *(uint *)(iVar10 + local_68 * 4);
      puVar21 = (uint *)(iVar14 + uVar7);
      local_70 = 1;
      iVar3 = -iVar13;
      uVar33 = iVar3 + 0x40;
      puVar23 = (uint *)((int)puVar28 + 1);
      uVar4 = puVar28[1];
      while( true ) {
        uVar27 = uVar4 * -0x405a9d00 + uVar18 * -0x30e44324 +
                 (int)((ulonglong)uVar18 * 0xbfa56300 >> 0x20);
        uVar8 = (uint)((ulonglong)uVar18 * 0xbfa56300) >> (uVar33 & 0xff) |
                uVar27 << (iVar13 - 0x20U & 0xff) | uVar27 >> (0x20U - iVar13 & 0xff);
        uVar27 = *(uint *)(iVar12 + uVar8 * 4);
        iVar5 = (int)puVar28 - iVar14;
        *(int *)(iVar12 + uVar8 * 4) = iVar5;
        *(int *)(iVar10 + local_68 * 4) = iVar5;
        if (*(int *)((int)puVar28 + (1 - (int)puVar32)) == *(int *)((int)puVar28 + 1) && bVar35)
        break;
        uVar8 = puVar23[1];
        uVar9 = *puVar23;
        uVar34 = uVar8 * -0x485a9b9d + uVar9 * -0x30e44324 +
                 (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
        local_68 = (uint)((ulonglong)uVar9 * 0xb7a56463) >> (uVar31 & 0xff) |
                   uVar34 << (iVar11 - 0x20U & 0xff) | uVar34 >> (0x20U - iVar11 & 0xff);
        if ((uVar2 < uVar7) && (puVar21[1] == uVar4 && *puVar21 == uVar18)) {
          iVar30 = FUN_01b8eeb0(puVar28 + 2,puVar21 + 2,pcVar16);
          iVar30 = iVar30 + 8;
          local_6c = (int)puVar28 - (int)puVar21;
          goto LAB_01b91414;
        }
        uVar7 = *(uint *)(iVar10 + local_68 * 4);
        puVar21 = (uint *)(iVar14 + uVar7);
        if ((uVar2 < uVar27) &&
           (puVar6 = (uint *)(iVar14 + uVar27), *(uint *)(iVar14 + uVar27) == *puVar28)) {
          if ((uVar2 < uVar7) && (uVar8 == puVar21[1] && uVar9 == *(uint *)(iVar14 + uVar7))) {
            iVar30 = FUN_01b8eeb0(puVar23 + 2,puVar21 + 2,pcVar16);
            local_6c = (int)puVar23 - (int)puVar21;
            iVar30 = iVar30 + 8;
            puVar28 = puVar23;
            goto LAB_01b91690;
          }
          iVar30 = FUN_01b8eeb0(puVar28 + 1,puVar6 + 1,pcVar16);
          local_6c = (int)puVar28 - (int)puVar6;
          iVar30 = iVar30 + 4;
          goto LAB_01b915dc;
        }
        if (puVar22 <= puVar23) {
          puVar22 = puVar22 + 0x40;
          HintPreloadData(puVar23 + 0x10);
          HintPreloadData(puVar23 + 0x20);
          local_70 = local_70 + 1;
        }
        if (puVar17 < (uint *)((int)puVar23 + local_70)) goto LAB_01b8fd40;
        uVar18 = uVar9;
        puVar28 = puVar23;
        puVar23 = (uint *)((int)puVar23 + local_70);
        uVar4 = uVar8;
      }
      iVar26 = FUN_01b8eeb0((char *)((int)puVar28 + 5),(char *)((int)puVar28 + (5 - (int)puVar32)),
                            pcVar16);
      puVar28 = (uint *)((int)puVar28 + 1);
      iVar30 = iVar26 + 4;
      uVar18 = (int)puVar28 - (int)local_48;
      if (pcVar16 + -0x20 < puVar28) {
        FUN_01b8edc8(param_2[3],local_48,puVar28);
      }
      else {
        FUN_01b8ece8(param_2[3],local_48);
        if (0x10 < uVar18) {
          iVar24 = param_2[3];
          FUN_01b8ece8(iVar24 + 0x10,local_48 + 4);
          if (0x10 < (int)(uVar18 - 0x10)) {
            uVar4 = iVar24 + 0x20;
            do {
              FUN_01b8ece8(uVar4,local_48 + 8);
              FUN_01b8ece8(uVar4 + 0x10,local_48 + 0xc);
              uVar4 = uVar4 + 0x20;
              local_48 = local_48 + 8;
            } while (uVar4 < iVar24 + uVar18);
          }
        }
      }
      param_2[3] = param_2[3] + uVar18;
      piVar19 = (int *)param_2[1];
      if (0xffff < uVar18) {
        param_2[9] = 1;
        param_2[10] = (int)piVar19 - *param_2 >> 3;
      }
      *piVar19 = 1;
      *(short *)(piVar19 + 1) = (short)uVar18;
      if (0xffff < iVar26 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)piVar19 - *param_2 >> 3;
      }
      *(short *)((int)piVar19 + 6) = (short)(iVar26 + 1U);
      local_6c = (uint)puVar32;
      goto LAB_01b91108;
    }
    goto LAB_01b8fd40;
  }
  if (iVar25 == 5) {
    if (uVar4 < uVar18) {
      local_4c = (uint *)0x0;
    }
    else {
      local_38 = 0;
    }
    if (uVar4 < local_3c) {
      puVar32 = (uint *)0;
    }
    else {
      local_3c = 0;
    }
LAB_01b8fd1c:
    local_48 = param_4;
LAB_01b8fd24:
    bVar35 = puVar32 != (uint *)0x0;
    if ((uint *)((int)puVar28 + 1) <= puVar17) {
      iVar25 = -iVar11;
      uVar31 = iVar25 + 0x40;
      puVar22 = puVar28 + 0x40;
      uVar18 = *puVar28;
      uVar4 = puVar28[1] * -0x485a9b9d + uVar18 * -0x30e44324 +
              (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
      local_68 = (uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                 uVar4 << (iVar11 - 0x20U & 0xff) | uVar4 >> (0x20U - iVar11 & 0xff);
      uVar7 = *(uint *)(iVar10 + local_68 * 4);
      puVar21 = (uint *)(iVar14 + uVar7);
      local_70 = 1;
      iVar3 = -iVar13;
      uVar33 = iVar3 + 0x40;
      puVar23 = (uint *)((int)puVar28 + 1);
      uVar4 = puVar28[1];
      while( true ) {
        uVar27 = uVar4 * -0x45000000 + uVar18 * -0x30e44324 +
                 (int)((ulonglong)uVar18 * 0xbb000000 >> 0x20);
        uVar8 = (uint)((ulonglong)uVar18 * 0xbb000000) >> (uVar33 & 0xff) |
                uVar27 << (iVar13 - 0x20U & 0xff) | uVar27 >> (0x20U - iVar13 & 0xff);
        uVar27 = *(uint *)(iVar12 + uVar8 * 4);
        iVar5 = (int)puVar28 - iVar14;
        *(int *)(iVar12 + uVar8 * 4) = iVar5;
        *(int *)(iVar10 + local_68 * 4) = iVar5;
        if (*(int *)((int)puVar28 + (1 - (int)puVar32)) == *(int *)((int)puVar28 + 1) && bVar35)
        break;
        uVar8 = puVar23[1];
        uVar9 = *puVar23;
        uVar34 = uVar8 * -0x485a9b9d + uVar9 * -0x30e44324 +
                 (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
        local_68 = (uint)((ulonglong)uVar9 * 0xb7a56463) >> (uVar31 & 0xff) |
                   uVar34 << (iVar11 - 0x20U & 0xff) | uVar34 >> (0x20U - iVar11 & 0xff);
        if ((uVar2 < uVar7) && (puVar21[1] == uVar4 && *puVar21 == uVar18)) {
          iVar30 = FUN_01b8eeb0(puVar28 + 2,puVar21 + 2,pcVar16);
          iVar30 = iVar30 + 8;
          local_6c = (int)puVar28 - (int)puVar21;
          goto LAB_01b901dc;
        }
        uVar7 = *(uint *)(iVar10 + local_68 * 4);
        puVar21 = (uint *)(iVar14 + uVar7);
        if ((uVar2 < uVar27) &&
           (puVar6 = (uint *)(iVar14 + uVar27), *(uint *)(iVar14 + uVar27) == *puVar28)) {
          if ((uVar2 < uVar7) && (uVar8 == puVar21[1] && uVar9 == *(uint *)(iVar14 + uVar7))) {
            iVar30 = FUN_01b8eeb0(puVar23 + 2,puVar21 + 2,pcVar16);
            local_6c = (int)puVar23 - (int)puVar21;
            iVar30 = iVar30 + 8;
            puVar28 = puVar23;
            goto LAB_01b90458;
          }
          iVar30 = FUN_01b8eeb0(puVar28 + 1,puVar6 + 1,pcVar16);
          local_6c = (int)puVar28 - (int)puVar6;
          iVar30 = iVar30 + 4;
          goto LAB_01b903a4;
        }
        if (puVar22 <= puVar23) {
          puVar22 = puVar22 + 0x40;
          HintPreloadData(puVar23 + 0x10);
          HintPreloadData(puVar23 + 0x20);
          local_70 = local_70 + 1;
        }
        if (puVar17 < (uint *)((int)puVar23 + local_70)) goto LAB_01b8fd40;
        uVar18 = uVar9;
        puVar28 = puVar23;
        puVar23 = (uint *)((int)puVar23 + local_70);
        uVar4 = uVar8;
      }
      iVar26 = FUN_01b8eeb0((char *)((int)puVar28 + 5),(char *)((int)puVar28 + (5 - (int)puVar32)),
                            pcVar16);
      puVar28 = (uint *)((int)puVar28 + 1);
      iVar30 = iVar26 + 4;
      uVar18 = (int)puVar28 - (int)local_48;
      if (pcVar16 + -0x20 < puVar28) {
        FUN_01b8edc8(param_2[3],local_48,puVar28);
      }
      else {
        FUN_01b8ece8(param_2[3],local_48);
        if (0x10 < uVar18) {
          iVar24 = param_2[3];
          FUN_01b8ece8(iVar24 + 0x10,local_48 + 4);
          if (0x10 < (int)(uVar18 - 0x10)) {
            uVar4 = iVar24 + 0x20;
            do {
              FUN_01b8ece8(uVar4,local_48 + 8);
              FUN_01b8ece8(uVar4 + 0x10,local_48 + 0xc);
              uVar4 = uVar4 + 0x20;
              local_48 = local_48 + 8;
            } while (uVar4 < iVar24 + uVar18);
          }
        }
      }
      param_2[3] = param_2[3] + uVar18;
      piVar19 = (int *)param_2[1];
      if (0xffff < uVar18) {
        param_2[9] = 1;
        param_2[10] = (int)piVar19 - *param_2 >> 3;
      }
      *piVar19 = 1;
      *(short *)(piVar19 + 1) = (short)uVar18;
      if (0xffff < iVar26 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)piVar19 - *param_2 >> 3;
      }
      *(short *)((int)piVar19 + 6) = (short)(iVar26 + 1U);
      local_6c = (uint)puVar32;
      goto LAB_01b8ffe4;
    }
LAB_01b8fd40:
    if (local_3c == 0) {
      bVar35 = false;
    }
    if (bVar35) {
      local_38 = local_3c;
    }
    else if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)local_3c;
    }
    if (local_4c == (uint *)0x0) {
      local_4c = (uint *)local_38;
    }
    local_38 = (uint)local_4c;
    param_4 = local_48;
LAB_01b8f550:
    *param_3 = (uint)puVar32;
    param_3[1] = local_38;
    return (int)pcVar16 - (int)param_4;
  }
  if (uVar4 < uVar18) {
    local_48 = (uint *)0x0;
  }
  else {
    local_38 = 0;
    local_48 = (uint *)uVar18;
  }
  if (uVar4 < local_3c) {
    puVar32 = (uint *)0;
  }
  else {
    local_3c = 0;
  }
LAB_01b8f4e0:
LAB_01b8f4e8:
  if ((uint *)((int)puVar28 + 1) <= puVar17) {
    iVar25 = -iVar11;
    uVar18 = iVar25 + 0x40;
    puVar21 = puVar28 + 0x40;
    lVar1 = (ulonglong)*puVar28 * 0xb7a56463;
    uVar4 = puVar28[1] * -0x485a9b9d + *puVar28 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    local_64 = (uint)lVar1 >> (uVar18 & 0xff) | uVar4 << (iVar11 - 0x20U & 0xff) |
               uVar4 >> (0x20U - iVar11 & 0xff);
    uVar33 = *(uint *)(iVar10 + local_64 * 4);
    puVar22 = (uint *)(iVar14 + uVar33);
    local_70 = 1;
    uVar4 = 0x20 - iVar13;
    puVar23 = (uint *)((int)puVar28 + 1);
    while( true ) {
      iVar3 = (int)puVar28 - iVar14;
      uVar31 = *puVar28 * -0x61c8864f >> (uVar4 & 0xff);
      uVar7 = *(uint *)(iVar12 + uVar31 * 4);
      *(int *)(iVar12 + uVar31 * 4) = iVar3;
      *(int *)(iVar10 + local_64 * 4) = iVar3;
      if (*(int *)((int)puVar28 + (1 - (int)puVar32)) == *(int *)((int)puVar28 + 1) &&
          puVar32 != (uint *)0x0) break;
      uVar31 = *puVar23;
      uVar27 = puVar23[1] * -0x485a9b9d + uVar31 * -0x30e44324 +
               (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
      local_64 = (uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar18 & 0xff) |
                 uVar27 << (iVar11 - 0x20U & 0xff) | uVar27 >> (0x20U - iVar11 & 0xff);
      local_4c = puVar28;
      if ((uVar2 < uVar33) && (puVar22[1] == puVar28[1] && *puVar22 == *puVar28)) {
        iVar26 = FUN_01b8eeb0(puVar28 + 2,puVar22 + 2,pcVar16);
        iVar26 = iVar26 + 8;
        local_6c = (int)puVar28 - (int)puVar22;
        goto LAB_01b8fa38;
      }
      uVar33 = *(uint *)(iVar10 + local_64 * 4);
      puVar22 = (uint *)(iVar14 + uVar33);
      if ((uVar2 < uVar7) &&
         (puVar6 = (uint *)(iVar14 + uVar7), *(uint *)(iVar14 + uVar7) == *puVar28)) {
        if ((uVar2 < uVar33) && (puVar23[1] == puVar22[1] && uVar31 == *(uint *)(iVar14 + uVar33)))
        {
          iVar26 = FUN_01b8eeb0(puVar23 + 2,puVar22 + 2,pcVar16);
          local_6c = (int)puVar23 - (int)puVar22;
          iVar26 = iVar26 + 8;
          local_4c = puVar23;
          goto LAB_01b8fca0;
        }
        iVar26 = FUN_01b8eeb0(puVar28 + 1,puVar6 + 1,pcVar16);
        iVar26 = iVar26 + 4;
        local_6c = (int)puVar28 - (int)puVar6;
        goto LAB_01b8fbf8;
      }
      if (puVar21 <= puVar23) {
        puVar21 = puVar21 + 0x40;
        HintPreloadData(puVar23 + 0x10);
        HintPreloadData(puVar23 + 0x20);
        local_70 = local_70 + 1;
      }
      if (puVar17 < (uint *)((int)puVar23 + local_70)) goto LAB_01b8f504;
      puVar28 = puVar23;
      puVar23 = (uint *)((int)puVar23 + local_70);
    }
    iVar5 = FUN_01b8eeb0((char *)((int)puVar28 + 5),(char *)((int)puVar28 + (5 - (int)puVar32)),
                         pcVar16);
    local_4c = (uint *)((int)puVar28 + 1);
    uVar33 = (int)local_4c - (int)param_4;
    iVar26 = iVar5 + 4;
    if (pcVar16 + -0x20 < local_4c) {
      FUN_01b8edc8(param_2[3],param_4,local_4c);
    }
    else {
      FUN_01b8ece8(param_2[3],param_4);
      if (0x10 < uVar33) {
        iVar30 = param_2[3];
        FUN_01b8ece8(iVar30 + 0x10,param_4 + 4);
        if (0x10 < (int)(uVar33 - 0x10)) {
          uVar31 = iVar30 + 0x20;
          do {
            FUN_01b8ece8(uVar31,param_4 + 8);
            FUN_01b8ece8(uVar31 + 0x10,param_4 + 0xc);
            uVar31 = uVar31 + 0x20;
            param_4 = param_4 + 8;
          } while (uVar31 < iVar30 + uVar33);
        }
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar19 = (int *)param_2[1];
    if (0xffff < uVar33) {
      param_2[9] = 1;
      param_2[10] = (int)piVar19 - *param_2 >> 3;
    }
    *(short *)(piVar19 + 1) = (short)uVar33;
    *piVar19 = 1;
    if (0xffff < iVar5 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)piVar19 - *param_2 >> 3;
    }
    *(short *)((int)piVar19 + 6) = (short)(iVar5 + 1U);
    local_6c = (uint)puVar32;
    goto LAB_01b8f788;
  }
LAB_01b8f504:
  if (local_3c != 0 && puVar32 != (uint *)0x0) {
    local_38 = local_3c;
  }
  else if (puVar32 == (uint *)0x0) {
    puVar32 = (uint *)local_3c;
  }
  if (local_48 == (uint *)0x0) {
    local_48 = (uint *)local_38;
  }
  local_38 = (uint)local_48;
  goto LAB_01b8f550;
LAB_01b90a7c:
  if (puVar28 <= local_48 || puVar21 <= puVar15) goto LAB_01b90aa4;
  puVar21 = (uint *)((int)puVar21 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar21) goto LAB_01b90aa4;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b90a7c;
LAB_01b90cf8:
  if (puVar28 <= local_48 || puVar21 <= puVar15) goto LAB_01b90aa4;
  puVar21 = (uint *)((int)puVar21 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar21) goto LAB_01b90aa4;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b90cf8;
LAB_01b90c44:
  if (puVar28 <= local_48 || puVar6 <= puVar15) goto LAB_01b90aa4;
  puVar6 = (uint *)((int)puVar6 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar6) goto LAB_01b90aa4;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b90c44;
LAB_01b90aa4:
  if (local_70 < 4) {
    *(int *)(iVar10 + local_68 * 4) = (int)puVar23 - iVar14;
  }
  uVar18 = (int)puVar28 - (int)local_48;
  if (pcVar16 + -0x20 < puVar28) {
    FUN_01b8edc8(param_2[3],local_48,puVar28);
  }
  else {
    FUN_01b8ece8(param_2[3],local_48);
    if (0x10 < uVar18) {
      iVar26 = param_2[3];
      FUN_01b8ece8(iVar26 + 0x10,local_48 + 4);
      if (0x10 < (int)(uVar18 - 0x10)) {
        uVar4 = iVar26 + 0x20;
        do {
          FUN_01b8ece8(uVar4,local_48 + 8);
          FUN_01b8ece8(uVar4 + 0x10,local_48 + 0xc);
          uVar4 = uVar4 + 0x20;
          local_48 = local_48 + 8;
        } while (uVar4 < iVar26 + uVar18);
      }
    }
  }
  param_2[3] = param_2[3] + uVar18;
  piVar19 = (int *)param_2[1];
  if (0xffff < uVar18) {
    param_2[9] = 1;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)(piVar19 + 1) = (short)uVar18;
  *piVar19 = local_6c + 3;
  if (0xffff < iVar30 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)((int)piVar19 + 6) = (short)(iVar30 - 3U);
  local_4c = puVar32;
LAB_01b9087c:
  param_2[1] = (int)(piVar19 + 2);
  param_4 = (uint *)((int)puVar28 + iVar30);
  if (param_4 <= puVar17) goto code_r0x01b90890;
  puVar28 = param_4;
  puVar32 = (uint *)local_6c;
  local_48 = param_4;
  goto LAB_01b90618;
code_r0x01b90890:
  iVar5 = iVar5 + 2;
  uVar18 = *(uint *)(iVar14 + iVar5);
  iVar26 = *(int *)(iVar14 + iVar5 + 4);
  uVar4 = iVar26 * -0x485a9b9d + uVar18 * -0x30e44324 +
          (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
  *(int *)(iVar10 + ((uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                     uVar4 << (0x20 - uVar31 & 0xff) | uVar4 >> (iVar25 + 0x20U & 0xff)) * 4) =
       iVar5;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
  uVar4 = *(int *)((int)param_4 + 2) * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
          (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar10 + ((uint)lVar1 >> (uVar31 & 0xff) | uVar4 << (0x20 - uVar31 & 0xff) |
                      uVar4 >> (iVar25 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-2 - iVar14));
  uVar4 = iVar26 * -0x40650000 + uVar18 * -0x30e44324 +
          (int)((ulonglong)uVar18 * 0xbf9b0000 >> 0x20);
  *(int *)(iVar12 + ((uint)((ulonglong)uVar18 * 0xbf9b0000) >> (uVar33 & 0xff) |
                     uVar4 << (0x20 - uVar33 & 0xff) | uVar4 >> (iVar3 + 0x20U & 0xff)) * 4) = iVar5
  ;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbf9b0000;
  uVar18 = *(int *)((int)param_4 + 3) * -0x40650000 + *(uint *)((int)param_4 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar12 + ((uint)lVar1 >> (uVar33 & 0xff) | uVar18 << (0x20 - uVar33 & 0xff) |
                      uVar18 >> (iVar3 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-1 - iVar14));
  while (uVar4 = local_6c, uVar18 = *param_4,
        local_4c != (uint *)0x0 && *(uint *)((int)param_4 - (int)local_4c) == uVar18) {
    iVar5 = FUN_01b8eeb0(param_4 + 1,(char *)((int)param_4 + (4 - (int)local_4c)),pcVar16);
    uVar27 = param_4[1];
    uVar7 = uVar27 * -0x40650000 + uVar18 * -0x30e44324 +
            (int)((ulonglong)uVar18 * 0xbf9b0000 >> 0x20);
    *(int *)(iVar12 + ((uint)((ulonglong)uVar18 * 0xbf9b0000) >> (uVar33 & 0xff) |
                       uVar7 << (0x20 - uVar33 & 0xff) | uVar7 >> (iVar3 + 0x20U & 0xff)) * 4) =
         (int)param_4 - iVar14;
    uVar7 = uVar27 * -0x485a9b9d + uVar18 * -0x30e44324 +
            (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
    iVar26 = param_2[3];
    *(int *)(iVar10 + ((uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                       uVar7 << (0x20 - uVar31 & 0xff) | uVar7 >> (iVar25 + 0x20U & 0xff)) * 4) =
         (int)param_4 - iVar14;
    if (pcVar16 + -0x20 < param_4) {
      FUN_01b8edc8(iVar26,param_4,param_4);
    }
    else {
      FUN_01b8ece8(iVar26,param_4);
    }
    puVar20 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar20 + 1) = 0;
    *puVar20 = 1;
    if (0xffff < iVar5 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)puVar20 - *param_2 >> 3;
    }
    *(short *)((int)puVar20 + 6) = (short)(iVar5 + 1U);
    param_2[1] = (int)(puVar20 + 2);
    param_4 = (uint *)((int)param_4 + iVar5 + 4);
    puVar23 = (uint *)uVar4;
    if (puVar17 < param_4) goto LAB_01b909d0;
    local_6c = (uint)local_4c;
    local_4c = (uint *)uVar4;
  }
  puVar23 = local_4c;
  local_4c = (uint *)uVar4;
LAB_01b909d0:
  puVar28 = param_4;
  puVar32 = local_4c;
  local_4c = puVar23;
  goto LAB_01b90610;
LAB_01b91414:
  if (puVar28 <= local_48 || puVar21 <= puVar15) goto LAB_01b9143c;
  puVar21 = (uint *)((int)puVar21 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar21) goto LAB_01b9143c;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b91414;
LAB_01b91690:
  if (puVar28 <= local_48 || puVar21 <= puVar15) goto LAB_01b9143c;
  puVar21 = (uint *)((int)puVar21 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar21) goto LAB_01b9143c;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b91690;
LAB_01b915dc:
  if (puVar28 <= local_48 || puVar6 <= puVar15) goto LAB_01b9143c;
  puVar6 = (uint *)((int)puVar6 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar6) goto LAB_01b9143c;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b915dc;
LAB_01b9143c:
  if (local_70 < 4) {
    *(int *)(iVar10 + local_68 * 4) = (int)puVar23 - iVar14;
  }
  uVar18 = (int)puVar28 - (int)local_48;
  if (pcVar16 + -0x20 < puVar28) {
    FUN_01b8edc8(param_2[3],local_48,puVar28);
  }
  else {
    FUN_01b8ece8(param_2[3],local_48);
    if (0x10 < uVar18) {
      iVar26 = param_2[3];
      FUN_01b8ece8(iVar26 + 0x10,local_48 + 4);
      if (0x10 < (int)(uVar18 - 0x10)) {
        uVar4 = iVar26 + 0x20;
        do {
          FUN_01b8ece8(uVar4,local_48 + 8);
          FUN_01b8ece8(uVar4 + 0x10,local_48 + 0xc);
          uVar4 = uVar4 + 0x20;
          local_48 = local_48 + 8;
        } while (uVar4 < iVar26 + uVar18);
      }
    }
  }
  param_2[3] = param_2[3] + uVar18;
  piVar19 = (int *)param_2[1];
  if (0xffff < uVar18) {
    param_2[9] = 1;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)(piVar19 + 1) = (short)uVar18;
  *piVar19 = local_6c + 3;
  if (0xffff < iVar30 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)((int)piVar19 + 6) = (short)(iVar30 - 3U);
  local_4c = puVar32;
LAB_01b91108:
  param_2[1] = (int)(piVar19 + 2);
  param_4 = (uint *)((int)puVar28 + iVar30);
  if (param_4 <= puVar17) goto code_r0x01b9111c;
  puVar28 = param_4;
  puVar32 = (uint *)local_6c;
  local_48 = param_4;
  goto LAB_01b90ea4;
code_r0x01b9111c:
  iVar5 = iVar5 + 2;
  uVar18 = *(uint *)(iVar14 + iVar5);
  iVar26 = *(int *)(iVar14 + iVar5 + 4);
  uVar4 = iVar26 * -0x485a9b9d + uVar18 * -0x30e44324 +
          (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
  *(int *)(iVar10 + ((uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                     uVar4 << (0x20 - uVar31 & 0xff) | uVar4 >> (iVar25 + 0x20U & 0xff)) * 4) =
       iVar5;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
  uVar4 = *(int *)((int)param_4 + 2) * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
          (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar10 + ((uint)lVar1 >> (uVar31 & 0xff) | uVar4 << (0x20 - uVar31 & 0xff) |
                      uVar4 >> (iVar25 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-2 - iVar14));
  uVar4 = iVar26 * -0x405a9d00 + uVar18 * -0x30e44324 +
          (int)((ulonglong)uVar18 * 0xbfa56300 >> 0x20);
  *(int *)(iVar12 + ((uint)((ulonglong)uVar18 * 0xbfa56300) >> (uVar33 & 0xff) |
                     uVar4 << (0x20 - uVar33 & 0xff) | uVar4 >> (iVar3 + 0x20U & 0xff)) * 4) = iVar5
  ;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbfa56300;
  uVar18 = *(int *)((int)param_4 + 3) * -0x405a9d00 + *(uint *)((int)param_4 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar12 + ((uint)lVar1 >> (uVar33 & 0xff) | uVar18 << (0x20 - uVar33 & 0xff) |
                      uVar18 >> (iVar3 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-1 - iVar14));
  do {
    uVar4 = local_6c;
    uVar18 = *param_4;
    puVar32 = (uint *)uVar4;
    if (local_4c == (uint *)0x0 || *(uint *)((int)param_4 - (int)local_4c) != uVar18) break;
    iVar5 = FUN_01b8eeb0(param_4 + 1,(char *)((int)param_4 + (4 - (int)local_4c)),pcVar16);
    uVar27 = param_4[1];
    uVar7 = uVar27 * -0x405a9d00 + uVar18 * -0x30e44324 +
            (int)((ulonglong)uVar18 * 0xbfa56300 >> 0x20);
    *(int *)(iVar12 + ((uint)((ulonglong)uVar18 * 0xbfa56300) >> (uVar33 & 0xff) |
                       uVar7 << (0x20 - uVar33 & 0xff) | uVar7 >> (iVar3 + 0x20U & 0xff)) * 4) =
         (int)param_4 - iVar14;
    uVar7 = uVar27 * -0x485a9b9d + uVar18 * -0x30e44324 +
            (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
    iVar26 = param_2[3];
    *(int *)(iVar10 + ((uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                       uVar7 << (0x20 - uVar31 & 0xff) | uVar7 >> (iVar25 + 0x20U & 0xff)) * 4) =
         (int)param_4 - iVar14;
    if (pcVar16 + -0x20 < param_4) {
      FUN_01b8edc8(iVar26,param_4,param_4);
    }
    else {
      FUN_01b8ece8(iVar26,param_4);
    }
    puVar20 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar20 + 1) = 0;
    *puVar20 = 1;
    if (0xffff < iVar5 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)puVar20 - *param_2 >> 3;
    }
    *(short *)((int)puVar20 + 6) = (short)(iVar5 + 1U);
    param_2[1] = (int)(puVar20 + 2);
    param_4 = (uint *)((int)param_4 + iVar5 + 4);
    local_6c = (uint)local_4c;
    puVar32 = local_4c;
    local_4c = (uint *)uVar4;
  } while (param_4 <= puVar17);
  puVar28 = param_4;
  goto LAB_01b90e9c;
LAB_01b901dc:
  if (puVar28 <= local_48 || puVar21 <= puVar15) goto LAB_01b90204;
  puVar21 = (uint *)((int)puVar21 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar21) goto LAB_01b90204;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b901dc;
LAB_01b90458:
  if (puVar28 <= local_48 || puVar21 <= puVar15) goto LAB_01b90204;
  puVar21 = (uint *)((int)puVar21 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar21) goto LAB_01b90204;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b90458;
LAB_01b903a4:
  if (puVar28 <= local_48 || puVar6 <= puVar15) goto LAB_01b90204;
  puVar6 = (uint *)((int)puVar6 + -1);
  if (*(char *)((int)puVar28 + -1) != *(char *)puVar6) goto LAB_01b90204;
  iVar30 = iVar30 + 1;
  puVar28 = (uint *)((int)puVar28 + -1);
  goto LAB_01b903a4;
LAB_01b90204:
  if (local_70 < 4) {
    *(int *)(iVar10 + local_68 * 4) = (int)puVar23 - iVar14;
  }
  uVar18 = (int)puVar28 - (int)local_48;
  if (pcVar16 + -0x20 < puVar28) {
    FUN_01b8edc8(param_2[3],local_48,puVar28);
  }
  else {
    FUN_01b8ece8(param_2[3],local_48);
    if (0x10 < uVar18) {
      iVar26 = param_2[3];
      FUN_01b8ece8(iVar26 + 0x10,local_48 + 4);
      if (0x10 < (int)(uVar18 - 0x10)) {
        uVar4 = iVar26 + 0x20;
        do {
          FUN_01b8ece8(uVar4,local_48 + 8);
          FUN_01b8ece8(uVar4 + 0x10,local_48 + 0xc);
          uVar4 = uVar4 + 0x20;
          local_48 = local_48 + 8;
        } while (uVar4 < iVar26 + uVar18);
      }
    }
  }
  param_2[3] = param_2[3] + uVar18;
  piVar19 = (int *)param_2[1];
  if (0xffff < uVar18) {
    param_2[9] = 1;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)(piVar19 + 1) = (short)uVar18;
  *piVar19 = local_6c + 3;
  if (0xffff < iVar30 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)((int)piVar19 + 6) = (short)(iVar30 - 3U);
  local_4c = puVar32;
LAB_01b8ffe4:
  param_2[1] = (int)(piVar19 + 2);
  param_4 = (uint *)((int)puVar28 + iVar30);
  if (param_4 <= puVar17) goto code_r0x01b8fff8;
  puVar28 = param_4;
  puVar32 = (uint *)local_6c;
  local_48 = param_4;
  goto LAB_01b8fd24;
code_r0x01b8fff8:
  iVar5 = iVar5 + 2;
  uVar18 = *(uint *)(iVar14 + iVar5);
  iVar26 = *(int *)(iVar14 + iVar5 + 4);
  uVar4 = iVar26 * -0x485a9b9d + uVar18 * -0x30e44324 +
          (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
  *(int *)(iVar10 + ((uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                     uVar4 << (0x20 - uVar31 & 0xff) | uVar4 >> (iVar25 + 0x20U & 0xff)) * 4) =
       iVar5;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
  uVar4 = *(int *)((int)param_4 + 2) * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
          (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar10 + ((uint)lVar1 >> (uVar31 & 0xff) | uVar4 << (0x20 - uVar31 & 0xff) |
                      uVar4 >> (iVar25 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-2 - iVar14));
  uVar4 = iVar26 * -0x45000000 + uVar18 * -0x30e44324 +
          (int)((ulonglong)uVar18 * 0xbb000000 >> 0x20);
  *(int *)(iVar12 + ((uint)((ulonglong)uVar18 * 0xbb000000) >> (uVar33 & 0xff) |
                     uVar4 << (0x20 - uVar33 & 0xff) | uVar4 >> (iVar3 + 0x20U & 0xff)) * 4) = iVar5
  ;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbb000000;
  uVar18 = *(int *)((int)param_4 + 3) * -0x45000000 + *(uint *)((int)param_4 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar12 + ((uint)lVar1 >> (uVar33 & 0xff) | uVar18 << (0x20 - uVar33 & 0xff) |
                      uVar18 >> (iVar3 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-1 - iVar14));
  while (uVar4 = local_6c, uVar18 = *param_4,
        local_4c != (uint *)0x0 && *(uint *)((int)param_4 - (int)local_4c) == uVar18) {
    iVar5 = FUN_01b8eeb0(param_4 + 1,(char *)((int)param_4 + (4 - (int)local_4c)),pcVar16);
    uVar27 = param_4[1];
    uVar7 = uVar27 * -0x45000000 + uVar18 * -0x30e44324 +
            (int)((ulonglong)uVar18 * 0xbb000000 >> 0x20);
    *(int *)(iVar12 + ((uint)((ulonglong)uVar18 * 0xbb000000) >> (uVar33 & 0xff) |
                       uVar7 << (0x20 - uVar33 & 0xff) | uVar7 >> (iVar3 + 0x20U & 0xff)) * 4) =
         (int)param_4 - iVar14;
    uVar7 = uVar27 * -0x485a9b9d + uVar18 * -0x30e44324 +
            (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
    iVar26 = param_2[3];
    *(int *)(iVar10 + ((uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar31 & 0xff) |
                       uVar7 << (0x20 - uVar31 & 0xff) | uVar7 >> (iVar25 + 0x20U & 0xff)) * 4) =
         (int)param_4 - iVar14;
    if (pcVar16 + -0x20 < param_4) {
      FUN_01b8edc8(iVar26,param_4,param_4);
    }
    else {
      FUN_01b8ece8(iVar26,param_4);
    }
    puVar20 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar20 + 1) = 0;
    *puVar20 = 1;
    if (0xffff < iVar5 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)puVar20 - *param_2 >> 3;
    }
    *(short *)((int)puVar20 + 6) = (short)(iVar5 + 1U);
    param_2[1] = (int)(puVar20 + 2);
    param_4 = (uint *)((int)param_4 + iVar5 + 4);
    puVar23 = (uint *)uVar4;
    if (puVar17 < param_4) goto LAB_01b90138;
    local_6c = (uint)local_4c;
    local_4c = (uint *)uVar4;
  }
  puVar23 = local_4c;
  local_4c = (uint *)uVar4;
LAB_01b90138:
  puVar28 = param_4;
  puVar32 = local_4c;
  local_4c = puVar23;
  goto LAB_01b8fd1c;
LAB_01b8fa38:
  if (local_4c <= param_4 || puVar22 <= puVar15) goto LAB_01b8fa5c;
  puVar22 = (uint *)((int)puVar22 + -1);
  if (*(char *)((int)local_4c + -1) != *(char *)puVar22) goto LAB_01b8fa5c;
  iVar26 = iVar26 + 1;
  local_4c = (uint *)((int)local_4c + -1);
  goto LAB_01b8fa38;
LAB_01b8fca0:
  if (local_4c <= param_4 || puVar22 <= puVar15) goto LAB_01b8fa5c;
  puVar22 = (uint *)((int)puVar22 + -1);
  if (*(char *)((int)local_4c + -1) != *(char *)puVar22) goto LAB_01b8fa5c;
  iVar26 = iVar26 + 1;
  local_4c = (uint *)((int)local_4c + -1);
  goto LAB_01b8fca0;
LAB_01b8fbf8:
  if (local_4c <= param_4 || puVar6 <= puVar15) goto LAB_01b8fa5c;
  puVar6 = (uint *)((int)puVar6 + -1);
  if (*(char *)((int)local_4c + -1) != *(char *)puVar6) goto LAB_01b8fa5c;
  iVar26 = iVar26 + 1;
  local_4c = (uint *)((int)local_4c + -1);
  goto LAB_01b8fbf8;
LAB_01b8fa5c:
  if (local_70 < 4) {
    *(int *)(iVar10 + local_64 * 4) = (int)puVar23 - iVar14;
  }
  uVar33 = (int)local_4c - (int)param_4;
  if (pcVar16 + -0x20 < local_4c) {
    FUN_01b8edc8(param_2[3],param_4,local_4c);
  }
  else {
    FUN_01b8ece8(param_2[3],param_4);
    if (0x10 < uVar33) {
      iVar5 = param_2[3];
      FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar33 - 0x10)) {
        uVar31 = iVar5 + 0x20;
        do {
          FUN_01b8ece8(uVar31,param_4 + 8);
          FUN_01b8ece8(uVar31 + 0x10,param_4 + 0xc);
          uVar31 = uVar31 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar31 < iVar5 + uVar33);
      }
    }
  }
  param_2[3] = param_2[3] + uVar33;
  piVar19 = (int *)param_2[1];
  if (0xffff < uVar33) {
    param_2[9] = 1;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)(piVar19 + 1) = (short)uVar33;
  *piVar19 = local_6c + 3;
  if (0xffff < iVar26 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)piVar19 - *param_2 >> 3;
  }
  *(short *)((int)piVar19 + 6) = (short)(iVar26 - 3U);
  local_48 = puVar32;
LAB_01b8f788:
  param_2[1] = (int)(piVar19 + 2);
  param_4 = (uint *)((int)local_4c + iVar26);
  if (param_4 <= puVar17) goto code_r0x01b8f7a0;
  puVar28 = param_4;
  puVar32 = (uint *)local_6c;
  goto LAB_01b8f4e8;
code_r0x01b8f7a0:
  iVar3 = iVar3 + 2;
  lVar1 = (ulonglong)*(uint *)(iVar14 + iVar3) * 0xb7a56463;
  uVar33 = *(int *)(iVar14 + iVar3 + 4) * -0x485a9b9d + *(uint *)(iVar14 + iVar3) * -0x30e44324 +
           (int)((ulonglong)lVar1 >> 0x20);
  iVar5 = *(int *)((int)param_4 + 2);
  *(int *)(iVar10 + ((uint)lVar1 >> (uVar18 & 0xff) | uVar33 << (0x20 - uVar18 & 0xff) |
                    uVar33 >> (iVar25 + 0x20U & 0xff)) * 4) = iVar3;
  lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
  uVar33 = iVar5 * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar1 >> 0x20);
  *(char **)(iVar10 + ((uint)lVar1 >> (uVar18 & 0xff) | uVar33 << (0x20 - uVar18 & 0xff) |
                      uVar33 >> (iVar25 + 0x20U & 0xff)) * 4) =
       (char *)((int)param_4 + (-2 - iVar14));
  *(int *)(iVar12 + ((uint)(*(int *)(iVar14 + iVar3) * -0x61c8864f) >> (uVar4 & 0xff)) * 4) = iVar3;
  *(int *)(iVar12 + ((uint)(*(int *)((int)param_4 + -1) * -0x61c8864f) >> (uVar4 & 0xff)) * 4) =
       ((int)param_4 + -1) - iVar14;
  do {
    uVar31 = local_6c;
    uVar33 = *param_4;
    puVar32 = (uint *)uVar31;
    if (local_48 == (uint *)0x0 || *(uint *)((int)param_4 - (int)local_48) != uVar33) break;
    iVar3 = FUN_01b8eeb0(param_4 + 1,(char *)((int)param_4 + (4 - (int)local_48)),pcVar16);
    uVar7 = param_4[1];
    *(int *)(iVar12 + (uVar33 * -0x61c8864f >> (uVar4 & 0xff)) * 4) = (int)param_4 - iVar14;
    lVar1 = (ulonglong)*param_4 * 0xb7a56463;
    uVar33 = uVar7 * -0x485a9b9d + *param_4 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    iVar5 = param_2[3];
    *(int *)(iVar10 + ((uint)lVar1 >> (uVar18 & 0xff) | uVar33 << (0x20 - uVar18 & 0xff) |
                      uVar33 >> (iVar25 + 0x20U & 0xff)) * 4) = (int)param_4 - iVar14;
    if (pcVar16 + -0x20 < param_4) {
      FUN_01b8edc8(iVar5,param_4,param_4);
    }
    else {
      FUN_01b8ece8(iVar5,param_4);
    }
    puVar20 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar20 + 1) = 0;
    *puVar20 = 1;
    if (0xffff < iVar3 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)puVar20 - *param_2 >> 3;
    }
    *(short *)((int)puVar20 + 6) = (short)(iVar3 + 1U);
    param_2[1] = (int)(puVar20 + 2);
    param_4 = (uint *)((int)param_4 + iVar3 + 4);
    local_6c = (uint)local_48;
    puVar32 = local_48;
    local_48 = (uint *)uVar31;
  } while (param_4 <= puVar17);
  puVar28 = param_4;
  goto LAB_01b8f4e0;
}

