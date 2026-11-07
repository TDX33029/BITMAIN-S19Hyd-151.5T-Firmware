// FUN_017e8504 @ 017e8504 size=3840 calls_out=11 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017e8504(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  char *pcVar29;
  char *pcVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  uint local_74;
  char *local_70;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_54;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  iVar28 = *(int *)(param_1 + 4);
  puVar15 = (uint *)((int)param_4 + param_5);
  local_2c = DAT_018ddaf8;
  puVar16 = puVar15 + -4;
  uVar17 = *(uint *)(param_1 + 0xc4);
  uVar18 = uVar17;
  if (5 < uVar17) {
    uVar18 = 6;
  }
  pcVar29 = (char *)param_3[1];
  if (uVar18 < 4) {
    uVar18 = 4;
  }
  puVar19 = (uint *)(iVar28 + *(int *)(param_1 + 0xc));
  puVar34 = param_4;
  if (param_4 == puVar19) {
    puVar34 = (uint *)((int)param_4 + 1);
  }
  pcVar9 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  pcVar11 = (char *)((int)puVar34 + (-*(int *)(param_1 + 0xc) - iVar28));
  uVar20 = *(uint *)(param_1 + 200);
  if (pcVar11 <= pcVar9) {
    pcVar9 = pcVar11;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar9 = pcVar11;
  }
  pcVar11 = (char *)*param_3;
  if (pcVar9 < pcVar29) {
    local_64 = (char *)0x0;
    pcVar30 = pcVar29;
  }
  else {
    pcVar30 = (char *)0x0;
    local_64 = pcVar29;
  }
  if (pcVar9 < pcVar11) {
    local_5c = (char *)0x0;
    local_74 = 1;
    local_70 = (char *)0x0;
    local_54 = pcVar11;
  }
  else {
    local_70 = pcVar11;
    if (pcVar11 != (char *)0x0) {
      local_70 = (char *)0x1;
    }
    local_54 = (char *)0x0;
    local_74 = 0;
    local_5c = pcVar11;
  }
  uVar14 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar12 = (uint *)(uVar14 + iVar28);
  if (puVar12 <= puVar16) {
    iVar32 = *(int *)(param_1 + 0x5c);
    pcVar29 = (char *)((int)puVar16 + (1 - (int)puVar12));
    iVar35 = *(int *)(param_1 + 0x28);
    if (pcVar29 < (char *)0x9) {
      uVar27 = uVar14 + (int)pcVar29;
    }
    else {
      uVar27 = uVar14 + 8;
    }
    iVar13 = *(int *)(param_1 + 0x24);
    if (uVar14 < uVar27) {
      uVar36 = *(uint *)(param_1 + 0x50);
      uVar31 = *(uint *)(param_1 + 0x54);
      if (4 < uVar17) {
        if (uVar20 == 5) goto LAB_017e8800;
        do {
          if (5 < uVar20) {
            uVar24 = *puVar12;
            uVar26 = 0xbf9b0000;
            uVar33 = puVar12[1];
            goto LAB_017e8818;
          }
          uVar26 = (*puVar12 * -0x61c8864f ^ uVar36) >> (0x18U - iVar13 & 0xff);
          while( true ) {
            iVar1 = (uVar26 >> 8) << (uVar18 & 0xff);
            HintPreloadData(iVar35 + iVar1);
            HintPreloadData(iVar32 + iVar1 * 4);
            HintPreloadData(iVar32 + iVar1 * 4 + 0x40);
            if (uVar17 != 5) {
              HintPreloadData(iVar35 + iVar1 + 0x20);
            }
            uVar24 = uVar14 & 7;
            uVar14 = uVar14 + 1;
            *(uint *)(param_1 + uVar24 * 4 + 0x2c) = uVar26;
            if (uVar27 <= uVar14) goto LAB_017e8630;
            puVar12 = (uint *)(uVar14 + iVar28);
            if (uVar20 != 5) break;
LAB_017e8800:
            uVar24 = *puVar12;
            uVar26 = 0xbb000000;
            uVar33 = puVar12[1];
LAB_017e8818:
            uVar33 = uVar26 * uVar33 + uVar24 * -0x30e44324 +
                     (int)((ulonglong)uVar26 * (ulonglong)uVar24 >> 0x20) ^ uVar31;
            uVar26 = ((uint)((ulonglong)uVar26 * (ulonglong)uVar24) ^ uVar36) >>
                     (0x38U - iVar13 & 0xff) | uVar33 << (iVar13 - 0x18U & 0xff) |
                     uVar33 >> (0x18U - iVar13 & 0xff);
          }
        } while( true );
      }
      if (uVar20 == 5) {
        while( true ) {
          puVar10 = (uint *)(uVar14 + iVar28);
          uVar24 = uVar14 & 7;
          uVar14 = uVar14 + 1;
          lVar5 = (ulonglong)*puVar10 * 0xbb000000;
          uVar26 = puVar12[1] * -0x45000000 + *puVar10 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar31;
          uVar33 = ((uint)lVar5 ^ uVar36) >> (0x38U - iVar13 & 0xff) |
                   uVar26 << (iVar13 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar13 & 0xff);
          uVar26 = uVar33 >> 8;
          HintPreloadData(iVar32 + uVar26 * 0x40);
          HintPreloadData(iVar35 + uVar26 * 0x10);
          *(uint *)(param_1 + uVar24 * 4 + 0x2c) = uVar33;
          if (uVar27 <= uVar14) break;
          puVar12 = (uint *)(uVar14 + iVar28);
        }
      }
      else if (uVar20 < 6) {
        do {
          piVar2 = (int *)(uVar14 + iVar28);
          uVar24 = uVar14 & 7;
          uVar14 = uVar14 + 1;
          uVar26 = (*piVar2 * -0x61c8864f ^ uVar36) >> (0x18U - iVar13 & 0xff);
          uVar31 = uVar26 >> 8;
          HintPreloadData(iVar32 + uVar31 * 0x40);
          HintPreloadData(iVar35 + uVar31 * 0x10);
          *(uint *)(param_1 + uVar24 * 4 + 0x2c) = uVar26;
        } while (uVar14 < uVar27);
      }
      else {
        while( true ) {
          puVar10 = (uint *)(uVar14 + iVar28);
          uVar24 = uVar14 & 7;
          uVar14 = uVar14 + 1;
          lVar5 = (ulonglong)*puVar10 * 0xbf9b0000;
          uVar26 = puVar12[1] * -0x40650000 + *puVar10 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar31;
          uVar33 = ((uint)lVar5 ^ uVar36) >> (0x38U - iVar13 & 0xff) |
                   uVar26 << (iVar13 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar13 & 0xff);
          uVar26 = uVar33 >> 8;
          HintPreloadData(iVar32 + uVar26 * 0x40);
          HintPreloadData(iVar35 + uVar26 * 0x10);
          *(uint *)(param_1 + uVar24 * 4 + 0x2c) = uVar33;
          if (uVar27 <= uVar14) break;
          puVar12 = (uint *)(uVar14 + iVar28);
        }
      }
    }
  }
