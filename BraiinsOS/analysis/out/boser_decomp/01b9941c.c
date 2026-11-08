// FUN_01b9941c @ 01b9941c size=8636 calls_out=4 calls_in=0
// strings: 

int FUN_01b9941c(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  char *pcVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int local_7c;
  uint *local_70;
  char *local_60;
  int local_5c;
  char *local_2c;
  
  iVar20 = *(int *)(param_1 + 0x5c);
  iVar21 = *(int *)(param_1 + 0xc0);
  iVar22 = *(int *)(param_1 + 0xcc);
  if (iVar22 == 0) {
    iVar22 = 1;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  piVar23 = *(int **)(param_1 + 4);
  iVar32 = *(int *)(param_1 + 200);
  pcVar10 = (char *)((int)piVar23 + uVar9);
  puVar3 = *(undefined4 **)(param_1 + 0xb4);
  pcVar11 = (char *)((int)param_4 + param_5);
  puVar12 = (uint *)(pcVar11 + -8);
  local_2c = (char *)*param_3;
  puVar24 = (uint *)((int)param_4 + iVar22);
  local_60 = (char *)param_3[1];
  iVar13 = puVar3[0x17];
  uVar14 = puVar3[3];
  iVar15 = puVar3[1];
  pcVar16 = (char *)(iVar15 + uVar14);
  pcVar17 = (char *)*puVar3;
  uVar4 = puVar3[0x30];
  pcVar18 = pcVar17 + ((int)param_4 - (int)pcVar10);
  iVar5 = *(int *)(param_1 + 0xd8);
  if (iVar32 == 6) {
    if (iVar5 != 0) {
      for (uVar6 = 0; uVar6 < (uint)(4 << (uVar4 & 0xff)); uVar6 = uVar6 + 0x40) {
        HintPreloadData(iVar13 + uVar6);
      }
    }
    if (pcVar16 == pcVar18) {
      puVar8 = (uint *)((int)param_4 + 1);
    }
    else {
      puVar8 = param_4;
    }
LAB_01b9a558:
    pcVar18 = local_2c;
    if (puVar24 <= puVar12) {
      puVar31 = puVar8 + 0x40;
      lVar1 = (ulonglong)*puVar8 * 0xbf9b0000;
      uVar2 = (uint)lVar1;
      uVar26 = puVar8[1] * -0x40650000 + *puVar8 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      iVar5 = -iVar21;
      uVar6 = iVar5 + 0x40;
      uVar19 = uVar2 >> (uVar6 & 0xff) | uVar26 << (iVar21 - 0x20U & 0xff) |
               uVar26 >> (0x20U - iVar21 & 0xff);
      uVar2 = uVar2 >> (0x38 - uVar4 & 0xff) | uVar26 << (uVar4 - 0x18 & 0xff) |
              uVar26 >> (0x18 - uVar4 & 0xff);
      uVar26 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
      uVar2 = uVar2 ^ uVar26;
      uVar33 = *(uint *)(iVar20 + uVar19 * 4);
      local_70 = (uint *)((int)puVar8 - (int)piVar23);
      local_7c = iVar22;
      do {
        puVar25 = puVar24;
        uVar34 = (1 - (int)local_2c) + (int)local_70;
        if (uVar34 < uVar9) {
          piVar7 = (int *)(pcVar17 + iVar15 + uVar34 + (-uVar9 - iVar15));
        }
        else {
          piVar7 = piVar23;
        }
        uVar28 = *puVar25;
        if (uVar34 >= uVar9) {
          piVar7 = (int *)((int)piVar7 + uVar34);
        }
        uVar35 = puVar25[1];
        *(uint **)(iVar20 + uVar19 * 4) = local_70;
        if ((2 < (uVar9 - 1) - uVar34) && (*piVar7 == *(int *)((int)puVar8 + 1))) {
          puVar24 = (uint *)((int)puVar8 + 1);
          pcVar27 = pcVar11;
          if (uVar34 < uVar9) {
            pcVar27 = pcVar17;
          }
          uVar26 = (int)puVar24 - (int)param_4;
          iVar32 = FUN_01b9530c((char *)((int)puVar8 + 5),piVar7 + 1,pcVar11,pcVar27,pcVar10);
          iVar30 = iVar32 + 4;
          if (pcVar11 + -0x20 < puVar24) {
            FUN_01b95138(param_2[3],param_4,puVar24);
          }
          else {
            FUN_01b95058(param_2[3],param_4);
            if (0x10 < uVar26) {
              iVar29 = param_2[3];
              FUN_01b95058(iVar29 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar26 - 0x10)) {
                uVar2 = iVar29 + 0x20;
                do {
                  FUN_01b95058(uVar2,param_4 + 8);
                  FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
                  uVar2 = uVar2 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar2 < iVar29 + uVar26);
              }
            }
          }
          param_2[3] = param_2[3] + uVar26;
          puVar3 = (undefined4 *)param_2[1];
          if (0xffff < uVar26) {
            param_2[9] = 1;
            param_2[10] = (int)puVar3 - *param_2 >> 3;
          }
          *(short *)(puVar3 + 1) = (short)uVar26;
          *puVar3 = 1;
          if (0xffff < iVar32 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar3 - *param_2 >> 3;
          }
          *(short *)((int)puVar3 + 6) = (short)(iVar32 + 1U);
          local_2c = local_60;
          goto LAB_01b9a7f0;
        }
        puVar24 = puVar8;
        if ((((uVar2 & 0xff) == 0) && (uVar14 < uVar26 >> 8)) &&
           (pcVar27 = (char *)(iVar15 + (uVar26 >> 8)), *(uint *)(iVar15 + (uVar26 >> 8)) == *puVar8
           )) {
          if (uVar33 <= uVar9) {
            pcVar18 = pcVar17 + (int)local_70 + (-(uVar9 + (uVar26 >> 8)) - iVar15);
            iVar30 = FUN_01b9530c(puVar8 + 1,pcVar27 + 4,pcVar11,pcVar17,pcVar10);
            iVar30 = iVar30 + 4;
            goto LAB_01b9aa8c;
          }
LAB_01b9abb8:
          pcVar27 = (char *)((int)piVar23 + uVar33);
          if (*(uint *)((int)piVar23 + uVar33) == *puVar8) goto code_r0x01b9abd0;
        }
        else if (uVar9 < uVar33) goto LAB_01b9abb8;
        if (puVar31 <= puVar25) {
          puVar31 = puVar31 + 0x40;
          local_7c = local_7c + 1;
        }
        if (puVar12 < (uint *)((int)puVar25 + local_7c)) break;
        lVar1 = (ulonglong)uVar28 * 0xbf9b0000;
        uVar26 = (uint)lVar1;
        uVar2 = uVar35 * -0x40650000 + uVar28 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = uVar26 >> (uVar6 & 0xff) | uVar2 << (iVar21 - 0x20U & 0xff) |
                 uVar2 >> (0x20U - iVar21 & 0xff);
        uVar2 = uVar26 >> (0x38 - uVar4 & 0xff) | uVar2 << (uVar4 - 0x18 & 0xff) |
                uVar2 >> (0x18 - uVar4 & 0xff);
        local_70 = (uint *)((int)puVar25 - (int)piVar23);
        uVar26 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
        uVar2 = uVar2 ^ uVar26;
        uVar33 = *(uint *)(iVar20 + uVar19 * 4);
        puVar24 = (uint *)((int)puVar25 + local_7c);
        puVar8 = puVar25;
      } while( true );
    }
    goto LAB_01b99c0c;
  }
  if (iVar32 == 7) {
    if (iVar5 != 0) {
      for (uVar6 = 0; uVar6 < (uint)(4 << (uVar4 & 0xff)); uVar6 = uVar6 + 0x40) {
        HintPreloadData(iVar13 + uVar6);
      }
    }
    if (pcVar16 == pcVar18) {
      puVar8 = (uint *)((int)param_4 + 1);
    }
    else {
      puVar8 = param_4;
    }
LAB_01b9adb8:
    pcVar18 = local_2c;
    if (puVar24 <= puVar12) {
      puVar31 = puVar8 + 0x40;
      lVar1 = (ulonglong)*puVar8 * 0xbfa56300;
      uVar2 = (uint)lVar1;
      uVar26 = puVar8[1] * -0x405a9d00 + *puVar8 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      iVar5 = -iVar21;
      uVar6 = iVar5 + 0x40;
      uVar19 = uVar2 >> (uVar6 & 0xff) | uVar26 << (iVar21 - 0x20U & 0xff) |
               uVar26 >> (0x20U - iVar21 & 0xff);
      uVar2 = uVar2 >> (0x38 - uVar4 & 0xff) | uVar26 << (uVar4 - 0x18 & 0xff) |
              uVar26 >> (0x18 - uVar4 & 0xff);
      uVar26 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
      uVar2 = uVar2 ^ uVar26;
      uVar33 = *(uint *)(iVar20 + uVar19 * 4);
      local_70 = (uint *)((int)puVar8 - (int)piVar23);
      local_7c = iVar22;
      do {
        puVar25 = puVar24;
        uVar34 = (1 - (int)local_2c) + (int)local_70;
        if (uVar34 < uVar9) {
          piVar7 = (int *)(pcVar17 + iVar15 + uVar34 + (-uVar9 - iVar15));
        }
        else {
          piVar7 = piVar23;
        }
        uVar28 = *puVar25;
        if (uVar34 >= uVar9) {
          piVar7 = (int *)((int)piVar7 + uVar34);
        }
        uVar35 = puVar25[1];
        *(uint **)(iVar20 + uVar19 * 4) = local_70;
        if ((2 < (uVar9 - 1) - uVar34) && (*piVar7 == *(int *)((int)puVar8 + 1))) {
          puVar24 = (uint *)((int)puVar8 + 1);
          pcVar27 = pcVar11;
          if (uVar34 < uVar9) {
            pcVar27 = pcVar17;
          }
          uVar26 = (int)puVar24 - (int)param_4;
          iVar32 = FUN_01b9530c((char *)((int)puVar8 + 5),piVar7 + 1,pcVar11,pcVar27,pcVar10);
          iVar30 = iVar32 + 4;
          if (pcVar11 + -0x20 < puVar24) {
            FUN_01b95138(param_2[3],param_4,puVar24);
          }
          else {
            FUN_01b95058(param_2[3],param_4);
            if (0x10 < uVar26) {
              iVar29 = param_2[3];
              FUN_01b95058(iVar29 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar26 - 0x10)) {
                uVar2 = iVar29 + 0x20;
                do {
                  FUN_01b95058(uVar2,param_4 + 8);
                  FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
                  uVar2 = uVar2 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar2 < iVar29 + uVar26);
              }
            }
          }
          param_2[3] = param_2[3] + uVar26;
          puVar3 = (undefined4 *)param_2[1];
          if (0xffff < uVar26) {
            param_2[9] = 1;
            param_2[10] = (int)puVar3 - *param_2 >> 3;
          }
          *(short *)(puVar3 + 1) = (short)uVar26;
          *puVar3 = 1;
          if (0xffff < iVar32 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar3 - *param_2 >> 3;
          }
          *(short *)((int)puVar3 + 6) = (short)(iVar32 + 1U);
          local_2c = local_60;
          goto LAB_01b9b050;
        }
        puVar24 = puVar8;
        if ((((uVar2 & 0xff) == 0) && (uVar14 < uVar26 >> 8)) &&
           (pcVar27 = (char *)(iVar15 + (uVar26 >> 8)), *(uint *)(iVar15 + (uVar26 >> 8)) == *puVar8
           )) {
          if (uVar33 <= uVar9) {
            pcVar18 = pcVar17 + (int)local_70 + (-(uVar9 + (uVar26 >> 8)) - iVar15);
            iVar30 = FUN_01b9530c(puVar8 + 1,pcVar27 + 4,pcVar11,pcVar17,pcVar10);
            iVar30 = iVar30 + 4;
            goto LAB_01b9b2ec;
          }
LAB_01b9b418:
          pcVar27 = (char *)((int)piVar23 + uVar33);
          if (*(uint *)((int)piVar23 + uVar33) == *puVar8) goto code_r0x01b9b430;
        }
        else if (uVar9 < uVar33) goto LAB_01b9b418;
        if (puVar31 <= puVar25) {
          puVar31 = puVar31 + 0x40;
          local_7c = local_7c + 1;
        }
        if (puVar12 < (uint *)((int)puVar25 + local_7c)) break;
        lVar1 = (ulonglong)uVar28 * 0xbfa56300;
        uVar26 = (uint)lVar1;
        uVar2 = uVar35 * -0x405a9d00 + uVar28 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = uVar26 >> (uVar6 & 0xff) | uVar2 << (iVar21 - 0x20U & 0xff) |
                 uVar2 >> (0x20U - iVar21 & 0xff);
        uVar2 = uVar26 >> (0x38 - uVar4 & 0xff) | uVar2 << (uVar4 - 0x18 & 0xff) |
                uVar2 >> (0x18 - uVar4 & 0xff);
        local_70 = (uint *)((int)puVar25 - (int)piVar23);
        uVar26 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
        uVar2 = uVar2 ^ uVar26;
        uVar33 = *(uint *)(iVar20 + uVar19 * 4);
        puVar24 = (uint *)((int)puVar25 + local_7c);
        puVar8 = puVar25;
      } while( true );
    }
    goto LAB_01b99c0c;
  }
  if (iVar32 == 5) {
    if (iVar5 != 0) {
      for (uVar6 = 0; uVar6 < (uint)(4 << (uVar4 & 0xff)); uVar6 = uVar6 + 0x40) {
        HintPreloadData(iVar13 + uVar6);
      }
    }
    if (pcVar16 == pcVar18) {
      puVar8 = (uint *)((int)param_4 + 1);
    }
    else {
      puVar8 = param_4;
    }
LAB_01b99ce4:
    pcVar18 = local_2c;
    if (puVar24 <= puVar12) {
      puVar31 = puVar8 + 0x40;
      lVar1 = (ulonglong)*puVar8 * 0xbb000000;
      uVar2 = (uint)lVar1;
      uVar26 = puVar8[1] * -0x45000000 + *puVar8 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      iVar5 = -iVar21;
      uVar6 = iVar5 + 0x40;
      uVar19 = uVar2 >> (uVar6 & 0xff) | uVar26 << (iVar21 - 0x20U & 0xff) |
               uVar26 >> (0x20U - iVar21 & 0xff);
      uVar2 = uVar2 >> (0x38 - uVar4 & 0xff) | uVar26 << (uVar4 - 0x18 & 0xff) |
              uVar26 >> (0x18 - uVar4 & 0xff);
      uVar26 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
      uVar2 = uVar2 ^ uVar26;
      uVar33 = *(uint *)(iVar20 + uVar19 * 4);
      local_70 = (uint *)((int)puVar8 - (int)piVar23);
      local_7c = iVar22;
      do {
        puVar25 = puVar24;
        uVar34 = (1 - (int)local_2c) + (int)local_70;
        if (uVar34 < uVar9) {
          piVar7 = (int *)(pcVar17 + iVar15 + uVar34 + (-uVar9 - iVar15));
        }
        else {
          piVar7 = piVar23;
        }
        uVar28 = *puVar25;
        if (uVar34 >= uVar9) {
          piVar7 = (int *)((int)piVar7 + uVar34);
        }
        uVar35 = puVar25[1];
        *(uint **)(iVar20 + uVar19 * 4) = local_70;
        if ((2 < (uVar9 - 1) - uVar34) && (*piVar7 == *(int *)((int)puVar8 + 1))) {
          puVar24 = (uint *)((int)puVar8 + 1);
          pcVar27 = pcVar11;
          if (uVar34 < uVar9) {
            pcVar27 = pcVar17;
          }
          uVar26 = (int)puVar24 - (int)param_4;
          iVar32 = FUN_01b9530c((char *)((int)puVar8 + 5),piVar7 + 1,pcVar11,pcVar27,pcVar10);
          iVar30 = iVar32 + 4;
          if (pcVar11 + -0x20 < puVar24) {
            FUN_01b95138(param_2[3],param_4,puVar24);
          }
          else {
            FUN_01b95058(param_2[3],param_4);
            if (0x10 < uVar26) {
              iVar29 = param_2[3];
              FUN_01b95058(iVar29 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar26 - 0x10)) {
                uVar2 = iVar29 + 0x20;
                do {
                  FUN_01b95058(uVar2,param_4 + 8);
                  FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
                  uVar2 = uVar2 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar2 < iVar29 + uVar26);
              }
            }
          }
          param_2[3] = param_2[3] + uVar26;
          puVar3 = (undefined4 *)param_2[1];
          if (0xffff < uVar26) {
            param_2[9] = 1;
            param_2[10] = (int)puVar3 - *param_2 >> 3;
          }
          *(short *)(puVar3 + 1) = (short)uVar26;
          *puVar3 = 1;
          if (0xffff < iVar32 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar3 - *param_2 >> 3;
          }
          *(short *)((int)puVar3 + 6) = (short)(iVar32 + 1U);
          local_2c = local_60;
          goto LAB_01b99f7c;
        }
        puVar24 = puVar8;
        if ((((uVar2 & 0xff) == 0) && (uVar14 < uVar26 >> 8)) &&
           (pcVar27 = (char *)(iVar15 + (uVar26 >> 8)), *(uint *)(iVar15 + (uVar26 >> 8)) == *puVar8
           )) {
          if (uVar33 <= uVar9) {
            pcVar18 = pcVar17 + (int)local_70 + (-(uVar9 + (uVar26 >> 8)) - iVar15);
            iVar30 = FUN_01b9530c(puVar8 + 1,pcVar27 + 4,pcVar11,pcVar17,pcVar10);
            iVar30 = iVar30 + 4;
            goto LAB_01b9a21c;
          }
LAB_01b9a348:
          pcVar27 = (char *)((int)piVar23 + uVar33);
          if (*(uint *)((int)piVar23 + uVar33) == *puVar8) goto code_r0x01b9a360;
        }
        else if (uVar9 < uVar33) goto LAB_01b9a348;
        if (puVar31 <= puVar25) {
          puVar31 = puVar31 + 0x40;
          local_7c = local_7c + 1;
        }
        if (puVar12 < (uint *)((int)puVar25 + local_7c)) break;
        lVar1 = (ulonglong)uVar28 * 0xbb000000;
        uVar26 = (uint)lVar1;
        uVar2 = uVar35 * -0x45000000 + uVar28 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = uVar26 >> (uVar6 & 0xff) | uVar2 << (iVar21 - 0x20U & 0xff) |
                 uVar2 >> (0x20U - iVar21 & 0xff);
        uVar2 = uVar26 >> (0x38 - uVar4 & 0xff) | uVar2 << (uVar4 - 0x18 & 0xff) |
                uVar2 >> (0x18 - uVar4 & 0xff);
        local_70 = (uint *)((int)puVar25 - (int)piVar23);
        uVar26 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
        uVar2 = uVar2 ^ uVar26;
        uVar33 = *(uint *)(iVar20 + uVar19 * 4);
        puVar24 = (uint *)((int)puVar25 + local_7c);
        puVar8 = puVar25;
      } while( true );
    }
    goto LAB_01b99c0c;
  }
  if (iVar5 != 0) {
    for (uVar6 = 0; uVar6 < (uint)(4 << (uVar4 & 0xff)); uVar6 = uVar6 + 0x40) {
      HintPreloadData(iVar13 + uVar6);
    }
  }
  puVar8 = param_4;
  if (pcVar16 == pcVar18) {
    puVar8 = (uint *)((int)param_4 + 1);
  }
  uVar6 = 0x20 - iVar21;
LAB_01b99564:
  pcVar18 = local_2c;
  if (puVar24 <= puVar12) {
    uVar26 = *puVar8 * -0x61c8864f >> (uVar6 & 0xff);
    uVar2 = *puVar8 * -0x61c8864f >> (0x18 - uVar4 & 0xff);
    uVar19 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
    uVar2 = uVar2 ^ uVar19;
    uVar33 = *(uint *)(iVar20 + uVar26 * 4);
    local_5c = (int)puVar8 - (int)piVar23;
    local_70 = puVar8 + 0x40;
    local_7c = iVar22;
    do {
      puVar31 = puVar24;
      uVar34 = (1 - (int)local_2c) + local_5c;
      if (uVar34 < uVar9) {
        piVar7 = (int *)(pcVar17 + iVar15 + uVar34 + (-uVar9 - iVar15));
      }
      else {
        piVar7 = piVar23;
      }
      uVar28 = *puVar31;
      if (uVar34 >= uVar9) {
        piVar7 = (int *)((int)piVar7 + uVar34);
      }
      *(int *)(iVar20 + uVar26 * 4) = local_5c;
      if ((2 < (uVar9 - 1) - uVar34) && (*piVar7 == *(int *)((int)puVar8 + 1))) {
        puVar24 = (uint *)((int)puVar8 + 1);
        pcVar27 = pcVar11;
        if (uVar34 < uVar9) {
          pcVar27 = pcVar17;
        }
        uVar26 = (int)puVar24 - (int)param_4;
        iVar21 = FUN_01b9530c((char *)((int)puVar8 + 5),piVar7 + 1,pcVar11,pcVar27,pcVar10);
        iVar5 = iVar21 + 4;
        if (pcVar11 + -0x20 < puVar24) {
          FUN_01b95138(param_2[3],param_4,puVar24);
        }
        else {
          FUN_01b95058(param_2[3],param_4);
          if (0x10 < uVar26) {
            iVar32 = param_2[3];
            FUN_01b95058(iVar32 + 0x10,param_4 + 4);
            if (0x10 < (int)(uVar26 - 0x10)) {
              uVar2 = iVar32 + 0x20;
              do {
                FUN_01b95058(uVar2,param_4 + 8);
                FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
                uVar2 = uVar2 + 0x20;
                param_4 = param_4 + 8;
              } while (uVar2 < iVar32 + uVar26);
            }
          }
        }
        param_2[3] = param_2[3] + uVar26;
        puVar3 = (undefined4 *)param_2[1];
        if (0xffff < uVar26) {
          param_2[9] = 1;
          param_2[10] = (int)puVar3 - *param_2 >> 3;
        }
        *(short *)(puVar3 + 1) = (short)uVar26;
        *puVar3 = 1;
        if (0xffff < iVar21 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar3 - *param_2 >> 3;
        }
        *(short *)((int)puVar3 + 6) = (short)(iVar21 + 1U);
        local_2c = local_60;
        goto LAB_01b99784;
      }
      puVar24 = puVar8;
      if ((((uVar2 & 0xff) == 0) && (uVar14 < uVar19 >> 8)) &&
         (pcVar27 = (char *)(iVar15 + (uVar19 >> 8)), *(uint *)(iVar15 + (uVar19 >> 8)) == *puVar8))
      {
        if (uVar33 <= uVar9) {
          pcVar18 = pcVar17 + local_5c + (-(uVar9 + (uVar19 >> 8)) - iVar15);
          iVar5 = FUN_01b9530c(puVar8 + 1,pcVar27 + 4,pcVar11,pcVar17,pcVar10);
          iVar5 = iVar5 + 4;
          goto LAB_01b999b0;
        }
LAB_01b99adc:
        pcVar27 = (char *)((int)piVar23 + uVar33);
        if (*(uint *)((int)piVar23 + uVar33) == *puVar8) goto code_r0x01b99af4;
      }
      else if (uVar9 < uVar33) goto LAB_01b99adc;
      if (local_70 <= puVar31) {
        local_7c = local_7c + 1;
        local_70 = local_70 + 0x40;
      }
      if (puVar12 < (uint *)((int)puVar31 + local_7c)) break;
      local_5c = (int)puVar31 - (int)piVar23;
      uVar26 = uVar28 * -0x61c8864f >> (uVar6 & 0xff);
      uVar2 = uVar28 * -0x61c8864f >> (0x18 - uVar4 & 0xff);
      uVar19 = *(uint *)(iVar13 + (uVar2 >> 8) * 4);
      uVar2 = uVar2 ^ uVar19;
      uVar33 = *(uint *)(iVar20 + uVar26 * 4);
      puVar24 = (uint *)((int)puVar31 + local_7c);
      puVar8 = puVar31;
    } while( true );
  }