LAB_017e8630:
  if (puVar34 < puVar16) {
    do {
      pcVar29 = local_5c;
      if (local_5c != (char *)0x0) {
        pcVar29 = (char *)0x1;
      }
      if (*(int *)((int)puVar34 + (1 - (int)local_5c)) == *(int *)((int)puVar34 + 1)) {
        local_60 = (char *)((uint)pcVar29 & 1);
      }
      else {
        local_60 = (char *)0x0;
      }
      local_70 = local_64;
      if (local_60 == (char *)0x0) {
        local_40 = 999999999;
        if (uVar20 == 5) {
          if (uVar17 == 5) {
            pcVar9 = (char *)FUN_017c4ecc(param_1,puVar34,puVar15,&local_40);
          }
          else if (uVar17 < 6) {
            pcVar9 = (char *)FUN_017c34e8();
          }
          else {
            pcVar9 = (char *)FUN_017c6d40();
          }
        }
        else if (uVar20 < 6) {
          if (uVar17 == 5) {
            pcVar9 = (char *)FUN_017c3d84(param_1,puVar34,puVar15,&local_40);
          }
          else if (uVar17 < 6) {
            pcVar9 = (char *)FUN_017c2514();
          }
          else {
            pcVar9 = (char *)FUN_017c581c();
          }
        }
        else if (uVar17 == 5) {
          pcVar9 = (char *)FUN_017c4568(param_1,puVar34,puVar15,&local_40);
        }
        else if (uVar17 < 6) {
          pcVar9 = (char *)FUN_017c2c3c();
        }
        else {
          pcVar9 = (char *)FUN_017c61e4();
        }
        if ((pcVar9 != (char *)0x0) && ((char *)0x3 < pcVar9)) {
          uVar14 = local_40;
          puVar10 = puVar34;
          if (local_40 < 4) {
            if (local_64 != (char *)0x0) {
              local_70 = (char *)0x1;
            }
            local_60 = pcVar29;
          }
          else {
            puVar12 = (uint *)((int)puVar34 + (3 - local_40));
            if (param_4 < puVar34 && puVar19 < puVar12) {
              do {
                puVar12 = (uint *)((int)puVar12 + -1);
                puVar10 = (uint *)((int)puVar34 + -1);
                if (*(char *)((int)puVar34 + -1) != *(char *)puVar12) {
                  puVar10 = puVar34;
                  break;
                }
                pcVar9 = pcVar9 + 1;
                puVar34 = puVar10;
              } while (param_4 < puVar10 && puVar19 < puVar12);
            }
            local_64 = local_5c;
            local_5c = (char *)(local_40 - 3);
            local_60 = (char *)0x1;
            local_70 = pcVar29;
          }
          goto LAB_017e88d8;
        }
        uVar14 = ((uint)((int)puVar34 - (int)param_4) >> 8) + 1;
        puVar34 = (uint *)((int)puVar34 + uVar14);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar14);
      }
      else {
        puVar21 = (uint *)((int)puVar34 + 5);
        puVar10 = (uint *)((int)puVar34 + 1);
        puVar12 = (uint *)((int)puVar34 + (5 - (int)local_5c));
        if (puVar21 < (uint *)((int)puVar15 + -3)) {
          uVar14 = *(uint *)((int)puVar34 + (5 - (int)local_5c));
          if (uVar14 == *(uint *)((int)puVar34 + 5)) {
            for (puVar34 = (uint *)((int)puVar34 + 9); puVar12 = puVar12 + 1,
                puVar34 < (uint *)((int)puVar15 + -3); puVar34 = puVar34 + 1) {
              if (*puVar12 != *puVar34) {
                uVar14 = *puVar12 ^ *puVar34;
                bVar6 = (byte)uVar14;
                bVar7 = (byte)(uVar14 >> 8);
                bVar8 = (byte)(uVar14 >> 0x10);
                bVar3 = (byte)(uVar14 >> 0x18);
                pcVar9 = (char *)((int)puVar34 +
                                 (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                   bVar8 >> 1 & 1) << 1 |
                                                                  bVar8 >> 2 & 1) << 1 |
                                                                 bVar8 >> 3 & 1) << 1 |
                                                                bVar8 >> 4 & 1) << 1 |
                                                               bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1
                                                              ) << 1 | bVar8 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3) -
                                 (int)puVar21));
                goto LAB_017e88c0;
              }
            }
            goto LAB_017e8870;
          }
          uVar14 = uVar14 ^ *(uint *)((int)puVar34 + 5);
          bVar6 = (byte)uVar14;
          bVar7 = (byte)(uVar14 >> 8);
          bVar8 = (byte)(uVar14 >> 0x10);
          bVar3 = (byte)(uVar14 >> 0x18);
          pcVar9 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1
                                                           | bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1)
                                                          << 1 | bVar8 >> 4 & 1) << 1 |
                                                        bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1) << 1
                                                      | bVar8 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7)) >> 3);
        }
        else {
          puVar34 = puVar21;
LAB_017e8870:
          if (puVar34 < (uint *)((int)puVar15 + -1)) {
            if ((short)*puVar12 == (short)*puVar34) {
              puVar12 = (uint *)((int)puVar12 + 2);
              puVar34 = (uint *)((int)puVar34 + 2);
            }
          }
          if ((puVar34 < puVar15) && ((char)*puVar12 == (char)*puVar34)) {
            puVar34 = (uint *)((int)puVar34 + 1);
          }
          pcVar9 = (char *)((int)puVar34 - (int)puVar21);
        }