LAB_01b99c0c:
  *param_3 = local_2c;
  param_3[1] = local_60;
  return (int)pcVar11 - (int)param_4;
LAB_01b9aa8c:
  if (puVar24 <= param_4 || pcVar27 <= pcVar16) goto LAB_01b9aab0;
  pcVar27 = pcVar27 + -1;
  if (*(char *)((int)puVar24 + -1) != *pcVar27) goto LAB_01b9aab0;
  iVar30 = iVar30 + 1;
  puVar24 = (uint *)((int)puVar24 + -1);
  goto LAB_01b9aa8c;
LAB_01b9aab0:
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar32 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar32,param_4);
    if (0x10 < uVar26) {
      iVar32 = param_2[3];
      FUN_01b95058(iVar32 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar32 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar32 + uVar26);
      }
    }
    goto LAB_01b9ab38;
  }
  goto LAB_01b9aca0;
code_r0x01b9abd0:
  pcVar18 = (char *)((int)puVar8 - (int)pcVar27);
  iVar30 = FUN_01b95220(puVar8 + 1,pcVar27 + 4,pcVar11);
  iVar30 = iVar30 + 4;
  while (param_4 < puVar24 && pcVar10 < pcVar27) {
    pcVar27 = pcVar27 + -1;
    if (*(char *)((int)puVar24 + -1) != *pcVar27) break;
    iVar30 = iVar30 + 1;
    puVar24 = (uint *)((int)puVar24 + -1);
  }
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar32 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar32,param_4);
    if (0x10 < uVar26) {
      iVar32 = param_2[3];
      FUN_01b95058(iVar32 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar32 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar32 + uVar26);
      }
    }
    goto LAB_01b9ab38;
  }
LAB_01b9aca0:
  FUN_01b95138(iVar32,param_4,puVar24);
LAB_01b9ab38:
  param_2[3] = param_2[3] + uVar26;
  puVar3 = (undefined4 *)param_2[1];
  if (0xffff < uVar26) {
    param_2[9] = 1;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)(puVar3 + 1) = (short)uVar26;
  *puVar3 = local_60;
  if (0xffff < iVar30 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)((int)puVar3 + 6) = (short)(iVar30 - 3U);
LAB_01b9a7f0:
  param_2[1] = (int)(puVar3 + 2);
  param_4 = (uint *)((int)puVar24 + iVar30);
  if (param_4 <= puVar12) {
    uVar26 = *(uint *)((int)piVar23 + (int)local_70 + 2);
    lVar1 = (ulonglong)uVar26 * 0xbf9b0000;
    uVar26 = *(int *)((int)piVar23 + (int)local_70 + 6) * -0x40650000 + uVar26 * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                      uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) = (int)local_70 + 2;
    lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xbf9b0000;
    uVar26 = *(int *)((int)param_4 + 2) * -0x40650000 + *(uint *)((int)param_4 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(char **)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                        uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) =
         (char *)((int)param_4 + (-2 - (int)piVar23));
    while( true ) {
      pcVar27 = pcVar18;
      iVar32 = (int)param_4 - (int)piVar23;
      uVar26 = iVar32 - (int)local_2c;
      if (uVar26 < uVar9) {
        puVar24 = (uint *)(pcVar17 + iVar15 + uVar26 + (-uVar9 - iVar15));
      }
      else {
        puVar24 = (uint *)((int)piVar23 + uVar26);
      }
      pcVar18 = pcVar27;
      if ((local_2c + ((uVar9 - 1) - iVar32) < (char *)0x3) || (*puVar24 != *param_4))
      goto LAB_01b9a9e4;
      pcVar18 = pcVar11;
      if (uVar26 < uVar9) {
        pcVar18 = pcVar17;
      }
      iVar30 = FUN_01b9530c(param_4 + 1,puVar24 + 1,pcVar11,pcVar18,pcVar10);
      if (pcVar11 + -0x20 < param_4) {
        FUN_01b95138(param_2[3],param_4,param_4);
      }
      else {
        FUN_01b95058(param_2[3],param_4);
      }
      puVar3 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar3 + 1) = 0;
      *puVar3 = 1;
      if (0xffff < iVar30 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar3 - *param_2 >> 3;
      }
      *(short *)((int)puVar3 + 6) = (short)(iVar30 + 1U);
      param_2[1] = (int)(puVar3 + 2);
      uVar26 = *param_4;
      puVar24 = param_4 + 1;
      param_4 = (uint *)((int)param_4 + iVar30 + 4);
      lVar1 = (ulonglong)uVar26 * 0xbf9b0000;
      uVar26 = *puVar24 * -0x40650000 + uVar26 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      *(int *)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                        uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) = iVar32;
      pcVar18 = local_2c;
      if (puVar12 < param_4) break;
      local_2c = pcVar27;
    }
    local_2c = pcVar27;
  }