LAB_017e88c0:
        pcVar9 = pcVar9 + 4;
        uVar14 = 1;
        if (local_64 != (char *)0x0) {
          local_70 = (char *)0x1;
        }
LAB_017e88d8:
        uVar27 = (int)puVar10 - (int)param_4;
        puVar12 = puVar15 + -8;
        puVar34 = (uint *)param_2[3];
        if (puVar12 < puVar10) {
          FUN_017bfa44(puVar34,param_4,puVar10,puVar12);
LAB_017e8c5c:
          param_2[3] = param_2[3] + uVar27;
          puVar21 = (uint *)param_2[1];
          if (0xffff < uVar27) {
            param_2[10] = (int)puVar21 - *param_2 >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          uStack_38 = param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar34[3] = uStack_30;
          puVar34[2] = uStack_34;
          *puVar34 = local_3c;
          puVar34[1] = uStack_38;
          iVar35 = param_2[3];
          if (0x10 < uVar27) {
            local_3c = param_4[4];
            uStack_38 = param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(iVar35 + 0x10) = local_3c;
            *(uint *)(iVar35 + 0x14) = uStack_38;
            *(uint *)(iVar35 + 0x18) = uStack_34;
            *(uint *)(iVar35 + 0x1c) = uStack_30;
            if (0x10 < (int)(uVar27 - 0x10)) {
              puVar34 = param_4 + 0x10;
              puVar21 = (uint *)(iVar35 + 0x20);
              do {
                uVar31 = puVar34[-7];
                uVar36 = puVar34[-6];
                puVar22 = puVar21 + 8;
                uVar26 = puVar34[-5];
                *puVar21 = puVar34[-8];
                puVar21[1] = uVar31;
                puVar21[2] = uVar36;
                puVar21[3] = uVar26;
                local_3c = puVar34[-4];
                uStack_38 = puVar34[-3];
                uStack_34 = puVar34[-2];
                uStack_30 = puVar34[-1];
                puVar21[4] = local_3c;
                puVar21[5] = uStack_38;
                puVar21[6] = uStack_34;
                puVar21[7] = uStack_30;
                puVar34 = puVar34 + 8;
                puVar21 = puVar22;
              } while (puVar22 < (uint *)(iVar35 + uVar27));
            }
            goto LAB_017e8c5c;
          }
          param_2[3] = (int)(iVar35 + uVar27);
          puVar21 = (uint *)param_2[1];
        }
        *(short *)(puVar21 + 1) = (short)uVar27;
        *puVar21 = uVar14;
        if ((char *)0xffff < pcVar9 + -3) {
          param_2[10] = (int)puVar21 - *param_2 >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar21 + 6) = (short)(pcVar9 + -3);
        puVar34 = (uint *)((int)puVar10 + (int)pcVar9);
        param_2[1] = (int)(puVar21 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          uVar14 = *(uint *)(param_1 + 0x1c);
          puVar10 = (uint *)(uVar14 + iVar28);
          if (puVar10 <= puVar16) {
            iVar35 = *(int *)(param_1 + 0x28);
            pcVar29 = (char *)((int)puVar16 + (1 - (int)puVar10));
            iVar32 = *(int *)(param_1 + 0x24);
            if (pcVar29 < (char *)0x9) {
              uVar27 = uVar14 + (int)pcVar29;
            }
            else {
              uVar27 = uVar14 + 8;
            }
            iVar13 = *(int *)(param_1 + 0x5c);
            if (uVar14 < uVar27) {
              uVar31 = *(uint *)(param_1 + 0x50);
              uVar36 = *(uint *)(param_1 + 0x54);
              if (4 < uVar17) {
                do {
                  if (uVar20 == 5) {
                    uVar33 = *puVar10;
                    uVar24 = puVar10[1];
                    uVar26 = 0xbb000000;
LAB_017e9174:
                    uVar24 = uVar26 * uVar24 + uVar33 * -0x30e44324 +
                             (int)((ulonglong)uVar26 * (ulonglong)uVar33 >> 0x20) ^ uVar36;
                    uVar26 = ((uint)((ulonglong)uVar26 * (ulonglong)uVar33) ^ uVar31) >>
                             (0x38U - iVar32 & 0xff) | uVar24 << (iVar32 - 0x18U & 0xff) |
                             uVar24 >> (0x18U - iVar32 & 0xff);
                  }
                  else {
                    if (5 < uVar20) {
                      uVar33 = *puVar10;
                      uVar24 = puVar10[1];
                      uVar26 = 0xbf9b0000;
                      goto LAB_017e9174;
                    }
                    uVar26 = (*puVar10 * -0x61c8864f ^ uVar31) >> (0x18U - iVar32 & 0xff);
                  }
                  iVar1 = (uVar26 >> 8) << (uVar18 & 0xff);
                  HintPreloadData(iVar35 + iVar1);
                  HintPreloadData(iVar13 + iVar1 * 4);
                  HintPreloadData(iVar13 + iVar1 * 4 + 0x40);
                  if (uVar17 != 5) {
                    HintPreloadData(iVar35 + iVar1 + 0x20);
                  }
                  uVar24 = uVar14 & 7;
                  uVar14 = uVar14 + 1;
                  *(uint *)(param_1 + uVar24 * 4 + 0x2c) = uVar26;
                  if (uVar27 <= uVar14) goto LAB_017e89b4;
                  puVar10 = (uint *)(uVar14 + iVar28);
                } while( true );
              }
              if (uVar20 == 5) {
                while( true ) {
                  uVar33 = uVar14 & 7;
                  puVar21 = (uint *)(uVar14 + iVar28);
                  uVar14 = uVar14 + 1;
                  lVar5 = (ulonglong)*puVar21 * 0xbb000000;
                  uVar26 = puVar10[1] * -0x45000000 + *puVar21 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20) ^ uVar36;
                  uVar24 = ((uint)lVar5 ^ uVar31) >> (0x38U - iVar32 & 0xff) |
                           uVar26 << (iVar32 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar32 & 0xff);
                  uVar26 = uVar24 >> 8;
                  HintPreloadData(iVar13 + uVar26 * 0x40);
                  HintPreloadData(iVar35 + uVar26 * 0x10);
                  *(uint *)(param_1 + uVar33 * 4 + 0x2c) = uVar24;
                  if (uVar27 <= uVar14) break;
                  puVar10 = (uint *)(uVar14 + iVar28);
                }
              }
              else if (uVar20 < 6) {
                do {
                  piVar2 = (int *)(uVar14 + iVar28);
                  uVar24 = uVar14 & 7;
                  uVar14 = uVar14 + 1;
                  uVar26 = (*piVar2 * -0x61c8864f ^ uVar31) >> (0x18U - iVar32 & 0xff);
                  uVar36 = uVar26 >> 8;
                  HintPreloadData(iVar13 + uVar36 * 0x40);
                  HintPreloadData(iVar35 + uVar36 * 0x10);
                  *(uint *)(param_1 + uVar24 * 4 + 0x2c) = uVar26;
                } while (uVar14 < uVar27);
              }
              else {
                while( true ) {
                  uVar33 = uVar14 & 7;
                  puVar21 = (uint *)(uVar14 + iVar28);
                  uVar14 = uVar14 + 1;
                  lVar5 = (ulonglong)*puVar21 * 0xbf9b0000;
                  uVar26 = puVar10[1] * -0x40650000 + *puVar21 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20) ^ uVar36;
                  uVar24 = ((uint)lVar5 ^ uVar31) >> (0x38U - iVar32 & 0xff) |
                           uVar26 << (iVar32 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar32 & 0xff);
                  uVar26 = uVar24 >> 8;
                  HintPreloadData(iVar13 + uVar26 * 0x40);
                  HintPreloadData(iVar35 + uVar26 * 0x10);
                  *(uint *)(param_1 + uVar33 * 4 + 0x2c) = uVar24;
                  if (uVar27 <= uVar14) break;
                  puVar10 = (uint *)(uVar14 + iVar28);
                }
              }
            }
          }