LAB_01b9a9e4:
  puVar24 = (uint *)((int)param_4 + iVar22);
  local_60 = local_2c;
  puVar8 = param_4;
  local_2c = pcVar18;
  goto LAB_01b9a558;
LAB_01b9b2ec:
  if (puVar24 <= param_4 || pcVar27 <= pcVar16) goto LAB_01b9b310;
  pcVar27 = pcVar27 + -1;
  if (*(char *)((int)puVar24 + -1) != *pcVar27) goto LAB_01b9b310;
  iVar30 = iVar30 + 1;
  puVar24 = (uint *)((int)puVar24 + -1);
  goto LAB_01b9b2ec;
LAB_01b9b310:
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar32 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar32,param_4);
    if (0x10 < uVar26) {
      iVar32 = param_2[3];
      FUN_01b95058(iVar32 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar32 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar32 + uVar26);
      }
    }
    goto LAB_01b9b398;
  }
  goto LAB_01b9b500;
code_r0x01b9b430:
  pcVar18 = (char *)((int)puVar8 - (int)pcVar27);
  iVar30 = FUN_01b95220(puVar8 + 1,pcVar27 + 4,pcVar11);
  iVar30 = iVar30 + 4;
  while (param_4 < puVar24 && pcVar10 < pcVar27) {
    pcVar27 = pcVar27 + -1;
    if (*(char *)((int)puVar24 + -1) != *pcVar27) break;
    iVar30 = iVar30 + 1;
    puVar24 = (uint *)((int)puVar24 + -1);
  }
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar32 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar32,param_4);
    if (0x10 < uVar26) {
      iVar32 = param_2[3];
      FUN_01b95058(iVar32 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar32 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar32 + uVar26);
      }
    }
    goto LAB_01b9b398;
  }
LAB_01b9b500:
  FUN_01b95138(iVar32,param_4,puVar24);
LAB_01b9b398:
  param_2[3] = param_2[3] + uVar26;
  puVar3 = (undefined4 *)param_2[1];
  if (0xffff < uVar26) {
    param_2[9] = 1;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)(puVar3 + 1) = (short)uVar26;
  *puVar3 = local_60;
  if (0xffff < iVar30 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)((int)puVar3 + 6) = (short)(iVar30 - 3U);
LAB_01b9b050:
  param_2[1] = (int)(puVar3 + 2);
  param_4 = (uint *)((int)puVar24 + iVar30);
  if (param_4 <= puVar12) {
    uVar26 = *(uint *)((int)piVar23 + (int)local_70 + 2);
    lVar1 = (ulonglong)uVar26 * 0xbfa56300;
    uVar26 = *(int *)((int)piVar23 + (int)local_70 + 6) * -0x405a9d00 + uVar26 * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                      uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) = (int)local_70 + 2;
    lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xbfa56300;
    uVar26 = *(int *)((int)param_4 + 2) * -0x405a9d00 + *(uint *)((int)param_4 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(char **)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                        uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) =
         (char *)((int)param_4 + (-2 - (int)piVar23));
    while( true ) {
      pcVar27 = pcVar18;
      iVar32 = (int)param_4 - (int)piVar23;
      uVar26 = iVar32 - (int)local_2c;
      if (uVar26 < uVar9) {
        puVar24 = (uint *)(pcVar17 + iVar15 + uVar26 + (-uVar9 - iVar15));
      }
      else {
        puVar24 = (uint *)((int)piVar23 + uVar26);
      }
      pcVar18 = pcVar27;
      if ((local_2c + ((uVar9 - 1) - iVar32) < (char *)0x3) || (*puVar24 != *param_4))
      goto LAB_01b9b244;
      pcVar18 = pcVar11;
      if (uVar26 < uVar9) {
        pcVar18 = pcVar17;
      }
      iVar30 = FUN_01b9530c(param_4 + 1,puVar24 + 1,pcVar11,pcVar18,pcVar10);
      if (pcVar11 + -0x20 < param_4) {
        FUN_01b95138(param_2[3],param_4,param_4);
      }
      else {
        FUN_01b95058(param_2[3],param_4);
      }
      puVar3 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar3 + 1) = 0;
      *puVar3 = 1;
      if (0xffff < iVar30 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar3 - *param_2 >> 3;
      }
      *(short *)((int)puVar3 + 6) = (short)(iVar30 + 1U);
      param_2[1] = (int)(puVar3 + 2);
      uVar26 = *param_4;
      puVar24 = param_4 + 1;
      param_4 = (uint *)((int)param_4 + iVar30 + 4);
      lVar1 = (ulonglong)uVar26 * 0xbfa56300;
      uVar26 = *puVar24 * -0x405a9d00 + uVar26 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      *(int *)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                        uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) = iVar32;
      pcVar18 = local_2c;
      if (puVar12 < param_4) break;
      local_2c = pcVar27;
    }
    local_2c = pcVar27;
  }