LAB_017e89b4:
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        if (puVar16 < puVar34) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)((uint)local_70 & 1);
        }
        if (pcVar29 == (char *)0x0) {
          pcVar29 = local_60;
          param_4 = puVar34;
        }
        else {
          while( true ) {
            pcVar11 = local_5c;
            pcVar9 = local_64;
            if (*puVar34 != *(uint *)((int)puVar34 - (int)local_64)) break;
            puVar21 = puVar34 + 1;
            puVar10 = (uint *)((int)puVar34 + (4 - (int)local_64));
            if (puVar21 < (uint *)((int)puVar15 + -3)) {
              uVar14 = *(uint *)((int)puVar34 + (4 - (int)local_64));
              if (uVar14 == puVar34[1]) {
                for (puVar22 = puVar34 + 2; puVar10 = puVar10 + 1,
                    puVar22 < (uint *)((int)puVar15 + -3); puVar22 = puVar22 + 1) {
                  if (*puVar10 != *puVar22) {
                    uVar14 = *puVar10 ^ *puVar22;
                    bVar6 = (byte)uVar14;
                    bVar7 = (byte)(uVar14 >> 8);
                    bVar8 = (byte)(uVar14 >> 0x10);
                    bVar3 = (byte)(uVar14 >> 0x18);
                    pcVar25 = (char *)((int)puVar22 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar21));
                    goto LAB_017e8f8c;
                  }
                }
                goto LAB_017e8f3c;
              }
              uVar14 = uVar14 ^ puVar34[1];
              bVar6 = (byte)uVar14;
              bVar7 = (byte)(uVar14 >> 8);
              bVar8 = (byte)(uVar14 >> 0x10);
              bVar3 = (byte)(uVar14 >> 0x18);
              pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1)
                                                                 << 1 | bVar8 >> 2 & 1) << 1 |
                                                               bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1
                                                              ) << 1 | bVar8 >> 5 & 1) << 1 |
                                                            bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8
                                               | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
            }
            else {
              puVar22 = puVar21;
LAB_017e8f3c:
              if (puVar22 < (uint *)((int)puVar15 + -1)) {
                if ((short)*puVar10 == (short)*puVar22) {
                  puVar10 = (uint *)((int)puVar10 + 2);
                  puVar22 = (uint *)((int)puVar22 + 2);
                }
              }
              if ((puVar22 < puVar15) && ((char)*puVar10 == (char)*puVar22)) {
                puVar22 = (uint *)((int)puVar22 + 1);
              }
              pcVar25 = (char *)((int)puVar22 - (int)puVar21);
            }