LAB_01b9b244:
  puVar24 = (uint *)((int)param_4 + iVar22);
  local_60 = local_2c;
  puVar8 = param_4;
  local_2c = pcVar18;
  goto LAB_01b9adb8;
LAB_01b9a21c:
  if (puVar24 <= param_4 || pcVar27 <= pcVar16) goto LAB_01b9a240;
  pcVar27 = pcVar27 + -1;
  if (*(char *)((int)puVar24 + -1) != *pcVar27) goto LAB_01b9a240;
  iVar30 = iVar30 + 1;
  puVar24 = (uint *)((int)puVar24 + -1);
  goto LAB_01b9a21c;
LAB_01b9a240:
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar32 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar32,param_4);
    if (0x10 < uVar26) {
      iVar32 = param_2[3];
      FUN_01b95058(iVar32 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar32 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar32 + uVar26);
      }
    }
    goto LAB_01b9a2c8;
  }
  goto LAB_01b9a430;
code_r0x01b9a360:
  pcVar18 = (char *)((int)puVar8 - (int)pcVar27);
  iVar30 = FUN_01b95220(puVar8 + 1,pcVar27 + 4,pcVar11);
  iVar30 = iVar30 + 4;
  while (param_4 < puVar24 && pcVar10 < pcVar27) {
    pcVar27 = pcVar27 + -1;
    if (*(char *)((int)puVar24 + -1) != *pcVar27) break;
    iVar30 = iVar30 + 1;
    puVar24 = (uint *)((int)puVar24 + -1);
  }
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar32 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar32,param_4);
    if (0x10 < uVar26) {
      iVar32 = param_2[3];
      FUN_01b95058(iVar32 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar32 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar32 + uVar26);
      }
    }
    goto LAB_01b9a2c8;
  }
LAB_01b9a430:
  FUN_01b95138(iVar32,param_4,puVar24);
LAB_01b9a2c8:
  param_2[3] = param_2[3] + uVar26;
  puVar3 = (undefined4 *)param_2[1];
  if (0xffff < uVar26) {
    param_2[9] = 1;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)(puVar3 + 1) = (short)uVar26;
  *puVar3 = local_60;
  if (0xffff < iVar30 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)((int)puVar3 + 6) = (short)(iVar30 - 3U);
LAB_01b99f7c:
  param_2[1] = (int)(puVar3 + 2);
  param_4 = (uint *)((int)puVar24 + iVar30);
  if (param_4 <= puVar12) {
    uVar26 = *(uint *)((int)piVar23 + (int)local_70 + 2);
    lVar1 = (ulonglong)uVar26 * 0xbb000000;
    uVar26 = *(int *)((int)piVar23 + (int)local_70 + 6) * -0x45000000 + uVar26 * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                      uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) = (int)local_70 + 2;
    lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xbb000000;
    uVar26 = *(int *)((int)param_4 + 2) * -0x45000000 + *(uint *)((int)param_4 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(char **)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                        uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) =
         (char *)((int)param_4 + (-2 - (int)piVar23));
    while( true ) {
      pcVar27 = pcVar18;
      iVar32 = (int)param_4 - (int)piVar23;
      uVar26 = iVar32 - (int)local_2c;
      if (uVar26 < uVar9) {
        puVar24 = (uint *)(pcVar17 + iVar15 + uVar26 + (-uVar9 - iVar15));
      }
      else {
        puVar24 = (uint *)((int)piVar23 + uVar26);
      }
      pcVar18 = pcVar27;
      if ((local_2c + ((uVar9 - 1) - iVar32) < (char *)0x3) || (*puVar24 != *param_4))
      goto LAB_01b9a174;
      pcVar18 = pcVar11;
      if (uVar26 < uVar9) {
        pcVar18 = pcVar17;
      }
      iVar30 = FUN_01b9530c(param_4 + 1,puVar24 + 1,pcVar11,pcVar18,pcVar10);
      if (pcVar11 + -0x20 < param_4) {
        FUN_01b95138(param_2[3],param_4,param_4);
      }
      else {
        FUN_01b95058(param_2[3],param_4);
      }
      puVar3 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar3 + 1) = 0;
      *puVar3 = 1;
      if (0xffff < iVar30 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar3 - *param_2 >> 3;
      }
      *(short *)((int)puVar3 + 6) = (short)(iVar30 + 1U);
      param_2[1] = (int)(puVar3 + 2);
      uVar26 = *param_4;
      puVar24 = param_4 + 1;
      param_4 = (uint *)((int)param_4 + iVar30 + 4);
      lVar1 = (ulonglong)uVar26 * 0xbb000000;
      uVar26 = *puVar24 * -0x45000000 + uVar26 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      *(int *)(iVar20 + ((uint)lVar1 >> (uVar6 & 0xff) | uVar26 << (0x20 - uVar6 & 0xff) |
                        uVar26 >> (iVar5 + 0x20U & 0xff)) * 4) = iVar32;
      pcVar18 = local_2c;
      if (puVar12 < param_4) break;
      local_2c = pcVar27;
    }
    local_2c = pcVar27;
  }