LAB_017e8f8c:
            puVar10 = (uint *)param_2[3];
            if (puVar12 < puVar34) {
              FUN_017bfa44(puVar10,puVar34,puVar34,puVar12);
            }
            else {
              local_3c = *puVar34;
              uStack_38 = puVar34[1];
              uStack_34 = puVar34[2];
              uStack_30 = puVar34[3];
              *puVar10 = local_3c;
              puVar10[1] = uStack_38;
              puVar10[2] = uStack_34;
              puVar10[3] = uStack_30;
            }
            puVar34 = (uint *)((int)puVar34 + (int)(pcVar25 + 4));
            puVar23 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar23 + 1) = 0;
            *puVar23 = 1;
            uVar4 = SUB42(pcVar25 + 1,0);
            param_4 = puVar34;
            if (pcVar25 + 1 < (char *)0x10000) {
              *(undefined2 *)((int)puVar23 + 6) = uVar4;
              param_2[1] = (int)(puVar23 + 2);
              if (local_5c == (char *)0x0 || puVar16 < puVar34) {
                local_5c = local_64;
                local_64 = pcVar11;
                goto LAB_017e8a08;
              }
            }
            else {
              param_2[10] = (int)puVar23 - *param_2 >> 3;
              param_2[9] = 2;
              *(undefined2 *)((int)puVar23 + 6) = uVar4;
              param_2[1] = (int)(puVar23 + 2);
              if (local_5c == (char *)0x0 || puVar16 < puVar34) {
                local_5c = local_64;
                local_64 = pcVar11;
                goto LAB_017e8a08;
              }
            }
            local_64 = local_5c;
            local_5c = pcVar9;
          }
          pcVar29 = local_5c;
          param_4 = puVar34;
          if (local_5c != (char *)0x0) {
            pcVar29 = (char *)0x1;
          }
        }
      }
LAB_017e8a08:
    } while (puVar34 < puVar16);
    local_70 = pcVar29;
  }
  if ((local_74 & (uint)local_70) == 0) {
    if (local_5c == (char *)0x0) {
      local_5c = local_54;
    }
    local_54 = pcVar30;
  }
  if (local_64 == (char *)0x0) {
    local_64 = local_54;
  }
  *param_3 = local_5c;
  param_3[1] = local_64;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar15 - (int)param_4,local_5c,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