LAB_01b9a174:
  puVar24 = (uint *)((int)param_4 + iVar22);
  local_60 = local_2c;
  puVar8 = param_4;
  local_2c = pcVar18;
  goto LAB_01b99ce4;
LAB_01b999b0:
  if (puVar24 <= param_4 || pcVar27 <= pcVar16) goto LAB_01b999d4;
  pcVar27 = pcVar27 + -1;
  if (*(char *)((int)puVar24 + -1) != *pcVar27) goto LAB_01b999d4;
  iVar5 = iVar5 + 1;
  puVar24 = (uint *)((int)puVar24 + -1);
  goto LAB_01b999b0;
LAB_01b999d4:
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar21 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar21,param_4);
    if (0x10 < uVar26) {
      iVar21 = param_2[3];
      FUN_01b95058(iVar21 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar21 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar21 + uVar26);
      }
    }
    goto LAB_01b99a5c;
  }
  goto LAB_01b99bc4;
code_r0x01b99af4:
  pcVar18 = (char *)((int)puVar8 - (int)pcVar27);
  iVar5 = FUN_01b95220(puVar8 + 1,pcVar27 + 4,pcVar11);
  iVar5 = iVar5 + 4;
  while (param_4 < puVar24 && pcVar10 < pcVar27) {
    pcVar27 = pcVar27 + -1;
    if (*(char *)((int)puVar24 + -1) != *pcVar27) break;
    iVar5 = iVar5 + 1;
    puVar24 = (uint *)((int)puVar24 + -1);
  }
  local_60 = pcVar18 + 3;
  uVar26 = (int)puVar24 - (int)param_4;
  iVar21 = param_2[3];
  if (puVar24 <= pcVar11 + -0x20) {
    FUN_01b95058(iVar21,param_4);
    if (0x10 < uVar26) {
      iVar21 = param_2[3];
      FUN_01b95058(iVar21 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar26 - 0x10)) {
        uVar2 = iVar21 + 0x20;
        do {
          FUN_01b95058(uVar2,param_4 + 8);
          FUN_01b95058(uVar2 + 0x10,param_4 + 0xc);
          uVar2 = uVar2 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar2 < iVar21 + uVar26);
      }
    }
    goto LAB_01b99a5c;
  }
LAB_01b99bc4:
  FUN_01b95138(iVar21,param_4,puVar24);
LAB_01b99a5c:
  param_2[3] = param_2[3] + uVar26;
  puVar3 = (undefined4 *)param_2[1];
  if (0xffff < uVar26) {
    param_2[9] = 1;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)(puVar3 + 1) = (short)uVar26;
  *puVar3 = local_60;
  if (0xffff < iVar5 - 3U) {
    param_2[9] = 2;
    param_2[10] = (int)puVar3 - *param_2 >> 3;
  }
  *(short *)((int)puVar3 + 6) = (short)(iVar5 - 3U);
LAB_01b99784:
  param_2[1] = (int)(puVar3 + 2);
  param_4 = (uint *)((int)puVar24 + iVar5);
  if (param_4 <= puVar12) {
    *(int *)(iVar20 + ((uint)(*(int *)((int)piVar23 + local_5c + 2) * -0x61c8864f) >> (uVar6 & 0xff)
                      ) * 4) = local_5c + 2;
    *(int *)(iVar20 + ((uint)(*(int *)((int)param_4 + -2) * -0x61c8864f) >> (uVar6 & 0xff)) * 4) =
         ((int)param_4 + -2) - (int)piVar23;
    puVar24 = param_4;
    while( true ) {
      pcVar27 = pcVar18;
      iVar21 = (int)puVar24 - (int)piVar23;
      uVar26 = iVar21 - (int)local_2c;
      if (uVar26 < uVar9) {
        puVar8 = (uint *)(pcVar17 + iVar15 + uVar26 + (-uVar9 - iVar15));
      }
      else {
        puVar8 = (uint *)((int)piVar23 + uVar26);
      }
      param_4 = puVar24;
      pcVar18 = pcVar27;
      if ((local_2c + ((uVar9 - 1) - iVar21) < (char *)0x3) || (*puVar8 != *puVar24))
      goto LAB_01b99908;
      pcVar18 = pcVar11;
      if (uVar26 < uVar9) {
        pcVar18 = pcVar17;
      }
      iVar5 = FUN_01b9530c(puVar24 + 1,puVar8 + 1,pcVar11,pcVar18,pcVar10);
      if (pcVar11 + -0x20 < puVar24) {
        FUN_01b95138(param_2[3],puVar24,puVar24);
      }
      else {
        FUN_01b95058(param_2[3],puVar24);
      }
      puVar3 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar3 + 1) = 0;
      *puVar3 = 1;
      if (0xffff < iVar5 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar3 - *param_2 >> 3;
      }
      *(short *)((int)puVar3 + 6) = (short)(iVar5 + 1U);
      param_2[1] = (int)(puVar3 + 2);
      param_4 = (uint *)((int)puVar24 + iVar5 + 4);
      *(int *)(iVar20 + (*puVar24 * -0x61c8864f >> (uVar6 & 0xff)) * 4) = iVar21;
      pcVar18 = local_2c;
      if (puVar12 < param_4) break;
      puVar24 = param_4;
      local_2c = pcVar27;
    }
    local_2c = pcVar27;
  }
LAB_01b99908:
  puVar24 = (uint *)((int)param_4 + iVar22);
  local_60 = local_2c;
  puVar8 = param_4;
  local_2c = pcVar18;
  goto LAB_01b99564;
}

